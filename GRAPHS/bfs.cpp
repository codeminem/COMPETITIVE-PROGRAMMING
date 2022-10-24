//जय हनुमान जी!
#include<iostream>
#include<algorithm>
#include<queue>
#include<vector>
#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define vpii vector<pair<int, int>> 
#define rep(i, n) for(int i = 0; i < n; i++)
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define mc int t; cin>>t
#define MOD1 998244353
#define nline "\n" 
typedef long long ll;
typedef unsigned long long ull;
int gcd(int a,int b){if(b>a){return gcd(b,a);}if(b==0){return a;}return gcd(b,a%b);}
bool revsort(int a,int b){return a>b;}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
                                                DONT CHANGE ANYTHING ABOVE THIS LINE!
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
const int mod= 1e9+7;
//BFS for both disconnected and connected graphs
//V-vertcies.adj[]->adjacency list..bfs_travel->as name suggests
vector<int> bfsOfGraph(int V,vector<int> adj[]){
    vector<int> bfs_traversal;
    vector<bool>vis (V,false);
    for(int i=0;i<V;i++){
        if(!vis[i]){
            queue<int> q;
            vis[i]=true;
            q.push(i);
        
            //bfs starting from ith node
            while(!q.empty()){
                int g_node= q.front();
                q.pop();
                bfs_traversal.push_back(g_node);
                for(auto it:adj[g_node]){
                    if(!vis[it]){
                        vis[it]=true;
                        q.push(it);
                    }
                }


            }
        }

    }

}

signed main()
{ 
    fastio();

    return 0;
}
