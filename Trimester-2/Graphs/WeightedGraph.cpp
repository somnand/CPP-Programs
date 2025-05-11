#include<bits/stdc++.h>
using namespace std;


int mstUsingPrimsAlgo(int V,vector<pair<int,int>> graph[])
{
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
     
    vector<int> visited(V,0);
    int mst=0;
    
    pq.push({0,0});
     
    while(!pq.empty())
    {
        pair<int,int> temp=pq.top();
        pq.pop();
        
        int wt=temp.first;
        int node=temp.second;
        
        if(visited[node]==1) continue;//Skip all the remaining to avoid cycle

        visited[node]=1;
        mst+=wt;
        
        for(int i=0;i<graph[node].size();i++)//Exploring all neighbors of Node
        {
            int edgewt=graph[node][i].first;
            int adjnode=graph[node][i].second;
            
            if(!visited[adjnode])
            {
                pq.push({edgewt,adjnode});
            }
        }
    }
    return mst;
}


int main()
{
    int V=5;
    vector<int> graph[V];//This is a Non-Weighted Graph
    vector<pair<int,int>> wgraph[V];//This is a Weighted Graph

    wgraph[0].push_back({2,1});//Convention pair<weight,dest>
    wgraph[0].push_back({6,3});
    wgraph[1].push_back({2,0});
    wgraph[1].push_back({3,2});
    wgraph[1].push_back({5,3});
    wgraph[1].push_back({8,4});
    wgraph[2].push_back({3,1});
    wgraph[2].push_back({7,4});
    wgraph[3].push_back({6,0});
    wgraph[3].push_back({5,1});
    wgraph[4].push_back({8,1});
    wgraph[4].push_back({7,2});

    cout<<"MST : "<<mstUsingPrimsAlgo(V,wgraph)<<endl;

    return 0;
}
