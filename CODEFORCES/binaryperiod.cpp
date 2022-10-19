#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--){
        string t;
        cin>>t;
        int a(0),b(0);
        for(int i=0;i<t.size();i++){
            if(t[i]=='0') a++;
            if(t[i]=='1') b++;
        }
        if(a==0 || b==0){
            cout<<t<<endl;
            continue;
        }
        for(int i=0;i<t.size();i++){
            cout<<"01";
        }
        cout<<endl;
    }
}