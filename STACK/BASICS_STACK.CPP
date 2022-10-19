#include<stack>
#include<iostream>
using namespace std;
int main()
{
    stack<string> books;
    books.push("C++");
    books.push("java");
    while(!books.empty()){
        cout<<books.top();
        books.pop();
    }
    return 0;
}