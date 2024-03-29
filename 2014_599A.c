#pragma config(Motor,  port1,           left_rear_drive_motor, tmotorVex393_HBridge, openLoop, reversed)
#pragma config(Motor,  port2,           left_front_drive_motor, tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port3,           right_rear_drive_motor, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port4,           right_front_gear_motor, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port5,           middle_motor,  tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port6,           left_lift_motor, tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port7,           manipulator_pivot_claw_motor, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port8,           right_lift_motor1, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           right_lift_motor2, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port10,          claw_motor,    tmotorVex393_HBridge, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#pragma platform(VEX)
#pragma competitionControl(Competition)
#pragma autonomousDuration(20)
#pragma userControlDuration(120)

#include "Vex_Competition_Includes.c"
void pre_auton()
{

  bStopTasksBetweenModes = true;


}



task autonomous()
{


	AutonomousCodePlaceholderForTesting();


task usercontrol()
{


	while (true)
	{


	  UserControlCodePlaceholderForTesting();
}
