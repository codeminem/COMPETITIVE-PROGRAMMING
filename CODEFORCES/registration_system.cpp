#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
int main()
{
    int n,count1;
    cin>>n;
    unordered_map<string,int>system;
    for(int i=1;i<=n;i++){
        string s;
        cin>>s;
        count1=system.count(s);
        if(count1==0){
            system[s]+=1;
            cout<<"OK";
        }
        else{
            string count2= to_string(count1);
            s=s+count2;
            cout<<s;
        }
        
    }

    return 0;
}