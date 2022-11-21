#include <bits\stdc++.h>
using namespace std;

class Graph{
    int V;
    list<int> *adj;
    // vector<list<int> > adj;
    vector<bool> visited;

public :
    Graph(int v);
    void addEdge(int s, int d);
    void DFS(int startVec);
};

int main(){
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

Graph::Graph(int v){
    this->V = v;
    adj = new list<int> [v];
    visited.resize(v,false);
}

void Graph::addEdge(int s, int d){
    this->adj[s].push_front(d);
    // this->adj[d].push_front(s);
}

void Graph::DFS(int startVer)
{
    visited[startVer]=true;
    list<int>::iterator it;
    cout<< startVer << " , ";
    for (it = adj[startVer].begin(); it!=adj[startVer].end(); it++)
    {
        if(visited[*it]==false)
            DFS(*it);
    }
    
    
}

