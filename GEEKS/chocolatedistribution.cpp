#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
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
     counter++;   
    }
    int m;
    cin>>m;
    int sum=0;
    sum= arr[m-1]-arr[0];
    cout<<"Minimum difference is"<<sum;



   
    return 0;
}