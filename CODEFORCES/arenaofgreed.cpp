#include <iostream>
 
using namespace std;
 
#define pb push_back
#define pf push_front
#define pob pop_back
#define pof pop_front
#define mp make_pair
#define fi first
#define se second
 
typedef long long lli;
typedef pair<int, int> ii;
typedef pair<lli, lli> ll;
 
lli solve(lli n) {
	if (n < 5)
		return max(1ll, n - 1);
	if ((n % 2 == 1) || (n % 4 == 0))
		return (n - solve(n - 1));
	return (n - solve(n / 2));
}
 
int main() {
	lli tc, n;
	scanf("%lld", &tc);
	while (tc--) {
		scanf("%lld", &n);
		printf("%lld\n", solve(n));
	}
	return 0;
}