//constructors are special class members called by compiler every time 
//an object of that class is initiated
#include <iostream>
using namespace std;
class Geeks
{
    public:
    int id;
    //Default constructor
    Geeks()
    {
        cout<<"Default constructor called"<<endl;
        id=-1;
    }

    //Parameterised constructor
    Geeks(int x)
    {
        cout<<"Parameterised COnstructor called"<<endl;
        id=x;
        
    }

};
int main(){
    //obj1 willl call Default Constructor
    Geeks obj1;
    cout<<"Geek id is:"<<obj1.id<<endl;
    
    //obj2 will call parametrised constructor
    Geeks obj2(21);
    cout<<"Geek id is:"<<obj2.id<<endl;
    return 0;
}