#include <bits/stdc++.h>
using namespace std;

char sign_check(char pre_value)
{
  return (
      pre_value == '+' || pre_value == '-' || pre_value == '*' || pre_value == '/');
}

int main()
{
  // char pre_value = ' ';
  ifstream file("./INPUT.txt");
  string line;
  FILE *f2 = fopen("output.txt", "w");
  if (file.is_open())
  {
    while (getline(file, line))
    {

      for (size_t i = 0; i < line.length(); i++)
      {
        if (isnumber(line[i]))
        {
          cout << line[i] << endl;
        }

        else if (!isspace(line[i]))
        {
          putc(line[i], f2);
        }
      }
      putc('\n', f2);
    }
    file.close();
  }
  else
  {
    cout << "Unable to open file!" << endl;
  }

  putc('\n', f2);

  fclose(f2);
}