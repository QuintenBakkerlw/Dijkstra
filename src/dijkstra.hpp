#include <iostream>
#include "shortestPath.hpp"


class DijkstraAlgo
{
private:
    int graph[4][4], src, end;
public:
    DijkstraAlgo(int graph[4][4],int src, int end);

    int shortestPath(int distance[4], bool visited[4]) // finding minimum distance
{
    int min=INT_MAX,ind;
              
    for(int k=0;k<4;k++) 
    {
        if(visited[k]==false && distance[k]<=min)      
        {
            min=distance[k];
            ind=k;
        }
    }
    return ind;
}
};