#include <iostream>
using namespace std;
class times
{
private:

public:
    int hour, minutes, seconds;
    times()
    {
        hour = 10;
        minutes = 10;
        seconds = 10;
    }
    friend class clock;
    friend void timeToSecond(times object);
};
class clock
{
    public:
    // int timeToSeconds;

    void timeToSecond(times object)
    {
        cout << object.hour * 3600 + object.minutes * 60 + object.seconds;
    }
};

int main()
{
    times object;
    // clock object2;
    // object2.timeToSecond(object);
    timeToSecond(object);
}
