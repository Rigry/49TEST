#define STM32F030x6
#define F_OSC   8000000UL
#define F_CPU   48000000UL

#include "init_clock.h"
#include "periph_rcc.h"

extern "C" void init_clock() { init_clock<F_OSC,F_CPU>(); }

int main()
{

}