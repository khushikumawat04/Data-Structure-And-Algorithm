
#include <iostream>
#include <vector>
using namespace std;

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
    
  

    return 0;
}
