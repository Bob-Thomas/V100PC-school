#include <hwlib-due.hpp>

int main( void ){
    // kill the watchdog
    WDT->WDT_MR = WDT_MR_WDDIS;

    hwlib::target::pin_in_out leds[4] = {
         hwlib::target::pin_in_out(hwlib::target::pins::d5),
         hwlib::target::pin_in_out(hwlib::target::pins::d6),
         hwlib::target::pin_in_out(hwlib::target::pins::d7),
         hwlib::target::pin_in_out(hwlib::target::pins::d8)
     };

    for(uint8_t i = 0; i < 4; i++) {
        leds[i].direction_set_output();
    }

    while(1){
        for(uint8_t i = 0; i < 3; i++) {
            if(i > 0) {
                leds[i-1].set(0);
            }
            leds[i].set(1);
            leds[i+1].set(1);
            hwlib::wait_ms(250);
        }

        for(uint8_t i = 3; i > 0; i--) {
            if(i < 3) {
                leds[i+1].set(0);
            }
            leds[i].set(1);
            leds[i-1].set(1);
            hwlib::wait_ms(250);
        }
    }
}
