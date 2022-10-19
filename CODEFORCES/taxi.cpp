#include<iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n,tn(0),sum1(0),sum2(0),sum3(0),sum4(0);
    cin>>n;
    int arr[n];
    for(int  i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        if(arr[i]==4){
            sum4+=1;
        }
        if(arr[i]==1){
            sum1+=1;
        }
        if(arr[i]==2){
            sum2+=1;
        }
        if(arr[i]==3){
            sum3+=1;
        }
    }
    if(sum3>=sum1){
        tn+=sum3;
        if(sum2%2!=0){
            tn+=1;
        }
    }
    else{
        tn+=sum3;
        if((sum1-sum3)%4==0 && sum2%2==0){
            tn+=(sum1-sum3)/4;
        }
        else if((sum1-sum3)%4==0 && sum2%2 !=0){
            tn+=1+(sum1-sum3)/4;
        }
        else if((sum1-sum3)%4 !=0 && sum2%2 !=0){
            int x=(sum1-sum3);
            int y=(sum1-sum3)%4;
            if(y>2){
                tn+=1;
                x-=2;
                tn+=(1+x/4);
            }
            if(y==2){
                tn+=1;
                x-=2;
                tn+=(x/4);
            }
            else if(y<2){
                tn+=1;
                tn+=x/4;
            }
           
        }
        else if((sum1-sum3)%4 !=0 && sum2%2 ==0){
            tn+=(1+((sum1-sum3)/4));

        }
    }
    tn+=(sum4+(sum2/2));
    cout<<tn;
    return 0;
}