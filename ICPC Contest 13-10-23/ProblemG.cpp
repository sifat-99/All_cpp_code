#include<bits/stdc++.h>
using namespace std;
float overs(int balls) {
  float overs = balls / 6.0f;
  if (balls % 6 != 0) {
    overs += 0.1f;
  }
  overs = roundf(overs * 10.0f) / 10.0f;
  return overs;
}
int main() {
    int t;
    cin >> t;
   for(int i=0; i<t; i++) {
        string s;
        cin >> s;
        int balls = s.size();
        int over = overs(balls);
        int remaining_balls = balls % 6;
        int runs = 0, wickets = 0;
        for (int i = 0; i < balls; i++) {
            if (s[i] == 'W') {
                wickets++;
            } else {
                runs += s[i] - '0';
            }
        }
            if(over>=1 && remaining_balls>0)
            {
                cout<<over<<"."<<remaining_balls<<" Overs ";
            }
            else{
                cout<<over<<"."<<remaining_balls<<" Over ";
            }
            if(runs>1)
            {
                cout<<runs<<" Runs ";
            }
            else{
                cout<<runs<<" Run ";
            }
            if(wickets>1)
            {
                cout<<wickets<<" Wickets."<<endl;
            }
            else{
                cout<<wickets<<" Wicket."<<endl;
            }
    }
    return 0;
}
