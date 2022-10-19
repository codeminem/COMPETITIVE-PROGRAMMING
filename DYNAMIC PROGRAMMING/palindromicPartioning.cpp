//जय हनुमान जी!
#include<iostream>
#include<algorithm>
#include<unordered_map>
#include <string>
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

class Solution{
public:
string s;
    bool is_palindrome(int i,int j){
        while(i<=j){
            if(s[i] != s[j]) return false;
            i++; j--;
        }
        return true;
    }
    vector<vector<string>> dp(int i){
        vector<vector<string>> ans;
        for(int j=i;j<s.size();j++){
            if(is_palindrome(i,j)){
                    vector<vector<string>> res=dp(j+1);
                    string substring=s.substr(i,j-i+1);
                    for(auto x:res){
                        x.insert(x.begin(),substring);
                    }
            }
            
        }
    }
    vector<vector<string>>partition(string s){
        this->s=s;
        return dp(0);

    }
};

int main()
{
    string s;
    cin>>s;
    Solution H;
    vector<vector<string>> res= H.partition(s);
    for(auto x:res){
        for(auto y:x){
            cout<<y;
        }
    }

  return 0;
}