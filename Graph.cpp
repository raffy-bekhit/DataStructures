#include <iostream>

using namespace std;

class Graph
{
private:
    bool** adjMatrix ;
    int numberOfVertix;

public:
    //construct a graph by number of vertices
    Graph(int numberOfVertix)
    {
        this->numberOfVertix=numberOfVertix;
        adjMatrix= new bool*[numberOfVertix];

        for(int i=0; i<numberOfVertix; i++)
        {
            adjMatrix[i]=new bool[numberOfVertix];
        }
        //setting each element in adjacency matrix to false
        for(int i=0; i<numberOfVertix; i++)
        {
            for(int j=0; j<numberOfVertix; ++)
                adjMatrix[i][j]=false;
        }
    }
    //add new edges
    void addEdge(int node1, int node2 )
    {
        if(node1>=0&&node2>=0&&node1<numberOfVertix&&node2<numberOfVertix)
        {

            adjMatrix[node1][node2]=true;
            adjMatrix[node2][node1]=true;
        }
        else printf("One of the nodes doesn't exist.\n");
    }
//remove edge 
    void removeEdge(int node1,int node2){
     if(node1>=0&&node2>=0&&node1<numberOfVertix&&node2<numberOfVertix)
        {

            adjMatrix[node1][node2]=false;
            adjMatrix[node2][node1]=false;
        }
        else printf("One of the nodes doesn't exist.\n");
    }
};

