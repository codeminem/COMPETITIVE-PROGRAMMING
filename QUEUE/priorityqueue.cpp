#include<iostream>
#include<queue>
using namespace std;
int main()
{
    int arr[]={10,15,20,13,6,90};
    int n=sizeof(arr)/sizeof(int);
    priority_queue<int>heap;
    for(int i=0;i<n;i++){
        heap.push(arr[i]);     //for max heap descending
    }
    while(!heap.empty()){
        cout<<heap.top()<<endl;
        heap.pop();
    }
    cout<<endl; 
    //for ascending order
    priority_queue<int,vector<int>,greater<int> >heap2;
    for(int i=0;i<n;i++){
        heap2.push(arr[i]);     
    }
    while(!heap2.empty()){
        cout<<heap2.top()<<endl;
        heap2.pop();
    }

    return 0;
}