#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    unordered_map<string,int>menu;
    menu["maggi"]=15;
    menu["colddrink"]=20;
    menu["dosa"]=99;
    menu["pizza"]=499;
    menu["indianplatter"]=399;
    //updation
    menu["dosa"]=(1+0.1)*menu["dosa"];
    //deletion
    menu.erase("dosa");
    string item;
    cin>>item;
    if(menu.count(item)==0){
        cout<<item<<"not available";
    }
    else{
        cout<<item<<"is available,and it's cost is "<<menu[item]<<endl;
    }
    //we can iterate over data items
    for(pair<string,int> item:menu){
        cout<<item.first<<"-"<<item.second<<endl;
        //we get output in unordered way thus it is called unordered_map
        //hashing with separate chaining
    }
    return 0;
}