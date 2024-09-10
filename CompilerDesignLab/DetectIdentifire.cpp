#include <bits/stdc++.h>
using namespace std;

int isKeyword(string s)
{
  return (s == "auto" || s == "int" || s == "char" || s == "long" ||
          s == "float" || s == "double" || s == "struct" || s == "if" ||
          s == "else" || s == "break" || s == "continue" || s == "while" ||
          s == "do" || s == "for" || s == "return" || s == "signed" ||
          s == "unsigned" || s == "default" || s == "goto" || s == "case" ||
          s == "sizeof" || s == "short" || s == "switch" || s == "void" ||
          s == "static" || s == "typedef");
}

int isIdentifier(string s)
{
  return (s[0] >= 'a' && s[0] <= 'z') || (s[0] >= 'A' && s[0] <= 'Z') || s[0] == '_';
}

int isConstant(string s)
{
  return (s[0] >= '0' && s[0] <= '9');
}

int isComment(string s)
{
  return ((s[0] == '/' && s[1] == '/') || (s[0] == '/' && s[1] == '*') || (s[0] == '*' && s[1] == '/') || (s[0] == '*' && s[1] == '*'));
}

int isOperator(string s)
{
  return (s == "+" || s == "-" || s == "*" || s == "/" || s == "%" || s == "++" || s == "--" || s == "==" || s == "!=" || s == ">" || s == "<" || s == ">=" || s == "<=" || s == "&&" || s == "||" || s == "!" || s == "&" || s == "|" || s == "^" || s == "~" || s == "<<" || s == ">>" || s == ">>>" || s == "+=" || s == "-=" || s == "*=" || s == "/=" || s == "%=" || s == "&=" || s == "|=" || s == "^=" || s == "<<=" || s == ">>=" || s == ">>>=");
}

int isHeaderFile(string s)
{
  return (s == "#include" || s == "<bits/stdc++.h>" || s == "using" || s == "namespace" || s == "std" || s == "#include<iostream>" || s == "#include<fstream>");
}

int main()
{
  string st;
  freopen("./INPUT.txt", "r", stdin);
  freopen("./OUTPUT.txt", "w", stdout);

  cout << "Keywords, identifiers, variables, comment lines, operators, and constants are given below:\n\n";

  while (cin >> st)
  {
    if (isKeyword(st))
    {
      cout << st << " is a keyword\n";
    }
    else if (isConstant(st))
    {
      cout << st << " is a constant\n";
    }
    else if (isIdentifier(st))
    {
      cout << st << " is an identifier\n";
    }
    else if (isComment(st))
    {
      cout << st << " is a comment line\n";
      string temp;
      getline(cin, temp);
    }
    else if (isOperator(st))
    {
      cout << st << " is an operator\n";
    }
    else if (isHeaderFile(st))
    {
      cout << st << " is a header file\n";
    }
    else
    {
      if (st == "main")
      {
        cout << st << " is a main function\n";
      }
      else
      {
        cout << st << " is a variable\n";
      }
    }
  }

  return 0;
}
