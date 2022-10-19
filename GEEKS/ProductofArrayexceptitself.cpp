#include<iostream>
using namespace std;
int main()
{
    int n;
    
    cin>>n;
    int arr1[n];
    int arr2[n];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int j=0;j<n;j++){
        int product=1;
        for(int i=0;i<n;i++){
            if(i!=j){
            product*=arr1[i];
            }
        }
        arr2[j]=product;         
    }
    for(int i=0;i<n;i++){
        cout<<arr2[i];
    }


    return 0;
}