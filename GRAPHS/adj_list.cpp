#include<iostream>
#include<list>
using namespace std;
class Graph{
    int V;   //no. of vertices
    list<int> *l;  //created a pointer to array of list
    //we are doing dynamic memory allocation as size of array is unknown
 public:
    Graph(int v){
        V=v;
        l=new list<int>[V];//array of linked list contains V link list
    }
    void addEdge(int i,int j,bool undir=true){
        l[i].push_back(j);
        if(undir){
            l[j].push_back(i);
        }
    }
    void printAdjList(){
        //iterate over all rws
        for(int i=0;i<V;i++){
            cout<<i<<"-->";
            for(auto node:l[i]){
                cout<<node;
            }
            cout<<endl;
        }
    }
};
int main(){
    Graph g(6);
    g.addEdge(0,1);
    g.addEdge(0,4);
    g.addEdge(2,1);
    g.addEdge(3,4);
    g.addEdge(4,5);
    g.addEdge(2,3);
    g.addEdge(3,5);
    g.printAdjList();

}