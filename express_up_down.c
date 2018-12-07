#include "express_up_down.h"

uint16_t Express_Signal(uint8_t IGNITION, uint8_t DOOR_STATUS, uint8_t ONE_TOUCH_EXPRESS_UP_DOWN)
{
    int i;

    while(ONE_TOUCH_EXPRESS_UP_DOWN == 1){
            // Control the Express bottom UP, when window is totally open
            if(IGNITION == 1 && (WINDOW_FULLY_OPEN == 1) && (DOOR_STATUS == 1)){
                for(i=0; i<150; i++){
                    MOTOR_SPEED = 4 + MOTOR_SPEED;
                }
                if (MOTOR_SPEED == 600){
                        WINDOW_FULLY_CLOSED = 1;
                        WINDOW_IN_MIDDLE = 0;
                        ONE_TOUCH_EXPRESS_UP_DOWN =0;
                        break;
                }
            }
            // Control the Express bottom UP, when window is middle open
            if(IGNITION == 1 && (WINDOW_IN_MIDDLE == 1) && (DOOR_STATUS == 1)){
                    for(int i=0; i<150; i++)
                    {
                        MOTOR_SPEED = 4 + MOTOR_SPEED;
                    }
                     if (MOTOR_SPEED == 600){
                        WINDOW_FULLY_CLOSED = 1;
                        WINDOW_IN_MIDDLE = 0;
                        WINDOW_FULLY_OPEN = 0;
                        ONE_TOUCH_EXPRESS_UP_DOWN =0;
                        break;
                }
            }
    }


    // control Express bottom down
    while(ONE_TOUCH_EXPRESS_UP_DOWN == 2)
    {
        // Control the Express bottom DOWN, when window is totally close
        if(IGNITION == 1 && (WINDOW_FULLY_CLOSED == 1)&& (DOOR_STATUS == 1))
        {
            for(i=0; i<150; i++){
                    MOTOR_SPEED =MOTOR_SPEED - 4;
                }
            if(MOTOR_SPEED == 0){
                WINDOW_FULLY_CLOSED = 0;
                WINDOW_IN_MIDDLE = 0;
                WINDOW_FULLY_OPEN = 1;
                ONE_TOUCH_EXPRESS_UP_DOWN =0;
                break;
            }

        }
        // Control the Express bottom DOWN, when window is middle close
        if(IGNITION == 1 && (WINDOW_IN_MIDDLE == 1) && (DOOR_STATUS == 1)){
                    for(int i=0; i<150; i++)
                    {
                        MOTOR_SPEED = MOTOR_SPEED - 4;
                    }
                     if (MOTOR_SPEED == 600){
                        WINDOW_FULLY_CLOSED = 0;
                        WINDOW_IN_MIDDLE = 0;
                        WINDOW_FULLY_OPEN = 1;
                        ONE_TOUCH_EXPRESS_UP_DOWN =0;
                        break;
                     }
                }

    }

   return MOTOR_SPEED;
}

