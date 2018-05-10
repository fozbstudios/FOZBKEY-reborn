//  HardwareController.h

// Copyright 2013-2014 Will Yager.
// All rights reserved.
// 
// Modified 2018 Nicholas Kirkpatrick
// 
//  Controls the various non-communication hardware peripherals

#ifndef __keyboard2__HardwareController__
#define __keyboard2__HardwareController__

#include "Types.h"

class HardwareController {
private:
    static void set_red_led(bool value);
    static void set_green_led(bool value);
    static void set_blue_led(bool value);
    static void set_red_pwm(uint8_t value);
    static void set_green_pwm(uint8_t value);
    static void set_blue_pwm(uint8_t value);
public:
    HardwareController();
    //Simply iterates through all PHYSICAL keys (i.e. buttons) and 
    //sets their corresponding bit value to true if they are pressed
    //and then returns the corresponding ButtonsState object
    ButtonsState update(uint8_t led_state);
};

#endif /* defined(__keyboard2__HardwareController__) */
