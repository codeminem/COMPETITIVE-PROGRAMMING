#include<iostream>
using namespace std;

int main () {
    int t ;
    cin >> t ;
    while (t--) {
        int n ;
        cin >> n ;
        string x ;
        cin >> x ;
        int f[n] , s[n] ;
        for (int i=0;i<n;i++) {
            if (x[i]=='2') {
                f[i]=1 ;
                s[i]=1 ;
            }
            else if (x[i]=='0') {
                f[i]=0 ;
                s[i]=0 ;
            }
            else {
                f[i]=1 ;
                s[i]=0 ;
                for (int j=i+1;j<n;j++) {
                    f[j]=0 ;
                    if (x[j]=='2') {
                        s[j]=2 ;
                    }
                    else if (x[j]=='1') {
                        s[j]=1 ;
                    }
                    else {
                        s[j]=0 ;
                    }
                }
                break;
            }
        }
    for (int i=0;i<n;i++) {
        cout << f[i] ;
    }
    cout << endl ;
    for (int i=0;i<n;i++) {
        cout << s[i] ;
    }
    cout << endl ;
        
    } 

}