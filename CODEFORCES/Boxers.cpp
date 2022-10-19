#include<iostream>
using namespace std;
#define ll long long

const ll N = 150010;
ll v[N];

int main() {

	ll t = 1;
	// cin >> t;
	while (t--) {
		ll n; cin >> n;
		ll arr[n];
		for (ll i = 0; i < n; i++) {
			cin >> arr[i];
		}
		sort(arr, arr + n);
		for (ll i = 0; i < n; i++) {
			ll cur = arr[i];
			if (cur - 1 != 0 && v[cur - 1] == 0) {
				v[cur - 1]++;
			}
			else if (v[cur] == 0) {
				v[cur]++;
			}
			else if (v[cur + 1] == 0) {
				v[cur + 1]++;
			}
		}
		ll ans = 0;
		for (ll i = 1; i < N; i++) {
			if (v[i] > 0) ans++;
		}
		cout << ans << "\n";
	}
	return 0;
}