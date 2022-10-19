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

signed main()
{ 
    fastio();
    int t;
    cin>>t;
    
    while(t--){
        int red_count=0;
        int red_count1=0;
        int blue_count=0;
        int blue_count1=0;
        bool satisfy;
        bool satisfy1;
        bool satisfy2;
        string s1[8];
        for(int i=0;i<8;i++){
            cin>>s1[i];
        }
        for(int i=0;i<8;i++){
            red_count=0;
            for(int j=0;j<8;j++){
                if(s1[i][j]=='R'){
                    red_count++;
                }
            }
            if(red_count==8){
                cout<<"R"<<endl;
                satisfy=true;
            }
        }
        if(satisfy!=true){

            for(int i=0;i<8;i++){
                red_count1=0;
                for(int j=0;j<8;j++){
                    if(s1[j][i]=='R'){
                        red_count1++;
                    }
                }
                if(red_count1==8){
                    cout<<"R"<<endl;
                    satisfy1=true;
                    break;
                }
            }
        }
        if(satisfy!=true && satisfy1!=true){
            for(int i=0;i<8;i++){
                blue_count=0;
                for(int j=0;j<8;j++){
                    if(s1[i][j]=='B'){
                     blue_count++;
                    }
                }
                if(blue_count==8){
                    cout<<"B"<<endl;
                    satisfy2=true;
                    break;
                }
            }
        }
        if(satisfy!=true && satisfy1!=true && satisfy2!=true){
            for(int i=0;i<8;i++){
                blue_count1=0;
                for(int j=0;j<8;j++){
                    if(s1[j][i]=='B'){
                     blue_count1++;
                    }
                }
                if(blue_count1==8){
                    cout<<"B"<<endl;
                    satisfy2=true;
                    break;
                }
            }
        }
        

    }
    

    return 0;
}
