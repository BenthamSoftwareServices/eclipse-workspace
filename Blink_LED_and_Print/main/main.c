#include "driver/gpio.h"
#include "esp_event.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/unistd.h>
#include <unistd.h>

// Led is connected GPIO 2, the on-board LED on an ESP32 module
#define led 2

int count = 0; // A value to be incremented and compared to predefined_value
int predefined_value = 1000; // Define the predefined value
int var = 0;                 // Initialise the variable

void app_main(void) {

  esp_rom_gpio_pad_select_gpio(led); // Initialise the led pin (gpio 2) //
  gpio_set_direction(led,
                     GPIO_MODE_OUTPUT); // led pin initialise as an output //

  int level = 1; // led OFF value

  while (true) {
    printf("Hello from app_main!\n");
    // sleep(1); //Delay 1 second
    vTaskDelay(200 / portTICK_PERIOD_MS); //Delay 200mS

    if (count == predefined_value) {
      printf("Predefined value reached. Run While loop...\n");
      while (var < 10) {
        printf("Running While loop...\n");
        sleep(1); //Delay 1 second
        // Do nothing inside the loop
      }
    }
    count++;
    printf("The value of count is: %d\n", count);
    // sleep(1); //Delay 1 second
    vTaskDelay(200 / portTICK_PERIOD_MS); //Delay 200mS
    gpio_set_level(led, level); // led will be turn ON (level = 0) and OFF
                                // (level =1) as value of level
    level = !level;             // change the level value
  }
}