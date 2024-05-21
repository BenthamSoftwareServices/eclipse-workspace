#include "esp_event.h"
#include "driver/gpio.h"

int count=0;
void app_main(void)
{
    while (true) {
       count++; 
    }
}
