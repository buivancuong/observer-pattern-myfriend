#include <utility>

//
// Created by acsim on 9/26/2018.
//

#include "Girl.h"

Girl::Girl(string name) {
    this->name = std::move(name);
}

void Girl::addRainBro(Man *man) {
    rainBros.push_back(man);
}

void Girl::notifyToRainBros() {
    for (auto &rainBro : rainBros) {
        rainBro->talkToWorld(this->message);
    }
}

Girl::~Girl() = default;
