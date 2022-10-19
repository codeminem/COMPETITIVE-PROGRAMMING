#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int sum_empty=0;
    
    
    while(t--){
        int n,k;
        cin>>n>>k;  // no. of barrels and no. of pourings
        int arr[n];
        for(int i=0;i<n;i++){                                //array formation
            cin>>arr[i];  // input ai's
        }
        
        int counter=1;
        while(counter<n){
            for(int i=0;i<n-counter;i++)
            {
                if (arr[i]>arr[i+1]){
                    int temp=arr[i];
                    arr[i]=arr[i+1];
                    arr[1+i]=temp;                          
                }
            }
         counter++;     //my array is now sorted
        }
        
       for(int i=1;i<=k;i++){
         arr[n]=arr[n]+arr[n-i];
         if(arr[n-i]==0){
             break;
            }
        }
        cout<<arr[n]<<endl;
    }                               //😎
    return 0;
}