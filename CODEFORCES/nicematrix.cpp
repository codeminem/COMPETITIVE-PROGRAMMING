#include<iostream>
using namespace std;
int main()
{
    int t,a,n,m;
    long long int x=0;
    cin>>t;    
    while(t--){
        cin>>n>>m;
        int *A[n];
        for(int i=0;i<n;i++){
            A[i]= new int[m];        //2d array created
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>A[i][j];              //elements added in the 2d array
            }
        }
       
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                long long int sum2=((A[n-1-i][j]+A[i][m-1-j]+A[i][j]+A[n-1-i][m-1-j])/4);
                if(sum2%2==0){
                    long long int sum=0;
                    sum+=A[n-1-i][j]-sum2;
                    if(sum<0){
                        sum=-sum;
                    }
                    x+=sum;
                    sum=0;
                    sum+=A[i][m-1-j]-sum2;
                    if(sum<0){
                        sum=-sum;
                    }
                    x+=sum;
                    sum=0;
                    sum+=A[i][j]-sum2;
                    if(sum<0){
                        sum=-sum;
                    }
                    x+=sum;
                    sum=0;
                    sum+=A[n-1-i][m-1-j]-sum2;
                    if(sum<0){
                        sum=-sum;
                    }
                    x+=sum;
                    sum=0;
                }
                else{
                
                    sum2+=0.5;
                    long long int sum=0;
                    sum+=A[n-1-i][j]-sum2;
                    if(sum<0){
                        sum=-sum;
                    }
                    x+=sum;
                    sum=0;
                    sum+=A[i][m-1-j]-sum2;
                    if(sum<0){
                        sum=-sum;
                    }
                    x+=sum;
                    sum=0;
                    sum+=A[i][j]-sum2;
                    if(sum<0){
                        sum=-sum;
                    }
                    x+=sum;
                    sum=0;
                    sum+=A[n-1-i][m-1-j]-sum2;
                    if(sum<0){
                        sum=-sum;
                    }
                    x+=sum;
                    sum=0;
                }
                 
                
            }
            
        }
     cout<<(x/4)<<endl;
     x=0;   
        
    }
    return 0;
}