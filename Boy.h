//
// Created by acsim on 9/26/2018.
//

#ifndef OBSERVERPATTERN_BOY_H
#define OBSERVERPATTERN_BOY_H

#include <iostream>
#include <string>
#include "Man.h"
using namespace std;

class Boy : public Man {

private:
    string name;

public:
    explicit Boy(string name);

    ~Boy() override;

    void talkToWorld(string msg) override;
};


#endif //OBSERVERPATTERN_BOY_H
