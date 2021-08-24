#include <bits/stdc++.h>
using namespace std;
int invers(int num)
{
    int n = 1;
    int i = 1;
    while (n < num) {
        i += 1;
        n *= i;
    }
    return i;
}
int main()
{
    string res;cin>>res;
    int true_ans=res.size();
    if(true_ans < 7)
    {
        int num=stoi(res);
        cout<<invers(num)<<endl;
        return 0;
    }
    else {
        double count=0,result=1;
        while (true) {
            count++;
            result += log10(count);
            if (floor(result) == true_ans) {
                cout << count << endl;
                return 0;
            }
        }
    }
}
