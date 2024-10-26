#include <bits/stdc++.h>
using namespace std;

void CheckProperty(string word, set<string> &uniqueTokens, vector<string> &Operators, vector<string> &Variables, vector<string> &Keywords, vector<string> &SpSym)
{
    if (uniqueTokens.find(word) == uniqueTokens.end())
    {
        if (word == "int" || word == "endif" || word == "float" || word == "if" || word == "else")
        {
            uniqueTokens.insert(word);
            Keywords.push_back(word);
        }
        else if (word == "-" || word == "+" || word == "*" || word == "/" || word == ">" || word == "=")
        {
            uniqueTokens.insert(word);
            Operators.push_back(word);
        }
        else if (word == "a" || word == "t1" || word == "t2" || word == "t3")
        {
            uniqueTokens.insert(word);
            Variables.push_back(word);
        }
        else if (word == "{" || word == "}" || word == "(" || word == ")" || word == ";" || word == "," || word == ":")
        {
            uniqueTokens.insert(word);
            SpSym.push_back(word);
        }
    }
}

void checkTokens(string line, set<string> &uniqueTokens, vector<string> &Operators, vector<string> &Variables, vector<string> &Keywords, vector<string> &SpSym)
{
    istringstream stream(line);
    string token;
    while (stream >> token)
    {
        CheckProperty(token, uniqueTokens, Operators, Variables, Keywords, SpSym);
    }
}

int main()
{
    ifstream fin("Input.txt");
    ofstream fout("Output.txt");
    string line;
    set<string> uniqueTokens;
    vector<string> Variables;
    vector<string> Operators;
    vector<string> KeyWords;
    vector<string> SpecialSymbols;

    if (!fin)
    {
        cerr << "Unable to open file Input.txt" << endl;
        return 1;
    }

    while (getline(fin, line))
    {
        checkTokens(line, uniqueTokens, Operators, Variables, KeyWords, SpecialSymbols);
    }

    fin.close();

    // Print the tokens as an array
    cout << "Operators: ";
    fout << "\nOperators: ";
    for (size_t i = 0; i < Operators.size(); ++i)
    {
        fout << Operators[i] << " ";
        cout << Operators[i];
        if (i != Operators.size() - 1)
        {
            fout << " , ";
            cout << ", ";
        }
    }
    cout << endl;
    cout << "Keywords: ";
    fout << "\nKeywords: ";
    for (size_t i = 0; i < KeyWords.size(); ++i)
    {
        cout << KeyWords[i];
        fout << KeyWords[i];
        if (i != KeyWords.size() - 1)
        {
            fout << " , ";
            cout << " , ";
        }
    }
    cout << endl;
    cout << "Variables: ";
    fout << "\nVariables: ";
    for (size_t i = 0; i < Variables.size(); ++i)
    {
        fout << Variables[i];
        cout << Variables[i];
        if (i != Variables.size() - 1)
        {
            fout << " , ";
            cout << " , ";
        }
    }
    cout << endl;
    cout << "SpecialSymbols: ";
    fout << "\nSpecialSymbols: ";
    for (size_t i = 0; i < SpecialSymbols.size(); ++i)
    {
        fout << SpecialSymbols[i];
        cout << SpecialSymbols[i];
        if (i != SpecialSymbols.size() - 1)
        {
            fout << " ";
            cout << " ";
        }
    }

    cout << endl;

    return 0;
}
