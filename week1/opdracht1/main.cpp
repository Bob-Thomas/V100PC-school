// template
#include "window.hpp"
#include "rectangle.hpp"

int main(int argc, char **argv){
   window w( 128, 64, 2 );
   
   rectangle box( w, 0, 0, 30, 30 );
   box.print();
   
   return 0;
}
