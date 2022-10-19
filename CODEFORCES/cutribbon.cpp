//जय हनुमान जी!
#include<iostream>
#include<algorithm>
#include<unordered_map>
#include<vector>
#include<unordered_set>
#include<queue>
using namespace std;
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
    int n,a,b,c;
    vector<int>v1;
    cin>>n>>a>>b>>c;
    v1.push_back(a);
    v1.push_back(b);
    v1.push_back(c);
    sort(v1.begin(),v1.end());

    

  return 0;
}