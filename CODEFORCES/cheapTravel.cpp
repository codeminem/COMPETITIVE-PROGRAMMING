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
#define MOD1 998244353
#define nline "\n" 
typedef long long ll;
typedef unsigned long long ull;
int gcd(int a,int b){if(b>a){return gcd(b,a);}if(b==0){return a;}return gcd(b,a%b);}
bool revsort(int a,int b){return a>b;}
int main()
{
    
    int n,m,a,b;
    int sum_rides(0);
    int sum_rides_leftover;
    int cost_1(0);
    int cost_2(0);
    cin>>n>>m>>a>>b;
    if(b<=(m*a)){
        while(sum_rides<=(n-m)){
            sum_rides+=m;
            cost_1+=b;
        }
        
        
        sum_rides_leftover=(n-sum_rides);
     
        if(sum_rides_leftover<m && (b<a*sum_rides_leftover)){
            cost_1+=b;
        }
        else{
            cost_1+=(sum_rides_leftover*a);
        }
        cout<<cost_1;
    }
    else{
        cout<<(n*a);
    }

  return 0;
}