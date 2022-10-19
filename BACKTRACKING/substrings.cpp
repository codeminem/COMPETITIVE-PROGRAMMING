#include<iostream>
#include<vector>
using namespace std;
void findSubsets(char *input,char *output,int i,int j){
    //base case
    if(input[i]=='\0'){
        output[j]='\0';
        if(output[0]=='\0'){
            cout<<"NULL";
        }
        cout<<output<<endl;
        return;
    }
    //rec case include
    output[j]=input[i];
    findSubsets(input,output,i+1,j+1);

    //rec case exclude
    findSubsets(input,output,i+1,j);
    
    return;
}
int main()
{
    char input[100];
    char output[100];
    cin>>input;
    findSubsets(input,output,0,0);
    return 0;

}