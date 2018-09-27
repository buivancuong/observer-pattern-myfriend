#include <utility>

//
// Created by acsim on 9/26/2018.
//

#ifndef OBSERVERPATTERN_GIRL_H
#define OBSERVERPATTERN_GIRL_H

#include <iostream>
#include <list>
#include "Woman.h"
#include <string>
using namespace std;

class Girl : public Woman {

private:
    list<class Man*> rainBros;
    string name;
    string message;

public:
    explicit Girl(string name);

    ~Girl() override;

    void addRainBro(Man *man) override;

    void notifyToRainBros() override;

    void setMessage(string msg) {
        this->message = std::move(msg);
    }

};


#endif //OBSERVERPATTERN_GIRL_H
