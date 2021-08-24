#include <bits/stdc++.h>
using namespace std;
int main(){
    pair<int,int> s_team[100001];
    multiset<pair<int,int>> scoreboard;
    int n,m;cin>>n>>m;
    for (int i = 0; i < m ; ++i) {
        int t,p;cin>>t>>p;
        pair<int,int> remember=s_team[t];
        s_team[t].first++;s_team[t].second-=p;
        if (t == 1) {
            while (!scoreboard.empty()) {
                if (*scoreboard.begin() <= s_team[1]) {
                    scoreboard.erase(*scoreboard.begin());
                } else break;
            }
        }else {
            if (s_team[t] > s_team[1]) {
                if (remember <= s_team[1])
                    scoreboard.insert(s_team[t]);

                else {
                    scoreboard.erase(scoreboard.find(remember));
                    scoreboard.insert(s_team[t]);
                }
            }
        }
        cout << scoreboard.size()+1 <<endl;
    }

}
