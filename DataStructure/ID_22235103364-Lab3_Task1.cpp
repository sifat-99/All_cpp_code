#include<bits/stdc++.h>
// using namespace std;

// string SUBSTRING(string str, int initial, int length)
// {
//     string subst = str.substr(initial, length);
//     return subst;
// }

// void DELETE(string str, int initial, int length)
// {
//     string str1= SUBSTRING(str,0,initial);
//     string str2 = SUBSTRING(str, initial+length, -1);
//     cout<<str1+str2<<endl;

// }

// int main()
// {
//     string input1;
//     cin >> input1 ;
//     cout<<"Enter the initial and length"<<endl;
//     int initial,length;
//     cin>>initial>>length;

//     DELETE(input1,initial,length);


//     return 0;
// }

using namespace std;

 string SUBSTRING ( string str , int initial , int length )
 {
 string substr = str . substr ( initial , length ) ;
 return substr ;
 }

 string DELETE ( string text , int position , int length )
 {
 string substr1 , substr2 ;
 substr1 = SUBSTRING (text , 0 , position ) ;
 substr2 = SUBSTRING (text , position + length , text . size () - position - length ) ;
 return substr1 + substr2 ;
 }

 int main ()
 {
 string str ;
 size_t p , l ;
 cin >> str >> p >> l ;
 if ( p < 0 || p > str . size () )
 cout << str << endl ;
 else
 cout << DELETE ( str , p , l ) << endl ;
 }
