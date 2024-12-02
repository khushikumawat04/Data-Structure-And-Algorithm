
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
void BFSTransversal(int v, vector <int> AdjList[]){
    vector <bool> visited(v,0);
    queue <int> q;
    q.push(0);
    visited[0] = 1;
    int node ;
    while(!q.empty()){
        node = q.front();
        q.pop();
        cout<<node<<" ";
        for(int i=0;i<AdjList[node].size();i++){
            if(!visited[AdjList[node][i]]){
                visited[AdjList[node][i]] = 1;
                q.push(AdjList[node][i]);
            }
        }
    }
    
}

int main()
{
    
  
    int vertex,edge;
    cout<<"Enter no of vertex and edges";
    cin>>vertex>>edge;
     vector <int> AdjList[vertex];
    int u,v;
    
    for(int i=0;i<edge;i++){
        cout<<"Enter edges point";
        cin>>u>>v;
        AdjList[u].push_back(v);
        AdjList[v].push_back(u);
 
    }
    
    for(int i=0;i<vertex;i++){
        cout<<i<<"-->";
        for(int j=0;j<AdjList[i].size();j++){
            cout<<AdjList[i][j]<<" ";
        }
        cout<<endl;
    }
    
    BFSTransversal(vertex,AdjList);
    
  

    return 0;
}


// Time Complexity - O(v+2E);
// Space Complexity - O(v);
