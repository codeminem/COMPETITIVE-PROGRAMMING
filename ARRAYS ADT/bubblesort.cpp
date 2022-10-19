//adjacent swap
//in first round it may be possible that only last element gets sorted
//keep on going bro's
//at max n-1 iterations will be used.


#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){    //array input
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
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;
}