//
// Created by acsim on 9/26/2018.
//

#ifndef OBSERVERPATTERN_WOMAN_H
#define OBSERVERPATTERN_WOMAN_H

#include "Man.h"

class Woman {
public:
    Woman() = default;

    virtual ~Woman() = default;

    virtual void addRainBro(Man *man) = 0;

    virtual void notifyToRainBros() = 0;
};

#endif //OBSERVERPATTERN_WOMAN_H
