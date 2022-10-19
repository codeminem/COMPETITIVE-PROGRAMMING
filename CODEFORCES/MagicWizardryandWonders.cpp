#include<iostream>
using namespace std;
 
int main() {
    int n , d , l ;
    cin >> n >> d >> l ;
    int Max , Min;
    Max = (n/2)*l-(n/2) ;
    Min = -(n/2)*l + (n-n/2) ;
    int arr[n] ;
    int x;
    int y=0 ;
    if (d<=Max && d>=Min) {
        for (int i=0;i<n;i++) arr[i]=1 ;
        if (n/2+d < n-n/2) {
            x=n-n/2-n/2-d ;
            while(x--) {
                arr[2*y+1]++ ;
                if (arr[2*y+1]==l) y++ ;
            }
        }
        else {
            x=n/2+d-n+n/2 ;
            while (x--) {
                arr[2*y]++;
                if (arr[2*y]==l) y++ ;
            }
        }
        for (int i=0;i<n;i++) {
            cout << arr[i] << " " ;
        }
    }
    else cout << -1 ;
    
}