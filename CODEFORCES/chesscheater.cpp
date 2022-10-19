#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    vector<int>v2;
    int t,n,k;
    string s=" ";
    cin>>t;
    
    while(t--){
        cin>>n>>k;  //no. of games placed, outcomes changed
        cin>>s;
    
        for(int i=0;i<n;i++){
            if(s[i]=='W')
            {
                v.push_back(i);
            }

        }
        for(int i=0;i<(v.size()-1);i++){
            v2.push_back(v[i+1]-v[i]);

        }
    
    }
    for(int it=0;it<v.size();it++){
        cout<< v[it]<< " "<<endl;
    }
    for(int it=0;it<v2.size();it++){
        cout<< v2[it]<< " ";
    }
    return 0;
}