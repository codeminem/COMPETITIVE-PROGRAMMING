#include<iostream>
using namespace std;
int  fact(int n){
    //base case
    if(n==0){
        return 1;
    }
    //rec case
    int ans=fact(n-1)*n;
    return ans;
}
int main()
{
    int n;
    cin>>n;
    cout<<fact(n)<<endl;
    return 0;
}