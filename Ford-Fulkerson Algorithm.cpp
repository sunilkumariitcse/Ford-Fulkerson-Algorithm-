#include <iostream>
#include <limits.h>
#include <string.h>
#include <queue>
#include<vector>
 
using namespace std;
bool bfs(vector<vector<int> >&rGraph, int s, int t, int parent[] , int V)
{
    bool visited[V];
    memset(visited, 0, sizeof(visited));
    queue <int> q;
    q.push(s);
    visited[s] = true;
    parent[s] = -1;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
 
        for (int v=0; v<V; v++)
        {
            if (visited[v]==false && rGraph[u][v] > 0)
            {
                q.push(v);
                parent[v] = u;
                visited[v] = true;
            }
        }
    }
 
    return (visited[t] == true);
}
 

int fordFulkerson(vector<vector<int> >&graph, int s, int t , int V)
{
    int u, v;
    vector< vector<int> >rGraph;
     for(int i=0;i<V;i++)
    {
    		vector<int>vec;
    		for(int j=0;j<V;j++)
    		{
    			vec.push_back(0);
    		}		
    		rGraph.push_back(vec);
    		vec.clear();	
    }
    for (u = 0; u < V; u++)
        for (v = 0; v < V; v++)
             rGraph[u][v] = graph[u][v];
 
    int parent[V]; 
 
    int max_flow = 0; 
 
    
    while (bfs(rGraph, s, t, parent , V))
    {
        int path_flow = INT_MAX;
        vector<int>vec;
        for (v=t; v!=s; v=parent[v])
        {
            u = parent[v];
            path_flow = min(path_flow, rGraph[u][v]);
            vec.push_back(v);
        }
        vec.push_back(s);
        for(int k=vec.size()-1;k>=0;k--)
        	cout<<vec[k]+1<<"->";
        vec.clear();	
 		cout<<" : "<<path_flow<<endl;
        for (v=t; v != s; v=parent[v])
        {
            u = parent[v];
            rGraph[u][v] -= path_flow;
            rGraph[v][u] += path_flow;
        }
        max_flow += path_flow;
    }
 
    return max_flow;
}
 
int main()
{
    vector< vector<int> >graph;
    int N,E;
    cin>>N>>E;
   vector<int>vec;
    for(int i=0;i<N;i++)
    {
    		
    		for(int j=0;j<N;j++)
    		{
    			vec.push_back(0);
    		}		
    		graph.push_back(vec);
    		vec.clear();	
    }
    for(int i=0;i<E;i++)
    {
    		int x,y,w;
    		cin>>x>>y>>w;
    		graph[x-1][y-1]=w;
    }
    int src,dest;
    cin>>src>>dest;
    cout<< fordFulkerson(graph, src-1, dest-1 , N)<<endl;
 
    return 0;
}
