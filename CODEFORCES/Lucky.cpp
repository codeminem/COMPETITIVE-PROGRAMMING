//जय हनुमान जी!
#include<iostream>
#include<algorithm>
#include<string>
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


ll n,k;
string s;
string s1="";
int change;
bool satisfy=false;
bool satisfy1=false;
bool satisfy2=false;
char check(char A[]){

    while(k>0){
        for(int i=0;i<n-1;i++){
            satisfy=false;
            satisfy1=false;
            satisfy2=false;
            
            change=0;
            if(A[i]=='4' && A[i-1]=='4' && A[i+1]=='7'){
                if(i%2==0){ //odd
                    satisfy1=true;
                    A[i]=A[i-1]=A[i+1]=-1;
                }
                else{
                    //even
                    satisfy2=true;
                }
            }
            else{

                if(A[i]=='4' && A[i+1]=='7'){
                    satisfy=true;
                    if((i+1)%2==0){
                        A[i]='7';
                        A[i+1]='7';
                        change++;
                        break;
                    }
                    else{
                        A[i]='4';
                        A[i+1]='4';
                        change++;
                        break;
                    }
                } 
                if(i==n-2){
                    satisfy=true;
                }
            }
        }
        if(satisfy){
            k--;
        }
        if(change==0){
            k=0;
        }
    }
    
    if(k==0 || change==0){  
        return 'R';
    }
    else{
        check(A);
    }
    return 'M';
}

signed main()
{ 
    fastio(); 
    cin>>n>>k;
    cin>>s;
    char A[n];
    for(int i=0;i<s.length();i++){
        A[i]=s[i];
    }
    if(check(A)=='R'){
        rep(i,n){
            s1+=A[i];
        }
    }
    cout<<s1;
    return 0;
}
