#include<iostream>
using namespace std;
 

int main() {
	int t ;
	cin >> t ;
	while (t--) {
		int n , k ;
		cin >> n >> k ;
		int arr[n];
		int count = 0 , sum=0 ;
		for (int i=0;i<n;i++) {
			cin >> arr[i];
			if (arr[i]==k) count++ ;
			sum = sum + arr[i] ;
		}
		if (count==n) cout << 0 << endl ;
		else if (count>0 || sum==n*k) cout << 1 << endl ;
		else cout << 2 << endl ;
	}
 
}
