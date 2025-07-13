#include "freertos/FreeRTOS.h"
#include "freertos/task.h"


#include "glowservo.h"


void app_main(void)
{
    // Sets up the Glow Servo
    glowservo_attach(GPIO_NUM_18);
    
    while (true) {
        glowservo_off();
        vTaskDelay(pdMS_TO_TICKS(500));
        glowservo_home();
        vTaskDelay(pdMS_TO_TICKS(1000));
        // glowservo_off();
        // vTaskDelay(pdMS_TO_TICKS(500));
    }
}
