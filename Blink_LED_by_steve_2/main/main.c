#include "driver/gpio.h"
#include "esp_event.h"
#include <stdbool.h>
#include <stdio.h>
#include <sys/unistd.h>
#include <unistd.h>

#define led 2 //  Led is connected GPIO 2

int count = 0;

void app_main(void) {

  esp_rom_gpio_pad_select_gpio(led); // Initialise the led pin (gpio 2) //
  gpio_set_direction(led,
                     GPIO_MODE_OUTPUT); // led pin initialise as an output //

  int level = 1; //led OFF value

  while (true) {
    printf("Hello from app_main!\n");
    sleep(1);
    count++;
    printf("The value of count is: %d\n", count);
    sleep(1);
    gpio_set_level(led, level); // led will be turn ON (level = 0) and OFF (level =1) as value of level
    level = !level; // change the level value
  }
}
