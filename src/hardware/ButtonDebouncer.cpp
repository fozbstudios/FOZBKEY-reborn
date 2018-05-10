//  ButtonDebouncer.cpp

// Copyright 2013-2014 Will Yager.
// All rights reserved.
// 
// Modified 2018 Nicholas Kirkpatrick
// 
//  Responsible for debouncing hardware buttons

#include "hardware/ButtonDebouncer.h"

//Debounce raw hardware samples
ButtonsState ButtonDebouncer::update(const ButtonsState& raw_state){
    ButtonsState result;
    for (int i = 0; i < 64; ++i){
        bool debounced_state = this->debouncer.update(i, raw_state.states[i]);
        result.states[i] = debounced_state;
    }
    return result;
}
