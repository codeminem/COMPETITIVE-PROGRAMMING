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


int checkPermutations(){

}


int generatePermutations(vector<int>v1,int n){
    next_permutation(v1,v1+n);
    checkPermutation()

}

int main()
{
    int t,n,m;
    cin>>t;
    while(t--){
        cin>>n>>m;
        vector<int>v1;
        for(int i=0;i<n;i++){
            v1[i]=(i+1);
        }
        generatePermutations(v1,n)
    }
  return 0;
}