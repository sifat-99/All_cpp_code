#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

bool isKeyword(const string &s)
{
    const string keywords[] = {"auto", "int", "char", "long", "float", "double", "struct", "if", "else", "break", "continue", "while", "do", "for", "return", "signed", "unsigned", "default", "goto", "case", "sizeof", "short", "switch", "void", "static", "typedef"};
    for (const string &keyword : keywords)
    {
        if (s == keyword)
            return true;
    }
    return false;
}

bool isIdentifier(const string &s)
{
    if (s.empty() || !(isalpha(s[0]) || s[0] == '_'))
        return false;
    for (char c : s)
    {
        if (!isalnum(c) && c != '_')
            return false;
    }
    return true;
}

bool isConstant(const string &s)
{
    if (s.empty())
        return false;
    for (char c : s)
    {
        if (!isdigit(c))
            return false;
    }
    return true;
}

bool isComment(const string &s)
{
    return s.substr(0, 2) == "//" || s.substr(0, 2) == "/*" || s.substr(0, 2) == "*/";
}

bool isOperator(const string &s)
{
    const string operators[] = {"+", "-", "*", "/", "%", "++", "--", "==", "!=", ">", "<", ">=", "<=", "&&", "||", "!", "&", "|", "^", "~", "<<", ">>", ">>>", "+=", "-=", "*=", "/=", "%=", "&=", "|=", "^=", "<<=", ">>=", ">>>="};
    for (const string &op : operators)
    {
        if (s == op)
            return true;
    }
    return false;
}

bool isHeaderFile(const string &s)
{
    return s.substr(0, 8) == "#include";
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
            getline(inputFile, temp); // Skip the rest of the comment line
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
