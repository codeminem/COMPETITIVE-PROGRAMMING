//जय हनुमान जी!
#include<iostream>
#include<algorithm>
#include<unordered_map>
#include<vector>
#include<unordered_set>
#include<queue>
using namespace std;
typedef vector<int> vi;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define mc int t; cin>>t
#define MOD1 998244353
#define nline "\n" 
typedef long long ll;
typedef unsigned long long ull;
int gcd(int a,int b){if(b>a){return gcd(b,a);}if(b==0){return a;}return gcd(b,a%b);}
bool revsort(int a,int b){return a>b;}
//###~~###~~###~~###~~###~~###~~###~~###~~###~~###~~###~~###~~###~~###~~###~~###~~###~~###~~


int main()
{ 
    fastio();
    mc;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n-1;i++){
            int diff1=0;
            int diff2=0;
            if(arr[i]>=arr[i+1] && arr[i]>=1){
                diff1+= (arr[i]-arr[i+1]);
                arr[i]=max(0,arr[i+1]-k);
                if(arr[i]==0){
                    m+=arr[i];
                }
                else{
                    m+=(diff1+k);
                }   
            }
            else if(arr[i]<arr[i+1]){
                diff2+=(arr[i+1]-arr[i]);
                if(m-diff2+k>=0){
                    m-=(diff2-k);
                }
                else{
                    m=-1;
                }
            }
        }
        if(m<0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }

  return 0;
}