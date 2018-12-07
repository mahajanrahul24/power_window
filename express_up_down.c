#include "express_up_down.h"

uint8_t Express_Signal(uint8_t IGNITION, uint8_t DOOR_STATUS, uint8_t ONE_TOUCH_EXPRESS_UP_DOWN, uint8_t OBSTACLE_SENSOR)
{
    if ((IGNITION==1) || (DOOR_STATUS==1))
	{
		if(ONE_TOUCH_EXPRESS_UP_DOWN == 1)
		{
			if(!WINDOW_FULLY_CLOSED)
			{
				do
					{
						MOTOR_SPEED += 4;
					}while((MOTOR_SPEED!=600) && (OBSTACLE_SENSOR!=1));
				if (OBSTACLE_SENSOR==1)
				{
					MOTOR_SPEED -=40;
					POWER_WINDOW_STATUS=2;
					return POWER_WINDOW_STATUS;
				}
			}
			else
			{
				POWER_WINDOW_STATUS=0;
				return POWER_WINDOW_STATUS;
			}
			POWER_WINDOW_STATUS = 1;
			return POWER_WINDOW_STATUS;
		}
		else if (ONE_TOUCH_EXPRESS_UP_DOWN == 0)
		{
			if(!WINDOW_FULLY_OPEN)
			{
				do
				{
					MOTOR_SPEED -= 4;
				}while(MOTOR_SPEED!=0);
				POWER_WINDOW_STATUS =2;
				return POWER_WINDOW_STATUS;
			}
			else
			{
				POWER_WINDOW_STATUS=0;
				return POWER_WINDOW_STATUS;
			}

		}
		else
		{
			POWER_WINDOW_STATUS=0;
			return POWER_WINDOW_STATUS;
		}
	}
}


