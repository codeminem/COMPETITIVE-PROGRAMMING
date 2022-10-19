#include<iostream>
using namespace std;
int main()
{
    int t,moves;
    int n,m,sum(0);
   
    cin>>t;
    while(t--){
        cin>>n>>m;
        int arr[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
            }
        }
        for(int dis=0;dis<(n+m-2);dis++){
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    if((i+j)==dis){
                        if(arr[i][j]!=arr[n-i][m-j]){
                            sum+=1;
                        }
                    }
                }
            }
        }            
     cout<<sum;
    }
    return 0;
}