//
// Created by acsim on 9/26/2018.
//

#ifndef OBSERVERPATTERN_MAN_H
#define OBSERVERPATTERN_MAN_H

#include <string>
using namespace std;

class Man {

public:
    Man() = default;

    virtual ~Man() = default;

    virtual void talkToWorld(string msg) = 0;
};


#endif //OBSERVERPATTERN_MAN_H
