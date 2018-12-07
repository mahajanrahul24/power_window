#include "down.h"

int windowDown(uint8_t IGN, uint8_t DOOR_STATE, uint8_t MOVING_DOWN_SW)
{
    if(MOTOR_SPEED == 0)
        WINDOW_FULLY_OPEN = true;
    else
        WINDOW_FULLY_OPEN = false;

    if(!WINDOW_FULLY_OPEN)
    {
        if (MOVING_DOWN_SW)
        {
            if((IGN==1) || (DOOR_STATE==1))
            {
                MOTOR_SPEED -= 4;
                POWER_WINDOW_STATUS=1;
            }
            else
                WINDOW_FULLY_OPEN = true;
        }
    }
    else
        POWER_WINDOW_STATUS=0;

return POWER_WINDOW_STATUS;
}
