#include <bits/stdc++.h>
using namespace std;

bool is_sign_operator(char c)
{ 
    return (c == '+' || c == '-' || c == '*' || c == '/');
}
int main()
{

    ifstream file("./INPUT.txt");
    ofstream output_file("output.txt");
    string line;
    int number_count = 0;

    if (file.is_open() && output_file.is_open())
    {
        while (getline(file, line))
        {

            for (size_t i = 0; i < line.length(); i++)
            {
                if (isdigit(line[i]))
                {
                    output_file << line[i];
                    number_count++;
                }
                else if (is_sign_operator(line[i]))
                {
                    output_file << line[i];
                }
                else if (!isspace(line[i]))
                {
                    output_file << line[i];
                }
            }
            output_file << endl;
        }

        file.close();
        output_file.close();
        cout << "Number of digits: " << number_count << endl;
    }
    else
    {
        cout << "Unable to open file!" << endl;
    }

    return 0;
}
