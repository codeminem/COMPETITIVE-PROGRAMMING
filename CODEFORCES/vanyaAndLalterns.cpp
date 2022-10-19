#include<iostream>
#include<vector>
#define ll long long
using namespace std;
ll n,l;
double r1,r2,r3;
vector<double>v1;
int main()
{
    cin>>n>>l;
    double arr[n];
    double arr2[n-1];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
   
    r1=arr[0];
  
    r2=(l-arr[n-1]);
    
    for(int i=1;i<=(n-1);i++){
        arr2[i-1]=arr[i]-arr[i-1];
    }
    double a=INT_MIN;
    for(int i=0;i<(n-1);i++){
        a=max(a,arr2[i]);
    }
    r3=a/2;
    
    v1.push_back(r1);
    v1.push_back(r2);
    v1.push_back(r3);
   
    sort(v1.begin(),v1.end());
    printf("%.10f\n",v1[2]);

    return 0;
} 