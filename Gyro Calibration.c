task main()
{ while(true){
	float batVal = 0.0;
	float gyroVal = 0.0;
	batVal = nAvgBatteryLevel / 1000.0;
  gyroVal = SensorValue[S3];
	nxtDisplayTextLine(1,"Battery = %.3f", batVal);
  nxtDisplayTextLine(3,"Gyro = %.3f",gyroVal);
}
}
