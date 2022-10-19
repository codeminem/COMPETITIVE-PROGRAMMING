#include <iostream>
using namespace std;

int main() {
	int t,n,p,x,y;
	
	cin>>t;
	while(t--){
	    int sum=0;
	    cin>>n>>p>>x>>y;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
        }
	    int psn=p-1;
	    for(int i=0;i<psn;i++){
            if(arr[i]==0){
                sum+=x;
            }
            else if(arr[i]==1){
                sum+=y;
            }
        }
	    cout<<(sum+y)<<endl;
	}
	
	return 0;
}