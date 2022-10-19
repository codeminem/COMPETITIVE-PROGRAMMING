#include<iostream>
#include<queue>
using namespace std;
//works on fifo
//deletion is done from front end
//front pointer for deletion
//rear pointer for insertion
//enqueue(x)-->insertion at the last element
//dequeue -->removal of element
//implement using array,linked list

int main()
{
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}