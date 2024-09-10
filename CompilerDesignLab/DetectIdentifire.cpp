#include<bits/stdc++.h>
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
  ifstream inputFile("./INPUT.txt");
  ofstream outputFile("./OUTPUT.txt");

  outputFile << "Keywords, identifiers, variables, comment lines, operators, and constants are given below:\n\n";

  while (inputFile >> st)
  {
    if (isKeyword(st))
    {
      outputFile << st << " is a keyword\n";
    }
    else if (isConstant(st))
    {
      outputFile << st << " is a constant\n";
    }
    else if (isIdentifier(st))
    {
      outputFile << st << " is an identifier\n";
    }
    else if (isComment(st))
    {
      outputFile << st << " is a comment line\n";
      string temp;
      getline(inputFile, temp);
    }
    else if (isOperator(st))
    {
      outputFile << st << " is an operator\n";
    }
    else if (isHeaderFile(st))
    {
      outputFile << st << " is a header file\n";
    }
    else
    {
      if (st == "main")
      {
        outputFile << st << " is a main function\n";
      }
      else
      {
        outputFile << st << " is a variable\n";
      }
    }
  }

  inputFile.close();
  outputFile.close();

  return 0;
}