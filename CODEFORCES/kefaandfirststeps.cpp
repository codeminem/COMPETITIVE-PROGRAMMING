#include<iostream>
using namespace std;
const long long N=228228;

long long k,o(0),i,j,n,m;

int main(){
	cin>>n;
	long long a[n];
	for(i=0;i<n;i++){
        cin>>a[i];
    }
	k=1;
	for(i=1;i<n;i++){
		if(a[i]>=a[i-1]){
			k++;
		}
		else{
			o=max(o,k);
			k=1;
		}
	}
	o=max(o,k);
	cout<<o;
}