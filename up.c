#include "up.h"

uint16_t MOTOR_SPEED;

int windowUp(uint8_t IGN, uint8_t DOOR_STATE, uint8_t MOVING_UP_SW)
{
    if(MOTOR_SPEED >= 600)
        WINDOW_FULLY_CLOSED = true;
    else
        WINDOW_FULLY_CLOSED = false;

    if(!WINDOW_FULLY_CLOSED)
    {
        if (MOVING_UP_SW)
        {
            if((IGN==1) || (DOOR_STATE==1))
            {
                MOTOR_SPEED += 4;
                POWER_WINDOW_STATUS=1;
            }
            else
                WINDOW_FULLY_CLOSED = true;
        }
    }
    else
        POWER_WINDOW_STATUS=0;

return POWER_WINDOW_STATUS;
}

