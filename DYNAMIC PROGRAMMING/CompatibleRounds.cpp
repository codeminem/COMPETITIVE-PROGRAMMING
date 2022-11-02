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
int x,num1,number;

vector<int>v2;


string DtB(int num){
    string str;
    
    while(num){
        if(num&1){
            str+='1';
        }
        else{
            str+='0';
        }
        num>>=1;
    }
    
    return str;
}
int createnum(string str1){
    number=0;
    for(int i=0;i<str1.size();i++){
        x=(i);
        num1=1;
        for(int j=0;j<x;j++){
            num1*=10;
        }
        number+=num1*str1[i];
    }
    return number;
}


signed main()
{ 
    fastio();
    int n;cin>>n;
    vector<string>v1;
    int A[n];
    rep(i,n){
        cin>>A[i];
    }
    rep(i,n){
        v1.push_back(DtB(A[i]));
    }
    rep(i,n){
        cout<<v1[i];
    }
    cout<<endl;
    rep(i,n){
        cout<<createnum(v1[i])<<" ";
    }
    


    return 0;
}
