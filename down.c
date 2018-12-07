#include "down.h"

uint16_t MOTOR_SPEED = 600;

int windowDown(uint8_t IGNITION, uint8_t DOOR_STATUS, uint8_t MOVING_DOWN_SWITCH)
{

    if (MOTOR_SPEED == 600)
        {
            WINDOW_FULLY_CLOSED = true;
        }
        else
        {
            WINDOW_FULLY_CLOSED = false;
        }
    if (MOVING_DOWN_SWITCH == 1)
    {
        if ((DOOR_STATUS == 1) || (IGNITION == 1 ))
        {

            POWER_WINDOW_STATUS = 2;
            MOTOR_SPEED -=4;
            return POWER_WINDOW_STATUS;

        }

        else if((DOOR_STATUS == 0)&& (IGNITION == 0))
        {
            POWER_WINDOW_STATUS = 0;
            return POWER_WINDOW_STATUS;
        }
    }

    if (MOTOR_SPEED <= 0);
    {
        WINDOW_FULLY_OPEN = true;

    }
}
