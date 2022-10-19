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
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

ll calc(const vector<int> &a) {
	ll n = a.size();
	vector<ll> d1(n+1), d2(n+1);
	d1[0] = -1;
	d2[0] = 0;
	for (int i = 0; i < n; ++i) {
		d1[i+1] = max(d1[i], d2[i] + a[i]);
		d2[i+1] = max(d2[i], d1[i] - a[i]);
	}
	return max(d1.back(), d2.back());
}

int main() {
	fastio();
	int t; cin >> t;
	while (t--) {
		int n, q; cin >> n >> q;
		vector<int> a(n);
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}
		cout << calc(a) << "\n";
	}
	return 0;
}