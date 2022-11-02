
#include <iostream>
using namespace std;

const int N = 130007;

int n;
int ar[N];
long long dp[N][2];
string name[N];

int main(){
	
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> ar[i];
	}
	for (int i = 1; i <= n; i++)
	{
		cin >> name[i];
	}

	dp[1][0] = 0;
	dp[1][1] = ar[1];
	for (int i = 2; i <= n; i++)
	{
		for (int j = 0; j <= 1; j++)
		{
			dp[i][j] = 1e18;
		}
		for (int p = 0; p <= 1; p++)
		{
			for (int q = 0; q <= 1; q++)
			{
				string st1 = name[i - 1];
				string st2 = name[i];
				if (p)
					reverse(st1.begin(), st1.end());
				if (q)
					reverse(st2.begin(), st2.end());
				if (st1 <= st2)
					dp[i][q] = min(dp[i][q], dp[i - 1][p] + ar[i] * q);
			}
		}
	}

	long long res = min(dp[n][1], dp[n][0]);
	if (res > 1e17)
		res = -1;
	cout << res << endl;

	cin.get(); cin.get();
	return 0;
}