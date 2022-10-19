#include<iostream>
using namespace std;
int main()
{
    int n,count1(0),count2(0);
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            count1++;
        }
        else{
            count2++;
        }
    }
    if(count1>count2){
        for(int i=0;i<n;i++){
            if(arr[i]%2!=0){
                cout<<i+1;
            }
        }
    }
    else{
        for(int i=0;i<n;i++){
            if(arr[i]%2==0){
                cout<<i+1;
            }
        }
    }
    return 0;
}