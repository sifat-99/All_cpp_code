#include <iostream>
using namespace std;
class transport
{

public:
    int numberOfPassenger, speed;
    friend void compare(transport microbus, transport car);
};
void compare(transport microbus, transport car)
{
    if (microbus.numberOfPassenger > car.numberOfPassenger)
    {
        cout << "Microbus has more passenger than car" << endl;
    }
    else if (microbus.numberOfPassenger == car.numberOfPassenger)
    {
        cout << "Microbus has equal passenger than car" << endl;
    }
    else
    {
        cout << "car has more passenger than microbus" << endl;
    }
    if (microbus.speed > car.speed)
    {
        cout << "Microbus has more speed than car" << endl;
    }
    else if (microbus.speed == car.speed)
    {
        cout << "Microbus has equal speed than car" << endl;
    }
    else
    {
        cout << "Car has more Speed than Microbus" << endl;
    }
}
int main()
{
    transport microbus, car;
    cout << "Enter The Microbus numberOfPassenger and Speed: ";
    cin >> microbus.numberOfPassenger >> microbus.speed;
    cout << "\nEnter The car numberOfPassenger and Speed: ";
    cin >> car.numberOfPassenger >> car.speed;
    compare(microbus, car);
}

