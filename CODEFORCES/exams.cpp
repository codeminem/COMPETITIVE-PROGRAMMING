#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
#define ll long long;
int main()
{
    int n;
    cin>>n;
    vector<pair<int,int> > dates(n);
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        dates[i].first=a;
        dates[i].second=b;
    }

    sort(dates.begin(),dates.end());
    int f=-1;
    for(int i=0;i<n;i++){
        if(f<dates[i].second){
            f=dates[i].second;
        }
        else{
            f=dates[i].first;
        }
    }
    cout<<f;
    return 0;
}   