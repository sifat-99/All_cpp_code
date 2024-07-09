#include <bits/stdc++.h>
#include <sstream>
using namespace std;

bool checkData(string a)
{
  if (a == "int" || a == "float" || a == "double" || a == "char" || a == "string" || a == "void")
  {
    return true;
  }
  return false;
}

int main()
{
  string test;
  cout << "Enter a string: ";
  getline(cin, test);

  istringstream iss(test);
  string words[test.length()];
  string word;
  size_t index = 0;

  while (iss >> word && index < test.length())
  {
    words[index++] = word;
  }

  for (size_t i = 0; i < index; ++i)
  {
    if (checkData(words[i]))
    {
      cout << words[i] << " is a data type" << endl;
    }
    else if (words[i].length() == 1 && isascii(words[i][0]) && !isalnum(words[i][0]))
    {
      cout << words[i] << " is an operator" << endl;
    }
    else
    {
      if (words[i] == "main" || words[i] == "delay" || words[i] == "clearScreen" || words[i] == "mainMenu")
      {
        cout << words[i] << " is a function" << endl;
      }
      else if (words[i] == "for" || words[i] == "if" || words[i] == "else" || words[i] == "while")
      {
        cout << words[i] << " is a control statement" << endl;
      }
      else if (words[i] == "cout" || words[i] == "cin")
      {
        cout << words[i] << " is an input/output statement" << endl;
      }
      else if (words[i] == "using" || words[i] == "namespace" || words[i] == "std")
      {
        cout << words[i] << " is a library" << endl;
      }
      else if (words[i] == "return")
      {
        cout << words[i] << " is a return statement" << endl;
      }
      else if (words[i] == "define")
      {
        cout << words[i] << " is a preprocessor directive" << endl;
      }
      else if (words[i] == "exit")
      {
        cout << words[i] << " is an exit statement" << endl;
      }
      else if (words[i] == "cin" || words[i] == "cout")
      {
        cout << words[i] << " is an input/output statement" << endl;
      }
      else
      {
        bool isNumber = true;
        for (char c : words[i])
        {
          if (!isdigit(c))
          {
            isNumber = false;
            break;
          }
        }

        if (isNumber)
        {
          cout << words[i] << " is a number" << endl;
        }
        else
        {
          cout << words[i] << " is a variable" << endl;
        }
      }
    }
  }

  return 0;
}