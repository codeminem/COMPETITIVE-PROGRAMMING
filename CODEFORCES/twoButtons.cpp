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


void blue(int &n,int m,int &count1){
    while(n>m){
        n-=1;
        count1++;
    }
}

void red(int &n,int m,int &count1){
    while(n<m){
        n*=2;
        count1++;
    }
    blue(n,m,count1);
}


int main()
{
    int count=0;
    int n,m;
    cin>>n>>m;
    int x=m;
    
    if(x%2==0){
        while(x%2==0){
            x/=2;
            blue(n,x,count);
            red(x,m,count);
        }
    }
    

    if(n<m){
        red(n,m,count);
    }
    else{
        blue(n,m,count);
    }
    cout<<count;


  return 0;
}