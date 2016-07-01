#include <hwlib-due.hpp>

bool pressed = false;
uint8_t amount = 0;
byte dataArray[10] = {
    0x00, //0b00000000
    0x80, //0b10000000
    0xC0, //0b11000000
    0xE0, //0b11100000
    0xF0, //0b11110000
    0xF8, //0b11111000
    0xFC, //0b11111100
    0xFE, //0b11111110
    0xFF //0b11111111
}; 
void range_control(auto more_button, auto less_button, auto & leds){
   if(!more_button.get() && amount < 8 && !pressed) {
       pressed = true;
       amount++;
       hwlib::cout << "MORE";
       hwlib::wait_ms(100);
   }

   if(!less_button.get() && amount > 0 && !pressed) {
       pressed = true;
       amount--;
       hwlib::cout << "LESS";
       hwlib::wait_ms(100);
   }

   if(pressed && more_button.get() && less_button.get()) {
       pressed = false;
   }

   leds.set(dataArray[amount]);
}


int main( void ){
    // kill the watchdog
    WDT->WDT_MR = WDT_MR_WDDIS;
    auto ds = hwlib::target::pin_out( hwlib::target::pins::d31 );
    auto shcp = hwlib::target::pin_out( hwlib::target::pins::d33 );
    auto stcp = hwlib::target::pin_out( hwlib::target::pins::d35 );
    auto spi = hwlib::spi_bus_bit_banged_sclk_mosi_miso( stcp, ds, hwlib::pin_in_dummy);
    auto hc595 = hwlib::hc595( spi, shcp );
    auto led0 = hwlib::target::pin_out(hwlib::target::pins::d8 );
    auto led1 = hwlib::target::pin_out(hwlib::target::pins::d7 );
    auto led2 = hwlib::target::pin_out(hwlib::target::pins::d6 );
    auto led3 = hwlib::target::pin_out(hwlib::target::pins::d5 );

    hwlib::port_out_from_pins leds(led0, led1, led2, led3, hc595.p0, hc595.p1, hc595.p2, hc595.p3);

    hc595.set(0x00);

    auto more_button = hwlib::target::pin_in(hwlib::target::pins::d9);
    auto less_button = hwlib::target::pin_in(hwlib::target::pins::d10);
    while(1){
        range_control(more_button, less_button, leds);
    }
}
