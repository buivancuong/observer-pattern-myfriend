#include <iostream>
#include "Man.h"
#include "Woman.h"
#include "Girl.h"
#include "Boy.h"
using namespace std;

int main() {

    Girl *thatGirl = new Girl("Trinh Nguyet Hang");
    Boy *monitor = new Boy("Thuan");
    Boy *partySecretary = new Boy("Hoang");
    Boy *deputyLabour = new Boy("Dat");
    Boy *myFriend = new Boy("Vu");

    thatGirl->addRainBro(monitor);
    thatGirl->addRainBro(partySecretary);
    thatGirl->addRainBro(deputyLabour);
    thatGirl->addRainBro(myFriend);

    thatGirl->setMessage("Em quy anh nhieu lam anh zai mua a!");
    thatGirl->notifyToRainBros();

    cout << "Hello, World!" << endl;
    return 0;
}