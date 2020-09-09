#include "utils/AirlineTicket.h"
#include <iostream>
#include <memory>
using std::cout;
using std::endl;

int main(){
    AirlineTicket myTicket;
    myTicket.setPassengerName("Felix Jiahao FENG");
    myTicket.setNumberOfMiles(700);
    double cost = myTicket.calculatePriceInDollars();
    cout << "This ticket will cost $ " << cost << endl;

    std::unique_ptr<AirlineTicket> myTicket2(new AirlineTicket);
    myTicket2->setPassengerName("Bruce Xudong CHEN");
    myTicket2->setHasEliteSuperRewardsStatus(true);
    myTicket2->setNumberOfMiles(2000);
    double cost2 = myTicket2->calculatePriceInDollars();
    cout << "This ticket will cost $ " << cost2 << endl;

    return 0;
}