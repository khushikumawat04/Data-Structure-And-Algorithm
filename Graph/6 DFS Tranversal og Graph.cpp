
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
  void DFS(int node, vector <bool> &visited , vector <int>AdjList[]){
        visited[node] = 1;
          cout<<node<<" ";
        for(int i=0;i<AdjList[node].size();i++){
            if(!visited[AdjList[node][i]]){
           DFS(AdjList[node][i],visited,AdjList);
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
    
    vector <bool> visited(vertex,0);
    DFS(0,visited,AdjList);
    
  

    return 0;
}


// Time Complexity - O(v+2E);
// Space Complexity - O(v);
