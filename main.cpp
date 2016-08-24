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


};

