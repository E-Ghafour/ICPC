#include <bits/stdc++.h>
using namespace std;
int main() {
    double n,p, s, v;cin >> n >> p >> s >> v;
    double low = .000000001,high = 1000000000;
    double my_func1,my_func2;
    double c1,c2;
    for (int i = 0; i < 100; i++) {
        c1 = low + (high-low)/3.;
        c2 = low + (high-low)*2./3.;
        my_func1=(n*pow(log2(n), c1*sqrt(2)) / (p*1000000000)) + (s*(1.+1./c1)/v);
        my_func2=(n*pow(log2(n), c2*sqrt(2)) / (p*1000000000)) + (s*(1.+1./c2)/v);
        if (my_func1 > my_func2 )
        {
            low=c1;
            continue;
        }
        if(my_func1 <= my_func2 )
        {
            high=c2;
            continue;
        }
        }
    double mid=(low+high)/2;
    printf("%.7f %.7f",(n*pow(log2(n), mid*sqrt(2)) / (p*1000000000)) + (s*(1.+1./mid)/v),mid);
    cout<<endl;
}
