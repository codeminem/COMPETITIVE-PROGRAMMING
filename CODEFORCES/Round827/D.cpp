//जय हनुमान जी!
#include<iostream>
#include<algorithm>
#include<vector>
#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define vpii vector<pair<int, int>> 
#define rep(i, n) for(int i = 0; i < n; i++)
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
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

#define N 1000
void primeSieve(vector<int> &sieve){
  sieve[0]=sieve[1]=0;
  for(ll i=2;i<=N;i++){
    if(sieve[i]){
      for(ll j=i*i;j<=N;j+=i){
        sieve[j]=0;
      }
    }
  }
}

int main()
{
    int t;
    cin>>t;
    while(t--){

        int n;
        cin>>n;
        int arr1[n];
        int arr2[n];
        for(int i=0;i<n;i++){
            cin>>arr1[i];
        }
        vector<int> sieve(N,1);
        primeSieve(sieve);
        for(int i=0;i<n;i++){
            if(sieve[arr1[i]]){
            arr2[i]=i+1;
            }
            else{
                arr2[i]=-1;
            }
        }
        int k=1;
        int sum=0;
        sort(arr2,arr2+n);
        if(arr2[n-1]!=-1){
            while(k<2)
            for(int i=n-1;i>=0;i--){
                if(arr2[i]!=-1){
                    sum+=arr2[i];
                    k++;
                }
            }
            cout<<sum;
        }
        else{
            cout<<-1;
        }
        
    }
  return 0;
}


