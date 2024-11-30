
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    
  
    int vertex,edge;
    cout<<"Enter no of vertex and edges";
    cin>>vertex>>edge;
     vector <pair<int, int>> AdjList[vertex];
    int u,v,weight;
    
    for(int i=0;i<edge;i++){
        cout<<"Enter edges point";
        cin>>u>>v>>weight;
        AdjList[u].push_back(make_pair(v,weight));

 
    }
    
    for(int i=0;i<vertex;i++){
        cout<<i<<"-->";
        for(int j=0;j<AdjList[i].size();j++){
            cout<<"("<<AdjList[i][j].first<<" "<<AdjList[i][j].second<<")";
        }
        cout<<endl;
    }
    
  

    return 0;
}
