#include <hwlib-due.hpp>

class pin_in_and : public hwlib::pin_in {
    private:
        hwlib::pin_in * p1;
        hwlib::pin_in * p2;

    public:
        pin_in_and(hwlib::pin_in & p1, hwlib::pin_in & p2): p1(&p1), p2(&p2){}

    bool get() {
        return !p1->get2() && !p2->get();
    }
};

int main( void ){
    // kill the watchdog
    WDT->WDT_MR = WDT_MR_WDDIS;
    auto more_button = hwlib::target::pin_in(hwlib::target::pins::d9);
    auto less_button = hwlib::target::pin_in(hwlib::target::pins::d10);
    auto and_button = pin_in_and(more_button, less_button);

    while(1){
      if(and_button.get()) {
        hwlib::cout << "Both my buttons got pressed" << "\n";
    }
}
}
