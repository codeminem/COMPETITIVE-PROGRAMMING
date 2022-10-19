#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int *A[n];
    for(int i=0;i<n;i++){
        A[i]= new int[n];        //2d array created
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>A[i][j];
        }
    }
    for(int i=n;i>0;i--){
        cout<<A[n-i][n-i];
    }


    return 0;
}