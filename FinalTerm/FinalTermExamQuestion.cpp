/**
 * 

1.    Imagine a publishing company that markets both book and audiocassette versions of its works. Create a class publication that stores the title (a string) and price (type float) of a publication. From this class derive two classes: book, which adds a page count (type int), and tape, which adds a playing time in minutes (type float). Each of these three classes should have a getData() function to get its data from the user at the keyboard, and a putData() function to display its data. Write a main program to test the book and tape classes by creating instances of them, asking the user to fill in data with getData(), and then displaying the data with putData().

2.    Manchester United is a class with two private integer member variables coach and player, and a public void member function getData (). Create an object named ‘ronaldo’ in the main function. Overload the operator '++' in this class to perform the increment of both member variables through the following instruction ronaldo++ from the main function. After that create another instance of the Manchester United class named ‘fernandes’. Now, you set the values of coach and player for ronaldo to 4 and 5, and for fernandes, it is 5 and 6. Overloading only one relational operator, compare the result of ronaldo with fernandes before and after incrementing ronaldo by one. Which operator will be appropriate for both cases? Support your explanation by implementing that operator.

3.    Suppose there are three classes named “Germany”, “Argentina” and “Brasil”. Build a diagram to show how these classes are related. What do you need to do tohide the implementation details of the parent class obtained from the diagram? Demonstrate the scenario with the help of an array of pointers.

4.    Suppose, there are 10 students in a class. The students are assigned five courses each. You have to determine which student gets the highest mark, which obtains the average mark, and which obtains the lowest mark. Create a calculate_marks() function in the Student class and get three of the marks from this function. Create an individual display_result function() to show the output.

5.    You have an object "obj" of a class named ‘OpOverload’. This class contains two private integer member variable var1 and var2. Your task is to overload the ‘++’ operator in the class so that you can perform the increment of both var1 and var2 by the sum of last three digits of your ID through the following instructions obj++ and ++obj. Perform decrement operation on ‘obj’ through the following instructions obj—and --obj by overloading ‘--’ operator in the same class.
 
6.    Imagine a publishing company that markets both book and audiocassette versions of its works. Create a class publication that stores the title (a string) and price (type float) of a publication. From this class derive two classes: book, which adds a page count (type int), and tape, which adds a playing time in minutes (type float). Each of these three classes should have a getData() function to get its data from the user at the keyboard, and a putData() function to display its data. Write a main program to test the book and tape classes by creating instances of them, asking the user to fill in data with getData(), and then displaying the data with putData().

8.    Design a class named "Eric ten Hag". Eric ten Hag will have only one function showDegea() which will output what it saves. Create two derived classes, Varane and Maguire. Varane will define showDegea() so that it will output “saves goal” and similarly Maguire will output “saves nogoals”. In the main() function, use the Eric ten Hag class in a way that implements the idea of abstraction.

9.    A class called “Shakib Al Hasan” has two operator overloading functions. Now implement a code for the statement: TanzidTamim1= (LitonKumarDas2+2)*TaskinAhmed3 to compile correctly.
*/

// #include <iostream>
// #include <string>
// using namespace std;

// class Publication {
// private:
//     string title;
//     float price;
// public:
//     void getData() {
//         cout << "Enter title: ";
//         cin >> title;
//         cout << "Enter price: ";
//         cin >> price;
//     }

//     void putData() {
//         cout << "Title: " << title << endl;
//         cout << "Price: " << price << endl;
//     }
// };

// class Book : public Publication {
// public:
//     int pageCount;

//     void getData() {
//         Publication::getData();
//         cout << "Enter page count: ";
//         cin >> pageCount;
//     }

//     void putData() {
//         Publication::putData();
//         cout << "Page Count: " << pageCount << endl;
//     }
// };

// class Tape : public Publication {
// public:
//     float playingTime;
//     void getData() {
//         Publication::getData();
//         cout << "Enter playing time (in minutes): ";
//         cin >> playingTime;
//     }

//     void putData() {
//         Publication::putData();
//         cout << "Playing Time: " << playingTime << " minutes" << endl;
//     }
// };
// int main() {
//     Book book;
//     Tape tape;

//     cout << "Enter book details:" << endl;
//     book.getData();

