#include <bits/stdc++.h>
using namespace std;
int main() {
    int kom;
    map<int,int> amap;
    vector<int> avec,javab;
    set<int> lolo;
    int n;cin>>n;
    for (int i = 1; i <=n ; ++i) {
        cin>>kom;
        amap[kom]++;
        avec.push_back(kom);
    }
    for (int i = 1; i <=n+1 ; ++i) {
        if(amap[i]==0){
            lolo.insert(i);
        }
    }
    for(auto aa:avec){

        javab.push_back(*lolo.begin());
        lolo.erase(lolo.begin());
        amap[aa]--;
        if(amap[aa]==0){
            lolo.insert(aa);
        }
    }
    if(*lolo.begin()!=n+1){
        cout<<"Error";
        return 0;
    }
    for(auto aa:javab){
        cout<<aa<<endl;
    }
}
