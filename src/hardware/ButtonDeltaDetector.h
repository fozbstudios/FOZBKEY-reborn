//  ButtonDeltaDetector.h

// Copyright 2013-2014 Will Yager.
// All rights reserved.
// 
// Modified 2018 Nicholas Kirkpatrick
// 
//  Detects changes in button state

#ifndef __keyboard2__ButtonDeltaDetector__
#define __keyboard2__ButtonDeltaDetector__

#include "Types.h"

class ButtonDeltaDetector {
private:
	bool known_states[64];
public:
    ButtonDeltaDetector():known_states(){}
	ButtonsDelta update(const ButtonsState& debounced_states);
};

#endif /* defined(__keyboard2__ButtonDeltaDetector__) */
