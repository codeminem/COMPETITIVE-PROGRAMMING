//data-type which has data members and member function
/* class Classname ||keyword user-defined name
  {
    Access specifier: ||(private,public,protected)
    Data members;     ||(variables to be used)
    Member Functions()
  };  
 // access members using (.)dot function

*/ 

#include <iostream>
using namespace std;
class Geeks
{
    //Specifier
    public:
    string geekname; //data member
    void printname() // member function()
    {
        cout<<geekname;
    }
};
int main(){
    Geeks obj1; //declaration of object of class geeks
    obj1.geekname="Abhi"; //Accessing data member
    obj1.printname(); //accessing member function
    return 0;

}