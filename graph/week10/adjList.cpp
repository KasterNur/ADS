#include <bits\stdc++.h>
using namespace std;

void addEdge(vector<int> adj[],int s, int d){
    adj[s].push_back(d);
     adj[d].push_back(s);
}

void printGraph(vector<int> adj[], int V)
{
    for (int  i = 0; i < V; i++)
    {
        cout<<"\n Vertix"<<i<<" :";
     
    for (int j=0;j<adj[i].size(); j++)
      cout << "-> " << adj[i][j];
    printf("\n");
    }
    
}

int main(){

   int V=5;
   vector<int> adj[V];
  // addEdge(adj, 0, 1);
  // addEdge(adj, 0, 2);
  // addEdge(adj, 0, 3);
  // addEdge(adj, 1, 2);
  addEdge(adj,1,4);
  addEdge(adj,1,2);
  addEdge(adj,2,3);
  addEdge(adj,3,5);
  addEdge(adj,4,5);
  
    printGraph(adj,V);
    return 0;
}