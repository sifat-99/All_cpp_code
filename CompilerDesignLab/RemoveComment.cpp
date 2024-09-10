#include <bits/stdc++.h>
using namespace std;

int main() {
    int is_comment = 0;
    string s;
  ifstream file("./INPUT.txt");
  ofstream output_file("out.txt");

  if (file.is_open() && output_file.is_open())
  {
    while (getline(file,s))
    {
      if(s[0]=='/' || s[1]=='/')
      {
        continue;
      }
      else if(s[0]=='/' && s[1]=='*')
      {
        is_comment = 1;
        continue;
      }
      else if(s[0]=='*' && s[1]=='/')
      {
        is_comment = 0;
        continue;
      }
      else if(is_comment)
      {
        continue;
      }
      else
      {
        output_file << s << endl;
      }
    }
  }
}

