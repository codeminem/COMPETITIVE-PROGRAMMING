 
#include <iostream>
#include <algorithm>
#include <unordered_set>
using namespace std;

int main()
{   
    long long  t;
    cin>>t;
    while(t--){

        long long n;
        cin>>n;
        int arr[n];
        for(long long i=0;i<n;i++){
            cin>>arr[i];
        }
        unordered_set<int> s(arr,arr+n);
        if(s.size()!=n){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
        
    }
    return 0;
}