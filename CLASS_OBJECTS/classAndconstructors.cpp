#include<iostream>
using namespace std;
class Rectangle
{
    private:
    int length;
    int breadth;
    public:
    Rectangle(){length=breadth=1;}//default constructor
    Rectangle(int l,int b);//parametrised constructor
};