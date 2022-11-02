#include <iostream>
using namespace std;

int main() 
{
	// your code goes here //N and c ==elephants,candies
	int T;
	cin>>T;
	while(T--){
	   int N,C;
	   cin>>N>>C; 
	   int arr[N];
	   for(int i=0;i<N;i++){
	       cin>>arr[i];
	   }
	 int sum=0;
	 for(int i=0;i<N;i++){
	       sum+=arr[i];
        }
	 if(sum<C){
	     cout<<"Yes";
	 }
	 else{
	     cout<<"No";
	 
	 }
	 
	}
	
	
	return 0;
}

