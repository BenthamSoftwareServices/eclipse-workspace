#include <freertos/FreeRTOS.h>
#include <freertos/task.h>
#include <driver/gpio.h>

#define LED_GPIO 2 // Replace with the GPIO number for your LED

void app_main(void)
{
    // Configure the LED GPIO as output
    gpio_reset_pin(LED_GPIO);
    gpio_set_direction(LED_GPIO, GPIO_MODE_OUTPUT);

    while (1) {
        // Turn the LED on
        gpio_set_level(LED_GPIO, 1);
        vTaskDelay(pdMS_TO_TICKS(100)); // Delay for 1 second

        // Turn the LED off
        gpio_set_level(LED_GPIO, 0);
        vTaskDelay(pdMS_TO_TICKS(1000)); // Delay for 1 second
    }
}