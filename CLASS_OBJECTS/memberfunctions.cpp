//to decare function outside the class definition we have to use scope resolution::
#include<iostream>
using namespace std;
class Geeks
{
    public:
    string geekname; //data member
    int id;//member function()
    void printname(); //not inside class deifiniton
    void printid()  // defined inside class definition
    {
        cout<<id;
    }
};
//now to define the function outside the class we will use scope resolution operstor
void Geeks::printname()
{
    cout<<geekname;
}

int main(){
    Geeks obj1;
    obj1.geekname= "xyz";
    obj1.id=15;
    obj1.printname();
    cout<<endl;
    obj1.printid();
    return 0;
}