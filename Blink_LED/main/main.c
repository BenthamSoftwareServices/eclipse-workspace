
#include "driver/gpio.h"
#include "esp_event.h"

#define led 2 //  Led is connected GPIO 2

void app_main(void) {

  esp_rom_gpio_pad_select_gpio(led); // Initialise the led pin (gpio 2) //
  gpio_set_direction(led,
                     GPIO_MODE_OUTPUT); // led pin initialise as an output //

  int level = 0;

  while (true) {
    gpio_set_level(led, level); // led will be turn ON (level = 0) and OFF (level =1) as value of level
    level = !level;             // change the level value
    vTaskDelay(500 / portTICK_PERIOD_MS); // delay of 1 second //
  }
}
