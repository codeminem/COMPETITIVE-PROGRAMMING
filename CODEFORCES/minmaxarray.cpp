#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arra[n],arrb[n],arrdmin[n],arrdmax[n];
        for(int i=0;i<n;i++){
            cin>>arra[i];
        }
        for(int i=0;i<n;i++){
            cin>>arrb[i];
        }
        int d_min=INT_MAX;
        //Create an array 𝑑 consisting of 𝑛 arbitrary non-negative integers.
        //Set 𝑏𝑖=𝑎𝑖+𝑑𝑖 for each 𝑏𝑖.
        //Sort the array 𝑏 in non-descending order.
        //calculate what is the minimum and maximum possible value of 𝑑𝑖
            for(int i=0;i<n;i++){
                arrdmin[n-1-i]=arrb[n-1-i]-arra[n-1-i];
            }
            int d_max=INT_MIN;

            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++)
                {   if(arrb[j]==-1){
                        j++;
                        if(arra[i]-arrb[j]>d_max){
                            d_max=arra[i]-arrb[j];
                            d_max=max(d_max,arra[i]-arrb[j]);
                        }
                    }               
                    arrb[j]=-1;
                    arrdmax[i]=d_max;
                    
                }
            }
    
        for(int i=0;i<n;i++){
            cout<<arrdmin[i]<<' ';
        }
        cout<<endl;
        for(int i=0;i<n;i++){
            cout<<arrdmax[i]<<' ';
        }
    }
    
    return 0;
}