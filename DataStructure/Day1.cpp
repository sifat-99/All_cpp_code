// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//         string name = "localization";

//         cout<<endl<< name[0]<<" "<<name.length()-2<<" "<<name[name.length()-1]<<endl<<endl;
// };

#include <bits/stdc++.h>
using namespace std;
template <typename T>
void facto(T number)
{

    long long int factorial = 1;
    // cin >> number;
    if (number < 0)
    {
        cout << "Dose not exists";
    }
    else
    {
        for (int i = 1; i <= number; ++i)
        {
            factorial *= i;
        }
        cout << "Factorial of " << number << " is " << factorial << endl;
    }
}
template <typename Z>
void fib(Z n)
{

    // Z t1 = 0, t2 = 1, fibonacci = 0;

    // for (Z i = 1; i <= n; ++i)
    // {
    //     if (i == 1)
    //     {
    //         continue;
    //     }
    //     if (i == 2)
    //     {
    //         continue;
    //     }

    //     fibonacci = t1 + t2;
    //     t1 = t2;
    //     t2 = fibonacci;
    // }

    // cout << "Fibonacci Digit: " << fibonacci << endl;

    int ary[n];
     ary[0] = 0;
     ary[1] = 1;

    for (Z i = 2; i <= n; ++i)
    {
        ary[i] = ary[i - 1] + ary[i - 2];
    }

    cout << ary[n - 1];
}

int main()
{
    int n;

    cin >> n;
    facto(n);
    // fib(n);
}


#include<iostream>
using namespace std;
int main() {
    const int size = 9; 
    int counts[size] = {0}; 
    while (true) {
        int num;
        cin >> num;
        if (num <= 0) {
            break;
        }
        if (num >= 1 && num <= 9) {
            counts[num - 1]++;
        } else {
            cout << "Invalid input. Please enter a positive integer between 1 and 9." << endl;
        }
    }
    for (int i = 0; i < size; ++i) {
        if (counts[i] > 0) {
            cout << i + 1 << "-------->>" << counts[i] <<" Times" << endl;
        }
    }

    return 0;
}




// int main()
// {
//     string input;
//     getline(cin, input);
//     string toFind;
//     cout << "Enter the string to find" << endl;
//     getline(cin, toFind);
//     size_t index = 0;
//     size_t found = 0;
//     transform(input.begin(), input.end(), input.begin(), ::tolower);
//     transform(toFind.begin(), toFind.end(), toFind.begin(), ::tolower);
//     for (size_t i = 0; i < toFind.length(); i++)
//     {
//         char ch = toFind[i];
//         index = input.find(ch, index);
//         if (index == string::npos && ch != ' ')
//         {
//             if (ch != ' ')
//             {
//                 found++;
//             }
//         }
//         index++;
//     }
//     if ((index - toFind.length()) <= input.length())
//     {
//         cout << (index - toFind.length()+found) << endl;
//     }
//     else
//     {
//         cout <<-1<< endl;
//     }
// }



// INDEX(string text, string pattern):
//     for i = 0 to i < lengthText
//     {
//         set flag to true
//         for j = 0 to lengthPattern
//         {
//             if text[i + j] == pattern[j]
//                 then continue
//             else
//                 set flag to false
//                 break
//         }
//         if flag is false
//             then continue
//         else
//             return i
//     }
//     //So we have traversed the whole text but did not find the pattern
//     if i has reached the end of the text (i==lengthText)
//         return -1


// MAIN():
//     getline(cin, t)
//     getline(cin, p)
//     print INDEX(t, p)


