#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n; 
        int arr[n];
        for(int i=0;i<n;i++){
            arr[i]=i+1;
        }
       
        cout<<"2"<<endl;
        while(n>0){
            cout<<arr[n-3]<<arr[n-1]<<endl;      
            arr[n-3]=(arr[n-3]+arr[n-1])/2;
            arr[n-1]=0;
            n--;
            
                
            if(arr[n-1]!=0 &&n>1){
                cout<<arr[n-1]<<arr[n-2]<<endl;             
                arr[n-2]=(arr[n-2]+arr[n-1])/2;
                arr[n-1]=0;
                n--;
            }
                    
                
            
         
        }
     
    }
    return 0;
 
}
