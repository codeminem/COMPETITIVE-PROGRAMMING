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
//problem is same as unbounded kanpsack
int t[9][9];
int un_kp(int price[],int length[],int max_len,int n){
    //base case
    if(n==0 || max_len==0){
        return 0;
    }
    if(length[n-1]<=max_len){
        t[n][max_len]=max(price[n-1]+un_kp(price,length,max_len-length[n-1],n),un_kp(price,length,max_len,n));
    }
    else{
        t[n][max_len]=un_kp(price,length,max_len,n-1);
    }
    return t[n][max_len];
}
int main()
{
    int price[] = { 1, 5, 8, 9, 10, 17, 17, 20 };
    int n = sizeof(price) / sizeof(price[0]);
    int length[n];
    for (int i = 0; i < n; i++) {
        length[i] = i + 1;
    }
    int Max_len = n;
 
    // Function Call
    cout << "Maximum obtained value  is "
         << un_kp(price, length, n, Max_len) << endl;
}
