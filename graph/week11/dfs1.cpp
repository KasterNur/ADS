//Dfs
#include <bits\stdc++.h>
using namespace std;

class Graph{
      int V;
      vector<list<int> > adj;
      vector<bool> visted;
   public :
        Graph(int v);
        void addEdge(int s, int d);
        void DFS(int root);

};

int main(){
    // Graph g(6);
    // g.addEdge(5, 2);
    // g.addEdge(5, 0);
    // g.addEdge(4, 0);
    // g.addEdge(4, 1);
    // g.addEdge(2, 3);
    // g.addEdge(3, 1);

 //     Graph g(4);
//   g.addEdge(0, 1);
  
//   g.addEdge(1, 2);
//   g.addEdge(2, 0);
//   g.addEdge(2, 3);
//   g.addEdge(3, 3);
Graph g(7);
   g.addEdge(1,2);
   g.addEdge(1,3);
   g.addEdge(2,5);
   g.addEdge(3,4);
   g.addEdge(5,7);
   g.addEdge(2,4);
   g.addEdge(4,6);
   g.addEdge(6,7);

    g.DFS(1);
    return 0;
}

Graph::Graph(int v)
{
    this->V= v;
    adj.resize(v);
    visted.resize(v,false);
}

void Graph::addEdge(int s, int d){
   adj[s].push_back(d);
//    adj[d].push_front(s);
}

void Graph::DFS(int root)
{
   // vector<bool> visted;
    
    visted[root]=true;
    list<int>::iterator iter;
    cout<< root << " " ;
    for(iter=adj[root].begin();iter!=adj[root].end();iter++)
    {
        if(!visted[*iter])
        {
           
           DFS(*iter);
           //loop 
        //    for ()
        
        }
    }
    // if(!visted[root])
    // {
    //     int next =adj[root].front();
    //     adj[root].pop_front();
    //     DFS(next);
    //      visted[root]=true;       
    // }
    
}