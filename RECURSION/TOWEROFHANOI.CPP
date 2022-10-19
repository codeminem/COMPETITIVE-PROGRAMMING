#include<iostream>
using namespace std;
void TOH(int n , char from,char helper,char to){
    if(n==0) return;
    TOH(n-1,from,to,helper);
    //reached here
    //placed rods on b using c largest still remaining on a
    cout<<from<<"->"<<to<<endl;
    TOH(n-1,helper,from,to);
}
int main()
{
    int n;
    cin>>n;
    TOH(n,'A','B','C');
    return 0;
}