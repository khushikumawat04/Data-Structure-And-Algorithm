
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    
  
    int vertex,edge;
    cout<<"Enter no of vertex and edges";
    cin>>vertex>>edge;
     vector <vector<int>> AdjecentMatrix(vertex,vector<int>(vertex,0));
    int u,v,weight;
    
    for(int i=0;i<edge;i++){
        cout<<"Enter edges point";
        cin>>u>>v>>weight;
        AdjecentMatrix[u][v]  = weight;
 
    }
    
    for(int i=0;i<vertex;i++){
        for(int j=0;j<vertex;j++){
            cout<<AdjecentMatrix[i][j]<<" ";
        }
        cout<<endl;
    }
    
  

    return 0;
}

//Time complexity - O(v2)
//space complexity - O(v2)
