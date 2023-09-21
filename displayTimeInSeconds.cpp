#include <iostream>
using namespace std;
class times
{
private:
    int hour, minutes, seconds;

public:
    void getTime(int h, int m, int s)
    {

        hour = h;
        minutes = m;
        seconds = s;
    }
    friend void timeToSecond(times object);
};
void timeToSecond(times object)
{
    cout << object.hour * 3600 + object.minutes * 60 + object.seconds;
}

int main()
{
    times object;
    int h, m, s;
    cout << "Enter Hours: ";
    cin >> h;
    cout << "Enter Minutes: ";
    cin >> m;
    cout << "Enter Seconds: ";
    cin >> s;
    object.getTime(h, m, s);
    timeToSecond(object);
}