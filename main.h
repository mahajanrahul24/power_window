#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

extern uint16_t MOTOR_SPEED;

volatile uint8_t IGNITION;
volatile uint8_t DOOR_STATUS;
volatile uint8_t MOVING_UP_SWITCH;
volatile uint8_t MOVING_DOWN_SWITCH;
volatile uint8_t ONE_TOUCH_EXPRESS_UP_DOWN;
 volatile uint8_t OBSTACLE_SENSOR;
 volatile uint8_t POWER_WINDOW_STATUS;

 volatile bool WINDOW_FULLY_CLOSED;
 volatile bool WINDOW_FULLY_OPEN;
 volatile bool WINDOW_IN_MIDDLE;

#endif
