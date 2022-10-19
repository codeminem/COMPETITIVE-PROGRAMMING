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


bool wordCheck(string toMake,string original){
	for(int i=0;i<toMake.size();i++){
		if(count(original.begin(),original.end(),toMake[i])==0){
			return false;
		}
		return true;
	}
}
string s1,s2;
int count1=0;
int main()
{
	ll y=s2.length();
	ll x=s1.length();
	ll j=0;
	cin>>s1;
	cin>>s2;
	if(wordCheck(s2,s1)){
		while(j<y){
			count1++;
			for(int i=0;i<x;i++){
				if(s1[i]==s2[j]){
					j++;
				}
			}
		}

	}
	else{
		cout<<-1;
	}
  return 0;
}