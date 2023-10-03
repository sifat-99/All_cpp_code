
// multilevel Inheritance

// Class B Inherits class A and Class C inherits Class B, C can access all the data of A and B;

// #include <iostream>
// using namespace std;
// class A
// {
//     public:
//     int a= 5;
// };
// class B:public A{
//     public:
//     int b=10;
// };
// class C:public B
// {
//     public:
//     void multiplication()
//     {
//         int multi = a*b;
//         cout<<multi<<endl;

//     }
// };
// int main()
// {
//     C ob;
//     ob.multiplication();
// }

// Hierarchical Inheritance

/**
 * parent A child B and C
 * Parent B child D and E
 * parent C child F and G
 */

// #include <iostream>
// using namespace std;
// class A
// {
//     public:
//     int a=5;
// };
// class B:public A
// {
//     public:
//     int b=10;
// };
// class C: public A
// {
//     public:
//     int c= 100;
// };
// class D:public B
// {
//     public:
//     int sum1 = a+b;
//     void output()
//     {
//         cout<<"D: "<<sum1<<endl;
//     }
// };
// class E: public B
// {
//     public:
//     int multi = a*b;
//     void outputMulti()
//     {
//         cout<<"E: "<<multi<<endl;
//     }
// };
// class F:public C
// {
//     public:
//     int sum2 = a+c;
//     void output()
//     {
//         cout<<"F: "<<sum2<<endl;
//     }
// };
// class G:public C
// {
//     public:
//     int multi2= a*c;
//     void outputMulti2()
//     {
//         cout<<"G: "<<multi2<<endl;
//     }
// };

// int main()
// {
//     D ob;
//     E ob2;
//     F ob3;
//     G ob4;

//     ob.output();
//     ob2.outputMulti();
//     ob3.output();
//     ob4.outputMulti2();
// }

/**
 * Hybrid Inheritance
 *
 */

// #include <iostream>
// using namespace std;
// class A
// {
//     public:
//     int a;
//     void show()
//     {
//         a=10;
//         cout<<a<<endl;
//     }
// };
// class B: virtual public A
// {
//     public:
//     void show()
//     {
//         a=5;
//         cout<<a<<endl;
//     }
    
// };
// class C: virtual public A
// {
//     public:
//     void show()
//     {
//         a=15;
//         cout<<a<<endl;
//     }
// };
// class D:virtual public B,virtual public C{
//     public:
//     void show()
//     {
//         a=155;
//         cout<<a<<endl;
//     }
// };

// int main()
// {
//     D ob;
//     ob.show(); 
// }

// #include <iostream>
// using namespace std;
// class A
// {
//     public:
//     int a;
//     void show()
//     {
//         a=10;
//         cout<<a<<endl;
//     }
// };
// class B: virtual public A
// {
//     public:
//     void show()
//     {
//         a=5;
//         cout<<a<<endl;
//     }
    
// };
// class C: virtual public A
// {
//     public:
//     void show()
//     {
//         a=15;
//         cout<<a<<endl;
//     }
// };
// class D:virtual public B,virtual public C{
//     public:
//     void show()
//     {
//         a=155;
//         cout<<a<<endl;
//     }
// };

// int main()
// {
//     D *p = new D();
//     p->A::show();
//     p->B::show();
//     p->C::show();
//     p->show();
// }
