#include<iostream>
#include<algorithm>
#include<vector>
#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define vpii vector<pair<int, int>> 
#define rep(i, n) for(int i = 0; i < n; i++)
#define repll(i, n) for(long long i = 0; i < n; i++)
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define mc int t; cin>>t
#define MOD1 998244353
#define nline "\n" 
typedef long long ll;
typedef unsigned long long ull;
int gcd(int a,int b){if(b>a){return gcd(b,a);}if(b==0){return a;}return gcd(b,a%b);}
bool revsort(int a,int b){return a>b;}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
                                                DONT CHANGE ANYTHING ABOVE THIS LINE!
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
const int mod= 1e9+7;

int sumSequence(int arr[],int n){
    int sum=INT_MIN;
    int MSIBS[n],MSDBS[n] ;
    // MSIBS->max sum increasing bitonic ending with arr[i]
    // MSDBS->max sum decreasing bitonic starting with arr[i]
    for(int i=0;i<n;i++){
        MSDBS[i]=arr[i];
        MSIBS[i]=arr[i];
    }
    //compute MSIBS values left to right
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(arr[i]>arr[j] && MSIBS[i]<MSIBS[j]+arr[i]){
                MSIBS[i]=MSIBS[j]+arr[i];
            }
        }
    }
    //compute MSDBS values right to left
    for(int i=n-2;i<=0;i--){
        for(int j=n-1;j>i;j--){
            if(arr[i]>arr[j] && MSDBS[i]<MSDBS[j]+arr[i]){
                MSDBS[i]=MSDBS[j]+arr[i];   
            }
        }
    }
    for(int i=0;i<n;i++){
        sum=max(sum,(MSDBS[i]+MSIBS[i]-arr[i]));
    }
    return sum;
}

signed main()
{ 
    fastio();
    int n;cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    cout<<sumSequence(A,n);

    return 0;
}
