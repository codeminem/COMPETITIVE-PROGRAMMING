//जय हनुमान जी!
#include<iostream>
#include<algorithm>
#include<vector>
#define int long long
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
bool isSubsetSum(int set[],int n,int sum){
    //value of subset[i][j] will be true if
    // there us a subset of set[0....j-1] with sum
    // equal to i
    bool subset[n+1][sum+1];
    // if sum is 0 , then answer is true
    for(int i=0;i<=n;i++)
        subset[i][0]=true;
    //if sum is non zero and the set is empty then answer is false
    for(int i=1;i<=sum;i++)
        subset[0][i]=false;
    //fill subset table in bottom up manner
    for(int i=1;i<=n;i++){
        for(int j=1;j<=sum;j++){
            if(j<set[i-1]){
                subset[i][j]=subset[i-1][j];
            }
            if(j>=set[i-1]){
                subset[i][j]=subset[i-1][j] || subset[i-1][j-set[i-1]];
            }
        }
    }
    return subset[n][sum];
}
signed main()
{ 
  fastio();
  int n,sum;
  cin>>n>>sum;
  int arr[n];
  rep(i,n){
    cin>>arr[i];
  }
  if(isSubsetSum(arr,n,sum)==true){
    cout<<"yeah it's possible";
  }
  else{
    cout<<"nope,not possible";
  }
    return 0;
}
