//  MasterNotifier.cpp

// Copyright 2013-2014 Will Yager.
// All rights reserved.
// 
// Modified 2018 Nicholas Kirkpatrick
// 
#include "comms/MasterNotifier.h"


MasterNotifier::MasterNotifier(USBCommunicator& usb):usb_communicator(usb){
    while(!usb_communicator.is_connected() ){}

}

uint8_t MasterNotifier::notify(const KeysDelta& key_changes){
    uint8_t led_status;

    led_status = this->usb_communicator.update(key_changes, slave_key_changes);

    return led_status;
}
