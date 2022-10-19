#include<iostream>
using namespace std;
typedef long long int ll;
ll power(int i){
    int x=1;
    while(i--){
        x*=10;
    }
    return x;
}
int main()
{   
    int t,dig(0);
    cin>>t;
    while(t--){        
        int n,s;
        int arr[19];
        cin>>n>>s;
        for(int i=0;i<18;i++){
            arr[i]=n/power(18-i);
            n=n-arr[i]*power(18-i);
        }
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        if(sum<=s) cout<<0;
        else{
            
        }


    }
    return 0;
}