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
//const int N= ;
signed main()
{ 
  fastio();
  mc;
  while(t--){
        int ascii;
        string s;
        int n;
        cin>>n;
        int num;
        cin>>num;
        int arr[n];
        for(int i=0;i<n;i++){
            arr[i]=(num%10);
            num/=10;
        }
        for(int i=0;i<n;i++){
            if(arr[i+2]==0 && i<n-2){
                int x=arr[i+1];
                cout<<"x"<<arr[i+1]<<endl;
                int y=arr[i];
                cout<<"y"<<y<<endl;
                int num=10*arr[i]+arr[i+1];
                cout<<"num"<<num<<endl;
                ascii=num+96;
                s+=(char)ascii;
            }
            else{
                ascii=arr[i]+96;
                s+=(char)ascii;
            }

        }
        cout<<s<<endl;
    }
    
  

  return 0;
}
