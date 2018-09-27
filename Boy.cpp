#include <utility>

//
// Created by acsim on 9/26/2018.
//

#include "Boy.h"

Boy::Boy(string name) {
    this->name = std::move(name);
}

void Boy::talkToWorld(string msg) {
    cout << this->name << ": She has said: " << msg << endl;
}

Boy::~Boy() = default;
