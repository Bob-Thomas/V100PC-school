#include <hwlib-due.hpp>

class pin_out_invert : public hwlib::pin_out {
private:
   hwlib::pin_out & slave;
   
public:
   pin_out_invert( hwlib::pin_out & slave ): 
      slave( slave ){}
   
   void set( bool x ) override {
      slave.set( ! x );
   }  
};


class pin_out_all : public hwlib::pin_out {
private:
   hwlib::pin_out * list[ 8 ];     
   
public:
   pin_out_all( 
      hwlib::pin_out & p0, 
      hwlib::pin_out & p1,
      hwlib::pin_out & p2, 
      hwlib::pin_out & p3,
      pin_out_invert & p4,
      pin_out_invert & p5,
      pin_out_invert & p6,
      pin_out_invert & p7
   ):
      list{ &p0, &p1, &p2, &p3, &p4, &p5, &p6, &p7  }
   {}
   
   void set( bool v ){
      for( auto p  : list ){
          p->set( v );
      }
   }
};

int main( void ){
    // kill the watchdog
    WDT->WDT_MR = WDT_MR_WDDIS;

    auto led0 = hwlib::target::pin_out(hwlib::target::pins::d5);
    auto led1 = hwlib::target::pin_out(hwlib::target::pins::d6);
    auto led2 = hwlib::target::pin_out(hwlib::target::pins::d7);
    auto led3 = hwlib::target::pin_out(hwlib::target::pins::d8);

    auto led4 = hwlib::target::pin_out(hwlib::target::pins::d9);
    auto led5 = hwlib::target::pin_out(hwlib::target::pins::d10);
    auto led6 = hwlib::target::pin_out(hwlib::target::pins::d11);
    auto led7 = hwlib::target::pin_out(hwlib::target::pins::d12);

    auto led4_inverted = pin_out_invert(led4);
    auto led5_inverted = pin_out_invert(led5);
    auto led6_inverted = pin_out_invert(led6);
    auto led7_inverted = pin_out_invert(led7);

    auto leds = pin_out_all( led0, led1, led2, led3, led4_inverted, led5_inverted, led6_inverted, led7_inverted );

    while(1){
        leds.set(1);
        hwlib::wait_ms(250);
        leds.set(0);
        hwlib::wait_ms(250);
    }
}
