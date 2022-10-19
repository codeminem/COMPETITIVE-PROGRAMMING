#include<iostream>
using namespace std;
int main()
{
    int n,x,y,z,sum1(0),sum2(0),sum3(0);
    cin>>n;
    int arrx[n];
    int arry[n];
    int arrz[n];
    for(int i=0;i<n;i++){
        cin>>arrx[i]>>arry[i]>>arrz[i];       
    }
    
    for (int j=0;j<n;j++){
        sum1+=arrx[j];
        sum2+=arry[j];
        sum3+=arrz[j];
    }
    
    if(sum1==0 && sum2==0 && sum3==0){
        cout<<"YES";
    }
    else cout<<"NO";
    return 0;
}