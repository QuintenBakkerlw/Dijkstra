#include <iostream>
#include <string>
using namespace std;


class DijkstraAlgo
{
private:
    int graph[4][4], src, end, size;
public:

    DijkstraAlgo();
    void Dijkstra(int graph[4][4], int src, int end, int size);

    int shortestPath(int distance[4], bool visited[4], int size) // finding minimum distance
    {
        int min=INT_MAX,mindistance;
        
        for(int k=0;k<size;k++) // loop through distance to find the shortest of a no visited node
        {
            if(visited[k]==false && distance[k]<=min)      
            {
                min=distance[k];
                mindistance=k;
            }
        }
        return mindistance;
    }

};