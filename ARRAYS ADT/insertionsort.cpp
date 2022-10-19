#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"everything fine";
    for (int i=1;i<n;i++)
    {
        int ce=i-1;
        while(ce>0){
            if (arr[i]<arr[ce]){
                arr[ce+1]=arr[ce];
                ce--;                // ce would get -- one additional time
            }
         arr[ce+1]=arr[i];    // use +1 with ce

        }
    }    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}