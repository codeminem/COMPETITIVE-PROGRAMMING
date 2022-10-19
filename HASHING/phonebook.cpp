#include<iostream>
#include<map>
#include<list>
#include<string>
using namespace std;
int main()
{
    map<string,list<string> >phonebook;
    phonebook["Prateek"].push_back("1111111111");
    phonebook["Prateek"].push_back("1111111112");
    phonebook["Prateek"].push_back("1111111113"); 
    phonebook["Pari"].push_back("1111111114");
    phonebook["Pari"].push_back("1111111115");
    phonebook["Pari"].push_back("1111111116");       
    return 0;
}