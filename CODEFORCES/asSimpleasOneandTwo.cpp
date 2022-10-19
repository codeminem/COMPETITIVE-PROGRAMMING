//जय हनुमान जी!
#include<iostream>
#include<string>
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
const int N= 1e4;
string s;
string s1="twone";
char arr1[]="twone";
string s2="one";
string s3="two";
signed main()
{ 
  
  mc;
  while(t--){
    int count(0);
    cin>>s;
    int n=s.size();
    int arr[n];
    rep(i,n){
        arr[i]=s[i];
    }
    bool found_substring=true;
    while(found_substring){
        size_t found=s.find(s1);
        if(found!=string::npos){
          count++;
          arr[found+2]='A';
        }
        else{
          found_substring=false;
        }
        found=s.find(arr1,found+1);
      cout<<count;
    }
  }
    return 0;
}
