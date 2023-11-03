#include <bits/stdc++.h>
using namespace std;

int main()
{

    int test;
    cin >> test;
    string s;
    int count = 0;
    int runs = 0;
    for (int i = 0; i < test; i++)
    {

        cin >> s;
        

        int totalBalls = s.size();

        int overs = totalBalls / 6;
        int remainingBalls = totalBalls % 6;

        double oversWithDecimal = overs + (static_cast<double>(remainingBalls) / 10.0);

        for (int i = 0; i < s.size(); i++)
        {

            if (s[i] == 'w'|| s[i]=='W')
            {
                count++;
            }
            else
            {
                runs += s[i]-'0';
            }
        }

        std::cout << std::fixed << std::setprecision(1);

        if (oversWithDecimal > 1.00)
        {
            cout << oversWithDecimal << " Overs ";
        }
        else
        {
            cout << oversWithDecimal << " Over ";
        }
        if (runs > 1)
        {
            cout << runs << " Runs ";
        }
        else
        {
            cout << runs << " Run ";
        }
        if (count > 1)
        {

            cout << count << " Wickets.";
        }
        else
        {
            cout << count << " Wicket.";
        }
        cout<<endl;
        runs=0;
        oversWithDecimal=0.0;
        count=0;
    }
}