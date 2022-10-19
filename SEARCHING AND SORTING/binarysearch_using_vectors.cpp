#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int>v, int to_find)
{
    int lo=0,hi=v.size()-1;
    int mid;
    while(hi-lo>1){
        int mid=(hi+lo)/2;
        if(v[mid]<to_find){
            lo=mid+1;  
        }
        else{
            hi=mid;
        }
    }
    if(v[hi]==to_find){
        cout<<hi;
    }
    else if(v[lo]==to_find){
        cout<<lo;
    }
    else{
        cout<<'not found';
    }
}
int main()
{
    vector<int> v = { 1, 3, 4, 5, 6 };
    int To_Find = 1;
    binarySearch(v, To_Find);
    To_Find = 6;
    binarySearch(v, To_Find);
    To_Find = 10;
    binarySearch(v, To_Find);
    return 0;
}