#include <stdio.h>
#include "driver/ledc.h"

#define SPEED_MODE      LEDC_LOW_SPEED_MODE
#define TIMER_NUM       LEDC_TIMER_0
#define DUTY_RESOLUTION LEDC_TIMER_13_BIT
#define FREQUENCY       50
#define CLK_CONFIG      LEDC_AUTO_CLK
#define CHANNEL         LEDC_CHANNEL_0
#define INTR_TYPE       LEDC_INTR_DISABLE

#define SERVO_OFF_PULSEWIDTH 800   // µs
#define SERVO_HOME_PULSEWIDTH 1400 // µs
#define SERVO_ON_PULSEWIDTH 2000   // µs

void glowservo_attach(uint8_t SERVO_PIN); // Attach PWM

void glowservo_detach(); // Detach PWM

void glowservo_on(); // Go to on position

void glowservo_off(); // Go to off position

void glowservo_home(); // Go to middle
