#include <iostream>
using namespace std;
class student
{
    string name;

public:
    student()
    {
        name="Md: Abdur Rahman Sifat";
        cout <<"'"<< name<<"' is initialized in this constructor class."<<endl;
    }
    ~student()
    {
        cout << "The name is being destroyed" << endl;
    }
};
int main()
{
    student ob;
}