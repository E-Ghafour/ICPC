#include <bits/stdc++.h>
#define ull unsigned long long
#define ll long long
using namespace std;
void check_use(int pos,vector<bool> a, vector<bool> b, vector<bool> c, int aa, int bb, int cc)
{
    if(pos==2)
    {
        for (int i = 0; i < aa; ++i) {
            a[i]=false;
        }
        return;
    } else {
        for (int i = 0; i < aa; ++i) {
            a.push_back(false);
        }
        for (int i = 0; i < bb; ++i) {
            b.push_back(false);
        }
        for (int i = 0; i < cc; ++i) {
            c.push_back(false);
        }
    }
}
void make_change(int a1,int b1,vector<bool> a,vector<bool> b)
{
    a[a1]=true;b[b1]=true;
}

double find_dist(double sum,int ju,int t,int f,vector<bool> jj ,vector<bool> tt,vector<bool> ff,vector<pair<double , double>> jjj,vector<pair<double , double>> ttt,vector<pair<double , double>> fff)
{
//    cout<<"sdf;ik";
    double min_dist = INT_MAX,x_cor,y_cor,acc_dist;
    for(int i=0; i<ju; i++) {
        min_dist = INT_MAX;
        int s_j = -1, s_t = -1;
        for (int j = 0; j < ju; j++) {
            if (jj[j]) continue;
            for (int k = 0; k < t; k++) {
                if (tt[k]) continue;
                x_cor = jjj[j].first - ttt[k].first;
                y_cor = jjj[j].second - ttt[k].second;
                acc_dist = pow(x_cor, 2) + pow(y_cor, 2);
                if (acc_dist < min_dist) {
                    min_dist = acc_dist;
                    s_j = j, s_t = k;
                }
            }
        }
      //  cout<<"sdf;ik";
        double real_dist = sqrt(min_dist);
        sum += real_dist;
        //make_change(s_j, s_t, jj, tt);
        jj[s_j]=true;
        tt[s_t]=true;
    }
    for(int i=0; i<ju; i++) {
        jj[i] = false;
    }
    //check_use(2,jj,tt,jj,ju,0,0);
    for(int i=0; i<ju; i++) {
        min_dist = INT_MAX;
        int s_j = -1, s_t = -1;
        for(int j=0; j<ju; j++) {
            if (jj[j]) continue;
            for(int k=0; k<f; k++) {
                if (ff[k]) continue;
                x_cor = jjj[j].first - fff[k].first;
                y_cor = jjj[j].second -fff[k].second;
                acc_dist = pow(x_cor, 2) + pow(y_cor, 2);
                if (acc_dist < min_dist) {
                    min_dist = acc_dist;
                    s_j = j, s_t = k;
                }
            }
        }
        double real_dist = sqrt(min_dist);
        sum += real_dist;
      //  make_change(s_j, s_t, jj, ff);
      jj[s_j]=true;
      ff[s_t]=true;
    }
    return sum;
}
int main() {
    int num_judges,num_tar,num_feather;cin>>num_judges>>num_tar>>num_feather;
    double sum_dist=0.000;
    vector<pair<double , double>> p_judge,p_tar,p_feather;
    vector<bool> judge_use,tar_use,feather_use;
    double d1,d2;
    for (int i = 0; i <num_judges ; ++i) {
        judge_use.push_back(false);
        cin>>d1>>d2;
        pair<double,double> k;
        k.first=d1;k.second=d2;
        p_judge.push_back(k);
    }
    for (int i = 0; i <num_tar ; ++i) {
        tar_use.push_back(false);
        cin>>d1>>d2;
        pair<double,double> k;
        k.first=d1;k.second=d2;
        p_tar.push_back(k);
    }
    for (int i = 0; i <num_feather ; ++i) {
        cin>>d1>>d2;
        feather_use.push_back(false);
        pair<double,double> k;
        k.first=d1;k.second=d2;
        p_feather.push_back(k);
    }
    check_use(1,judge_use,tar_use,feather_use,num_judges,num_tar,num_feather);
    printf("%.7f\n",find_dist(sum_dist,num_judges,num_tar,num_feather,judge_use,tar_use,feather_use,p_judge,p_tar,p_feather));
}
