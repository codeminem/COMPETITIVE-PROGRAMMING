#include<iostream>
#include<string>

using namespace std;

int main(){
    //difference in ascii codes is 32 (ascii[lower]>ascii[upper])
    char A[]="WELCOME";
    int i;
    for(i=0;A[i]!='\0';i++){
        A[i]+=32;
    }
    cout<<(string)A;
}