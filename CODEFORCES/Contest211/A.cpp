//जय हनुमान जी!
#include<iostream>
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
//const int N= ;
signed main()
{ 
  fastio();
  ll n;
  cin>>n;
  if(n==0){
    cout<<"O-|-OOOO";
  }
  else{
    while(n>0){
            string s="";
            int x=n%10;
            if(x<5){
                s+="O-|";
                if(x==0){
                    s+="-OOOO";
                }
                if(x==1){
                    s+="O-OOO";
                }
                if(x==2){
                    s+="OO-OO";
                }
                if(x==3){
                    s+="OOO-O";
                }
                if(x==4){
                    s+="OOOO-";
                }   
            }
            else if(x==5){
                s+="-0|-OOOO";
            }
            else if(x>5){
                s+="-O|";
                int y=x-5;
                if(y==0){
                    s+="-OOOO";
                }
                if(y==1){
                    s+="O-OOO";
                }
                if(y==2){
                    s+="OO-OO";
                }
                if(y==3){
                    s+="OOO-O";
                }
                if(y==4){
                    s+="OOOO-";
                }   

            }
            cout<<s<<endl;
            n=n/10;
            s= "";

        }
   }
  return 0;
}
