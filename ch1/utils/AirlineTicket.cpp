#include <iostream>
#include <string>
#include "AirlineTicket.h"

using std::string;

AirlineTicket::AirlineTicket(){
    mPassengerName = "Unknown Passenger";
    mNumberOfMiles = 0;
    mHasEliteSuperRewardsStatus = false;
}

AirlineTicket::~AirlineTicket() = default;

double AirlineTicket::calculatePriceInDollars() const{
    if (hasEliteSuperRewardsStatus()){
        return 0;
    }
    return getNumberOfMiles() * 0.1;
}

const string & AirlineTicket::getPassengerName() const{
    return mPassengerName;
}

void AirlineTicket::setPassengerName(const string & name){
    mPassengerName = name;
}

int AirlineTicket::getNumberOfMiles() const{
    return mNumberOfMiles;
}

void AirlineTicket::setNumberOfMiles(int miles){
    mNumberOfMiles = miles;
}

bool AirlineTicket::hasEliteSuperRewardsStatus() const{
    return mHasEliteSuperRewardsStatus;
}

void AirlineTicket::setHasEliteSuperRewardsStatus(bool status){
    mHasEliteSuperRewardsStatus = status;
}