#include <iostream>
using namespace std;
class flower
{
    private: 
    string color, name;

public:
    friend flower set(flower object);
    friend void values(flower object);
};
flower set(flower object)
{
    cout << "Enter Flower Name: ";
    cin >> object.name;
    cout << "Enter Flower color: ";
    cin >> object.color;
    return object;              //object(smallPot)== [rose,red]
}
void values(flower potGotten)
{
    cout << "color name: " << potGotten.name << endl;
    cout << "color name: " << potGotten.color << endl;
}

int main()
{
    flower object, pot;
    pot = set(object);
    values(pot);
}
