#include <iostream>
using namespace std;
class CustomClass {
private:
    int customValue;
    string customName;
public:
    CustomClass() {
        customValue = 0;
        customName = "Maymuna Akter Suborna";
        cout << "It is default Constructor" << endl;
    }
    CustomClass(int val, int n) {
        customValue = val + n;
        
        cout << "Parameterized Constructor. Parameterized value is: " << customValue << endl;
    }
    CustomClass(CustomClass& other) {
        customValue = other.customValue;
        cout << "Copy Constructor and copy value is: " << customValue << endl;
    }
    ~CustomClass() {
        cout << "Destructor" << endl;
    }
    void display() {
        cout << "Value: " << customValue << ", Name: " << customName << endl;
    }
};

int main() {
    CustomClass instance1;
    CustomClass instance2(42, 45);
    CustomClass instance3 = instance2;
    cout << "Object 1: ";
    instance1.display();
    cout << "Object 2: ";
    instance2.display();
    cout << "Object 3: ";
    instance3.display();
    return 0;
}




// #include <iostream>
// using namespace std;
// class AccessSpecifier {
// public:
//     int publicVar;
//     void publicFunction() {
//         cout << "Public function called." << endl;
//     }
// protected:
//     int protectedVar;
//     void protectedFunction() {
//         cout << "Protected function called." << endl;
//     }
// private:
//     int privateVar;
//     void privateFunction() {
//         cout << "Private function called." << endl;
//     }
// public:
//     AccessSpecifier() {
//         publicVar = 20;
//         protectedVar = 24;
//         privateVar = 39;
//         cout << "Constructor called." << endl;
//     }
//     void accessAllMembers() {
//         cout << "Accessing publicVar: " << publicVar << endl;
//         cout << "Accessing protectedVar: " << protectedVar << endl;
//         cout << "Accessing privateVar: " << privateVar << endl;
//         publicFunction();
//         protectedFunction();
//         privateFunction();
//     }
// };
// int main() {
//     AccessSpecifier obj;
//     obj.publicVar = 420;
//     obj.publicFunction();
//     obj.accessAllMembers();
//     return 0;
// }


// #include <iostream>
// using namespace std;
// class Shape {
// public:
//     double radius;
//     virtual void draw() const = 0;
//     virtual void printInfo() const {
//         cout << "This is a shape of circle.\n";
//     }
//     virtual ~Shape() {
//         cout << "Shape destructor\n";
//     }
// };
// class Circle : public Shape {
// private:
//     double radius;
// public:
//     Circle(double r) : radius(r) {}
//     void draw() const {
//         cout << "Drawing Circle from radius: "<<radius<<endl;
//     }
//     void printInfo() const {
//         cout << "This is a circle.\n";
//         cout <<"Area of the circle: "<<3.1416*radius*radius<<endl;
//     }
//     ~Circle() {
//         cout << "Circle destructor\n";
//     }
// };

// int main() {
//     Shape* shape1 = new Circle(7.4);
//     shape1->draw();
//     shape1->printInfo();
//     delete shape1;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// template <typename T>
// class GenericClass {
// public:
//     GenericClass(T value) : data(value) {}
//     T getData() {
//         return data;
//     }
// private:
//     T data;
// };
// template <typename T>
// void Output(T& data) {
//     cout << "Data: " << data << endl;
// }
// int main() {
//     GenericClass<int> obj(4244);
//     cout << "Generic class with int: " << obj.getData() << endl;
//     GenericClass<double> doubleObject(3.14159);
//     cout << "Generic class with double: " << doubleObject.getData() << endl;
//     int intValue = 1000;
//     Output(intValue);
//     double doubleValue = 3.14159;
//     Output(doubleValue);
//     return 0;
// }




