//  MasterNotifier.h

// Copyright 2013-2014 Will Yager.
// All rights reserved.
// 
// Modified 2018 Nicholas Kirkpatrick
// 
//  Talks to the master over USB 

#ifndef __keyboard2__MasterNotifier__
#define __keyboard2__MasterNotifier__

#include "Types.h"
#include "comms/USBCommunicator.h"

class MasterNotifier {
private:
    USBCommunicator& usb_communicator;
public:
	MasterNotifier(USBCommunicator& usb);
	uint8_t notify(const KeysDelta& key_changes);
};

#endif /* defined(__keyboard2__MasterNotifier__) */
