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
int sum,n;
int cnt=0;

void dp(int index,int A[],int cursum){//this dp function indicates if sum is possible till the ith index

    //base case

    if(cursum==sum){
        cnt++;
        return;
    }
    //include
    if(index<(n) && cursum<sum){
        dp(index+1,A,cursum+A[index]);
    }

    //exclude
    if(index<(n) && cursum<sum){
        dp(index+1,A,cursum);
    }
}

signed main()
{ 
    fastio();
    cin>>n;
    int A[n];rep(i,n){cin>>A[i];}
    cin>>sum;
    dp(0,A,0);
    cout<<cnt<<endl;

    return 0;
}
