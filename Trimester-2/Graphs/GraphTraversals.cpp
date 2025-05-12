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

    dfs(graph,V,0,visited);
    
    return 0;
}