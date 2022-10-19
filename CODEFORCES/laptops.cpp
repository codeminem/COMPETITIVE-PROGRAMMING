#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    
    int n,count(0);
    cin>>n;
    vector<pair<int,int> > laptop(n);
    
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        laptop[i].first=a;
        laptop[i].second=b;
    }
    sort(laptop.begin(),laptop.end());
    
    if(n==1){
        cout<<"Poor Alex"<<endl;
    }
    else{

        for(int i=0;i<n-1;i++){
            if(laptop[i+1].first>laptop[i].first && laptop[i].second>laptop[i+1].second){
                count++;
                break;
            }
        }
        if(count>0){
            cout<<"Happy Alex"<<endl;
        }
        else{
            cout<<"Poor Alex"<<endl;
        }

    }
    
    

    return 0;
}