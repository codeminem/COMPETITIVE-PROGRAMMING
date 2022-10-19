#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int t,b(0);
    cin>>t;
    while(t--){
        int n;
        vector<int>v1;
        vector<int>v2;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int res=0;
        for(int i=0;i<n;i++){
            while(i<n-1 && arr[i]==arr[i+1]){
                i++;
            }
            res++;
        }
        cout<<res;
         //perfectly giving no. of distinct skills=diff

        for(int i=0;i<n;i++){
            int a=0;
            for(int j=0;j<n;j++){
                if(arr[i]==arr[j]){
                    a+=1;
                }
            }
            v1.push_back(a);
        }
        
        b+= *max_element(v1.begin(), v1.end());
        cout<<b;
          //giving skills that repeat most no. of times=maxcnt
        cout<<max(min(res-1,b),min(res,b-1));
    }
    return 0;
}