#include<iostream>
#include<string>
using namespace std;
int main(){

    char A[]="python";
    char B[7];
    int i,j;
    for(j=0;A[j]!='\0';j++){
        continue;
    }
    j=j-1;
    for(int i=0;i<j;i++,j--){
        int t=A[i];
        A[i]=A[j];
        A[j]=t;
    }
    cout<< (string) A;
}
