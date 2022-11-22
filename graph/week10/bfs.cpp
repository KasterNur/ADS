#include <bits\stdc++.h>
using namespace std;

class Graph{
    int V;
    vector<list<int>> adjlist;

    public :
    Graph(int v);
    void addEdjustList(int s, int d);
    void GraphSBFS(int root);



};

Graph::Graph(int v)
{
    this->V= v;
    adjlist.resize(v);
}

void Graph::addEdjustList(int s, int d)
{
    adjlist[s].push_back(d);
  //  adjlist[d].push_back(s);
}

void Graph::GraphSBFS(int root)
{
    vector<bool> visted;
    visted.resize(V,false);
    list<int> que;//FIFO
    que.push_back(root);
    visted[root]=true;
    
    while (!que.empty())
    {
        int root = que.front();
        que.pop_front();
       cout << root << " ";
            for(auto adj:adjlist[root])
            {
                if(!visted[root]){
                    que.push_back(adj);
                    visted[adj]=true;
                }
             

           
            }
            
       
    }
    
}

int main()
{
	Graph g(4);
    	g.addEdjustList(1, 2);
	g.addEdjustList(1, 3);
	g.addEdjustList(2, 4);
	g.addEdjustList(2, 5);
	g.addEdjustList(3, 1);
	g.addEdjustList(3,4);
    g.addEdjustList(4,3);
    g.addEdjustList(4.,2);
    g.addEdjustList(4,5);
    g.addEdjustList(5,2);
    g.addEdjustList(5,2);


	cout << "Following is Breadth First Traversal "
		<< "(starting from vertex 2) \n";
	g.GraphSBFS(2);
    return 0;
}