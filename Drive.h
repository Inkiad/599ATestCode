int DEADZONE = 20

void drive(int rightSpeed, int leftSpeed)
{
	rightjoystickY = vexRT[ch2];
	leftjoystickY = vexRT[ch3];
	joystickX = vexRT[ch4];

	if (leftjoystickY > DEADZONE && rightjoystickY > DEADZONE)
	{
		rightspeed = 127;
		leftSpeed = 127;
	}
	if (leftjoystickY < -DEADZONE && rightjoystickY < -DEADZONE)
	{
		rightSpeed = -127;
		leftSpeed = -127;
	}
	if ((leftjoystickY > -DEADZONE && leftjoystickY < DEADZONE) && (rightjoystickY > -DEADZONE && rightjoystickY < DEADZONE))
	{
		rightSpeed = 0;
		leftSpeed = 0;
	}
  if (leftjoystickY > DEADZONE && rightjoystickY < -DEADZONE)
	{
		rightSpeed = -127;
		leftSpeed = 127;
  }
   if (leftjoystickY < -DEADZONE && rightjoystickY > DEADZONE)
	{
		rightSpeed = 127;
		leftSpeed = -127;
  }
}
