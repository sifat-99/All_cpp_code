#include<bits/stdc++.h>
using namespace std;


template<typename T>

void add(T a, T b)
{
    cout<<a+b<<endl;
}

int main()
{
    add<int>(3,7);
    add<double>(3.2,5.5);
}

// ___STEPS___//
/**
 * It is the Generic function
 * type the function name as template<typename T>
 * in function add type return type we can use any of then, for using global return type we will use T,
 * in main function we will call the value as: (functionName)<data type>(value);
 * if we use void the output will contain in the function and if we use return type the data will return in global type so that we can print the result in the main function. 
 * 
*/