//     cout << "Enter tape details:" << endl;
//     tape.getData();

//     cout << "Book details:" << endl;
//     book.putData();

//     cout << "Tape details:" << endl;
//     tape.putData();
//     return 0;
// }



// #include <iostream>
// #include <string>
// using namespace std;

// class Country {
// private:
//     string name;
// public:
//     Country(string name) {
//         this->name = name;
//     }

//     string getName() {
//         return name;
//     }

//     virtual void displayInfo() = 0;
// };

// class Germany : public Country {
// private:
//     string capital;
// public:
//     Germany(string name, string capital) : Country(name) {
//         this->capital = capital;
//     }

//     void displayInfo() {
//         cout << "Country: " << getName() << endl;
//         cout << "Capital: " << capital << endl;
//     }
// };

// class Argentina : public Country {
// private:
//     string capital;
// public:
//     Argentina(string name, string capital) : Country(name) {
//         this->capital = capital;
//     }

//     void displayInfo() {
//         cout << "Country: " << getName() << endl;
//         cout << "Capital: " << capital << endl;
//     }
// };

// class Brasil : public Country {
// private:
//     string capital;
// public:
//     Brasil(string name, string capital) : Country(name) {
//         this->capital = capital;
//     }

//     void displayInfo() {
//         cout << "Country: " << getName() << endl;
//         cout << "Capital: " << capital << endl;
//     }
// };

// int main() {
//     Country* countries[3];

//     countries[0] = new Germany("Germany", "Berlin");
//     countries[1] = new Argentina("Argentina", "Buenos Aires");
//     countries[2] = new Brasil("Brasil", "Brasilia");

//     for (int i = 0; i < 3; i++) {
//         countries[i]->displayInfo();
//         cout << endl;
//     }
// }


// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//    while (1)
//    {
//      try{
//         char num;
//         cin>>num;
//         if (!isdigit(num))
//         {
//             throw 'ja iccha';
//         }
//         else
//         {
//             cout<<"You enter number: "<<num<<endl;
//         }

//     }
//     catch(...){
//         cout<<"You enter invalid value, Please enter a numeric number"<<endl;
//         }
//    }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//    while (1)
//    {
//      try{
//         int mark;
//         cout<<"Enter Mark:";
//         cin>>mark;
//         if (mark>40)
//         {
//             throw 1;
//         }
//         else
//         {
//             cout<<"Mark added successfull!!!"<<endl;
//         }

//     }
//     catch(...){
//         cout<<"Sorry!! You cannot enter mark over 40"<<endl;
//         }
//    }
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;
// class Unary{
// public:
// int number;

//     Unary()
//     {
//         cin>>number;
//     }
//     void operator++()
//     {
//         number++;
//         ++number;
//         cout<<number<<endl;
//     }
//     void operator--()
//     {
//         number--;
//         // --number;
//         cout<<number<<endl;
//     }
// };
// int main()
// {
//     Unary ob;
//     ++ob;
//     --ob;
// }
// #include<bits/stdc++.h>
// using namespace std;


// template <typename T, typename U>
// T func(T a, U b)
// {
//      return a + b;
// }

// int main()
// {
//     char result = func<char, int>('g', 5);
//     cout << "Result: " << result << endl;
//     return 0;
// }



#include<iostream>
using namespace std;
class rectangle{
private:
    int length, width;
public:
   void get_data(int length, int width)
    {
        this->length=length;
        this->width=width;
    }
    void operator++(int){
    length++;
    width++;
    }
  
int area()
{
    return length*width;
}
bool operator >(rectangle &a)
{
    if(area()>a.area())
    return true;
    else
        return false;
}

bool operator== (rectangle &a)
{
    if(area()==a.area())
    {
        return true;
    }
    return false;

}


};
int main()
{
    rectangle r1,r2;
    r1.get_data(3,5);
    r2.get_data(5,6);
    cout<<"Before Increment"<<endl;
    if(r1>r2)
        cout<<"r1 is bigger"<<endl;
    else
        cout<<"r2 is bigger"<<endl;
    cout<<"After Increment"<<endl;
    r1++;
    if(r1==r2)
        cout<<"Equal"<<endl;
    else
        cout<<"The bigger value is r2: "<<r2.area()<<endl;
}