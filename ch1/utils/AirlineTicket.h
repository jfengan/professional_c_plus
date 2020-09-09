#include <iostream>
#include <string>

using std::string;

class AirlineTicket{
public:
    AirlineTicket();
    ~AirlineTicket();

private:
    string mPassengerName;
    int mNumberOfMiles;
    bool mHasEliteSuperRewardsStatus;

public:
    double calculatePriceInDollars() const;

    const string & getPassengerName() const;
    void setPassengerName(const string & name);

    int getNumberOfMiles() const;
    void setNumberOfMiles(int miles);

    bool hasEliteSuperRewardsStatus() const;
    void setHasEliteSuperRewardsStatus(bool status);
};