#include<iostream>
using namespace std;
int fun(int index,int n,bool previous_one){
    int ans=0;
    //base case
    if(index== (n+1)) return 1;
   
    //place 0
    ans+=fun(index+1,n,false);

    //or place 1
    if(previous_one==false){
        ans+=fun(index+1,n,true);
    }

    return ans;
}


int main()
{
    cout<<fun(1,5,false);
    return 0;
}