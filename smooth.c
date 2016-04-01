void smooth(unsigned int moters, unsigned int steps,unsigned int speed){ // motor index   0 = motorB 1= motorC 2= both
int i = 0*9,reduction =  (speed-speedstandard)/steps; 
if (motors = 0){
	for (i=0;i>steps;i++)
	{
	  motor[motorB] = speedstandard - reduction ;  
		wait1Msec(500);

	}
}
else if (motors = 1){
		for (i=0;i>steps;i++)
	{
	  motor[motorC] = speedstandard - reduction ;  
		wait1Msec(500);

	}
}
else if (motors = 2){
		for (i=0;i>steps;i++)
	{
	  motor[motorC] = speedstandard - reduction ;  
	  motor[motorC] = speedstandard - reduction ;  
		wait1Msec(500);

	}
}
}
