#include<bits/stdc++.h>
using namespace std;
/**
 * DFS traversal on the Graph Rescursively
 * Inputs : Graph, Current/Source node/visited array
 */
void dfs(vector<int> graph[],int verticeSize,int currNode,bool visited[])
{
    if(visited[currNode])
        return;

    cout<<currNode<<" ";
    visited[currNode]=true;
    //Fetching neighbours of currNode
    for(int i=0;i<graph[currNode].size();i++)
    {
        int neighbor = graph[currNode][i];
        if(!visited[neighbor])
            dfs(graph,verticeSize,neighbor,visited);
    }    
}

/**
 * BFS traversal on the Graph Iteratively
 * Inputs : Graph, Current/Source node/visited array
 */
void bfs(vector<int> graph[],int verticeSize,int source)
{
    queue<int> bfsQ;
    bool visited[verticeSize]={false};
    bfsQ.push(source);
    visited[source]=true;    

    while(!bfsQ.empty())
    {
        int curr=bfsQ.front();
        bfsQ.pop();
        cout<<curr<<" ";
        //visited[curr]=true;//Later analyse this why this is wrong.

        for(auto neighbor : graph[curr])
        {
            if(!visited[neighbor])
            {
                bfsQ.push(neighbor);
                visited[neighbor]=true;
            }
        }
    }
    cout<<endl;
}

int main()
{
    int V=5;
    vector<int> graph[V];//This is a Non-Weighted Graph

    graph[0].push_back(1);
    graph[0].push_back(2);
    graph[1].push_back(0);
    graph[1].push_back(2);
    graph[1].push_back(3);
    graph[2].push_back(0);
    graph[2].push_back(1);
    graph[2].push_back(4);
    graph[3].push_back(1);
    graph[4].push_back(2);

    bool visited[V]={false};
    //cout<<endl;//To help observe output in debug mode(Uncomment)


    cout<<"DFS Traversal "<<endl;
    dfs(graph,V,0,visited);
    cout<<endl;
    cout<<"BFS Traversal "<<endl;
    bfs(graph,V,0);
    cout<<endl;
    
    return 0;
}