<<<<<<< HEAD
#include <bits\stdc++.h>
using namespace std;
class Graph{
    int V;
    list<int> *adj;
    void topologicalUnit(int v,bool visted[],stack<int> &Stack);
    public :
      Graph(int V);
      void addEdge(int s, int d);
      void topologicalsort();
      
};

int main(){
    int nVertex, sorce, des;
    // cin>>nVertex;
    // Graph g(nVertex);
    // for (int i = 0; i < nVertex; i++)
    // {
    //     cin>>sorce>>des;
    //     g.addEdge(sorce,des);
    // }
    cout<<"test1"<<endl;
    Graph g(6);
    g.addEdge(5, 2);
    g.addEdge(5, 0);
    g.addEdge(4, 0);
    g.addEdge(4, 1);
    g.addEdge(2, 3);
    g.addEdge(3, 1);
    g.topologicalsort();

    return 0;
}

void Graph::topologicalsort(){
    cout<<" sort start..."<<endl;
    stack<int> Stack;
    bool *visted = new bool[V];

    for (int i = 0; i < this->V; i++)
    {
        visted[i]=false;
    }

    for (int i = 0; i < V; i++)
    {
         if(!visted[i])
            topologicalUnit(i,visted,Stack);
    }
    cout<<" after get result"<<endl;
while (Stack.empty()!=true)
    {
         cout<< Stack.top()<<", ";
         Stack.pop();
    }
    
      delete [] visted;
}

Graph::Graph(int v){
    this->V = v;
    adj = new list<int>[v];
}

void Graph::addEdge(int s, int d){
    adj[s].push_front(d);
}

void Graph::topologicalUnit(int v,bool visted[],stack<int> &Stack)
{
    
    visted[v]=true;
    list<int>::iterator it;
    for(it = adj[v].begin(); it != adj[v].end(); it++)
    {
        if(visted[*it]==false)
            topologicalUnit(*it,visted,Stack);
    }

    Stack.push(v);
=======
#include <bits\stdc++.h>
using namespace std;
class Graph{
    int V;
    list<int> *adj;
    void topologicalUnit(int v,bool visted[],stack<int> &Stack);
    public :
      Graph(int V);
      void addEdge(int s, int d);
      void topologicalsort();
      
};

int main(){
    int nVertex, sorce, des;
    // cin>>nVertex;
    // Graph g(nVertex);
    // for (int i = 0; i < nVertex; i++)
    // {
    //     cin>>sorce>>des;
    //     g.addEdge(sorce,des);
    // }
          Graph g(4);
   g.addEdge(1,2);
   g.addEdge(1,3);
   g.addEdge(2,5);
   g.addEdge(3,4);
   g.addEdge(5,7);
   g.addEdge(2,4);
   g.addEdge(4,6);
   g.addEdge(6,7);
    g.topologicalsort();

    return 0;
}

void Graph::topologicalsort(){
    stack<int> Stack;
    bool *visted = new bool[V];

    for (int i = 0; i < this->V; i++)
    {
        visted[i]=false;
    }

    for (int i = 0; i < V; i++)
    {
         if(!visted[i])
            topologicalUnit(i,visted,Stack);
    }
    
    while (Stack.empty()==false)
    {
         cout<< Stack.top()<<", ";
         Stack.pop();
    }
    
    
}

Graph::Graph(int v){
    this->V = v;
    adj = new list<int> [v];
}

void Graph::addEdge(int s, int d){
    adj[s].push_back(d);
}

void Graph::topologicalUnit(int v,bool visted[],stack<int> &Stack)
{
    visted[v]=true;
    list<int>::iterator it;
    for(it = adj[v].begin(); it != adj[v].end(); it++)
    {
        if(visted[*it]==false)
            topologicalUnit(*it,visted,Stack);
    }

    Stack.push(v);
>>>>>>> f9327c0fd5a558a85c4f3a034c8083102b8ea2bb
}