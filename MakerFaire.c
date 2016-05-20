#pragma config(Motor,  port1,           catapult1,     tmotorVex393_HBridge, openLoop)
#pragma config(Motor,  port2,           puncher1,      tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           puncher2,      tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port4,           conveyorBelt,  tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port5,           roller,        tmotorVex269_MC29, openLoop)
#pragma config(Motor,  port6,           leftFront,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port7,           leftBack,      tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port8,           rightFront,    tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           rightBack,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port10,          catapult2,     tmotorVex393_HBridge, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#pragma platform(VEX)

//Competition Control and Duration Settings
#pragma competitionControl(Competition)
#pragma autonomousDuration(15)
#pragma userControlDuration(105)

#include "Vex_Competition_Includes.c"   //Main competition background code...do not modify!

/////////////////////////////////////////////////////////////////////////////////////////
//
//                          Pre-Autonomous Functions
//
// You may want to perform some actions before the competition starts. Do them in the
// following function.
//
/////////////////////////////////////////////////////////////////////////////////////////

void pre_auton()
{
  // Set bStopTasksBetweenModes to false if you want to keep user created tasks running between
  // Autonomous and Tele-Op modes. You will need to manage all user created tasks if set to false.
  bStopTasksBetweenModes = true;

	// All activities that occur before the competition starts
	// Example: clearing encoders, setting servo positions, ...
}

task autonomous()
{
  // .....................................................................................
  // Insert user code here.
  // .....................................................................................

	AutonomousCodePlaceholderForTesting();  // Remove this function call once you have "real" code.
}

task usercontrol()
{
while (true)
	{
 		//Flywheel Left
 		if(vexRT[Btn6DXmtr2] == 1)
 		{
			motor[puncher1] = 127;
 		}
 		else
 		{
 			motor[puncher1] = 0;
 		}
 
 		//Flywheel Right
 		if(vexRT[Btn6DXmtr2] == 1)
 		{
 			motor[puncher2] = -127;
 		}
 		else
 		{
 			motor[puncher2] = 0;
 		}
 
 		//Flywheel Left Backwards
 		if(vexRT[Btn5DXmtr2] == 1)
 		{
 			motor[puncher1] = -127;
 		}
 		else
 		{
 			motor[puncher1] = 0;
 		}
 
 		//Flywheel Right Backwards
 		if(vexRT[Btn5DXmtr2] == 1)
 		{
 			motor[puncher2] = 127;
 		}
   		else
   		{
 			motor[puncher2] = 0;
 		}
 
 		//Catapult
 		if(vexRT[Btn5UXmtr2] == 1)
 		{
 			motor[catapult1] = 127;
 		}
 		else
 		{
 			motor[catapult1] = 0;
 		}
 		
 		if(vexRT[Btn5UXmtr2] == 1)
 		{
 			motor[catapult2] = 127;
 		}
 		else
 		{
 			motor[catapult2] = 0;
 		}
 
		//Backward Catapult
		if(vexRT[Btn6UXmtr2] == 1)
 		{
 			motor[catapult1] = -127;
 		}
 		else
 		{
 			motor[catapult1] = 0;
 		}
 		
 		if(vexRT[Btn6UXmtr2] == 1)
 		{
 			motor[catapult2] = -127;
 		}
 		else
 		{
 			motor[catapult2] = 0;
 		}
 
 		//Conveyer Belt
 		if(vexRT[Btn6D] == 1)
 		{
 			motor[conveyorBelt] = 120;
 		}
 		else
 		{
 			motor[conveyorBelt] = 0;
 		}
 
 		//Conveyer Belt
 		if(vexRT[Btn6U] == 1)
 		{
 			motor[conveyorBelt] = 120;
 		}
 		else
 		{
 			motor[conveyorBelt] = 0;
 		}
 
 		//Roller
 		if(vexRT[Btn5D] == 1)
 		{
 			motor[roller] = 120;
 		}
 		else
 		{
 			motor[roller] = 0;
 		}
 
 		//Conveyer Belt Backward
 		if(vexRT[Btn5U] == 1)
 		{
 			motor[roller] = -120;
 		}
 		else
 		{
 			motor[roller] = 0;
 		}
 
 	  motor[leftBack] = vexRT[Ch3];
 	  motor[leftFront] = vexRT[Ch3];
 
 	  motor[rightFront] = vexRT[Ch2];
 	  motor[rightBack] = vexRT[Ch2];
 }
}
