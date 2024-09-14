#include<bits/stdc++.h>
using namespace std;

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

int main()
{
  ifstream fin("input.txt");
  ofstream fOut("output.txt");
  string s;
  while (getline(fin, s))
  {
    string word;
    for (char c : s)
    {
      if (isalnum(c) || c == '_')
      {
        word += c;
      }
      else
      {
        if (!word.empty())
        {
          if (isIdentifier(word))
          {
            fOut << word << " is an identifier\n";
          }
          word.clear();
        }
      }
    }
    if (!word.empty())
    {
      if (isIdentifier(word))
      {
        fOut << word << " is an identifier\n";
      }
      word.clear();
    }
  }
}