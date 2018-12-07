#include "up.h"

uint16_t MOTOR_SPEED = 0;

int Power_Window_UP_Mode(uint8_t IGNITION, uint8_t DOOR_STATUS, uint8_t MOVING_UP_SWITCH)
{
    uint8_t local_MOVING_UP_SWITCH = MOVING_UP_SWITCH;
    if (MOTOR_SPEED == 0)
        {
            WINDOW_FULLY_OPEN = true;
        }
        else
        {
            WINDOW_FULLY_OPEN = false;
        }
    if (local_MOVING_UP_SWITCH == 1)
    {
        if ((DOOR_STATUS == 1) || (IGNITION == 1 ))
        {
            POWER_WINDOW_STATUS = 1;
            MOTOR_SPEED +=4;
            return POWER_WINDOW_STATUS;
        }

        else if ((DOOR_STATUS == 0) && (IGNITION == 0 ))
        {
            POWER_WINDOW_STATUS = 0;
            return POWER_WINDOW_STATUS;
        }
    }

    if (MOTOR_SPEED >= 600);
    {
        WINDOW_FULLY_CLOSED = true;
        
    }
}
