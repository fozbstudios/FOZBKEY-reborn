//  USBCommunicator.h

// Copyright 2013-2014 Will Yager.
// All rights reserved.
// 
// Modified 2018 Nicholas Kirkpatrick
// 

#ifndef ____USBCommunicator__
#define ____USBCommunicator__

#include "Types.h"

class USBCommunicator {
public:
    USBCommunicator();
    //Sends any USB key press events to the master. Returns the LED status.
    uint8_t update(const KeysDelta& key_changes, const KeysDelta& slave_key_changes);
    bool is_connected();
    void send_key_event(const KeyDelta& event);
    void turn_off();
};

#endif /* defined(____USBCommunicator__) */
