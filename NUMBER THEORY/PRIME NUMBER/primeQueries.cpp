//in this case we have multiple queries and we have to work smartly
//number of primes upto an index i |make an array and keep storing
//so csum[i]=csum[i-1]+(1->if csum[i] is prime)
//count of prime (a,b) is csum[b]-csum[a-1]
//जय हनुमान जी!
#include<iostream>
#include <time.h>
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


#define N 10000
int csum[N];
void PrimeSieve(vector<int> &sieve,int csum[N],int count){
    sieve[0]=sieve[1]=0;
    for(ll i=2;i<N;i++){
        if(sieve[i]){
            for(ll j=i*i;j<N;j+=i){
                sieve[j]=0;
            }
        }
    }
    for(int i=2;i<N;i++){
        count=0;
        for(int j=0;j<=i;j++){
            if(sieve[j]){
                count++;
            }
            csum[0]=0;
            csum[1]=0;
            csum[i]=count;
        }
    }
}
int main()
{
    clock_t tStart = clock();
    vector<int>sieve(N,1);
    PrimeSieve(sieve,csum,0);
    int a,b;
    cin>>a>>b;
    cout<<(csum[b]-csum[a-1]);
    printf("Time taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
  return 0;
}


