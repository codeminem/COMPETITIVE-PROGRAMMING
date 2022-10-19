#include<iostream>
using namespace std;
void reverseArray(int arr[],int start,int end){
    if(start>=end){
        return;
    }
    int temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    reverseArray(arr,start+1,end-1);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int count=0;
        int x=0;
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                count++;
            }
        }
        if(count=n-i+1){
            x+=(i+1);
            reverseArray(arr,0,n-1);
        }
    }
    return 0;
}