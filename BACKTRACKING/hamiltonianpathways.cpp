#include<iostream>
#include<vector>
using namespace std;
const int N = 1e5;
vector<int> gr[N];
int n,m;
bool hamiltonian_path = false;
int vis[N];


void paths(int cur,int cnt){

    if(cnt==n){
        hamiltonian_path=true;
        return;
    }

    vis[cur]=1;
    for(auto x: gr[cur]){
        if(!vis[x]){
            paths(x,cnt+1);
        }
    } 
    vis[cur]=0;
    return;


}


int main()
{
    cin>>n>>m; //number of vertex and number of edges
    for(int i=0;i<m;i++){
        int x,y; 
        cin>>x>>y; //x and y are adjacent vertices pushed up into the adjacency array
        gr[x].push_back(y);
        gr[y].push_back(x);
    }
   for(int i=0;i<n;i++){
        paths(i,1);
   }
   cout<<hamiltonian_path;
    return 0;
}