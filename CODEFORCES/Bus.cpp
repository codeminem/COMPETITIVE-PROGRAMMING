#include<iostream>
using namespace std;
 
typedef long long int ll;
 
int main() {
    ll a , b , f , k ;
    cin>> a >> b >> f >> k ; 
    ll fuel[k] ;
    ll end = a*k ;
    ll x=0 ;
    for (int i=0;i<k;i++) {
        if (i%2==0) {
            fuel[i]=i*a+f ;
        }
        else fuel[i]=i*a+a-f ;
    }
    if (k==1) {
        if (b<f || b<(a-f)) cout << -1 ;
        else {
            if (b>=a) cout<< 0 ;
            else cout << 1 ;
        } 
    }
    else if  (k==2) {
        if (b<f || b<2*(a-f)) cout << -1 ;
        else {
            if (b>=2*a) cout << 0 ;
            else if (b>=2*a-f) cout << 1 ;
            else cout << 2 ;
        }
    }
    else {
        if (b<2*f || b<2*(a-f)) cout << -1 ;
        else {
            ll count = 0 ;
            while (x!=end) {
                if (end-x<=b) x=end ;
                else {
                    for (int i=k-1;i>=0;i--) {
                        if (fuel[i]-x<=b) {
                            x=fuel[i] ;
                            count ++ ;
                            break ;
                        }
                    }
                }
            }
            cout << count ;
        }
    }
    
}