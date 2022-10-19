#include<iostream>
using namespace std;

typedef long long int ll;


int main() {
    ll n , k , a , b ;
    cin >> n >> k >> a >> b ;
    if (a<=k*(b+1) && b<=k*(a+1)) {   
        if (a==b) {
            for (int i=0;i<n/2;i++) {
                cout << "GB" ;
            }
        }
        else if (a>b) {
            int arr[2*b+1] ;
            for (int i=0;i<2*b+1;i++) {
                arr[i]=1 ;
            }
            int x=a-b-1 ;
            int j=0 ;
            while (x--) {
                arr[j]++ ;
                if (arr[j]==k) j=j+2 ;
            }
            for (int i=0;i<2*b+1;i++) {
                if (i%2==0) {
                    while(arr[i]--) {
                        cout<< "G" ;
                    }
                }
                else cout<< "B" ;
            }
        }
        else if (b>a) {
            int arr[2*a+1] ;
            for (int i=0;i<2*a+1;i++) {
                arr[i]=1 ;
            }
            int x=b-a-1 ;
            int j=0 ;
            while (x--) {
                arr[j]++ ;
                if (arr[j]==k) j=j+2 ;
            }
            for (int i=0;i<2*a+1;i++) {
                if (i%2==0) {
                    while(arr[i]--) {
                        cout<< "B" ;
                    }
                }
                else cout<< "G" ;
            }
        }
    }
    else cout << "NO" ;
}