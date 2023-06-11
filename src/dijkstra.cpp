#include <iostream>
using namespace std;
#include "dijkstra.hpp"
#include <string>


DijkstraAlgo::DijkstraAlgo(){
}

void DijkstraAlgo::Dijkstra(int graph[4][4], int src, int end, int size) 
{
    int distance[size]; // array to calculate the minimum distance for each node                             
    bool visited[size];// boolean array to mark visited and unvisited for each node
    int lastvisited[size];// array to see last visited of a node
    int route[size];// route in numbers
    string routestring[size]; // route displayed in letters
    string alphabet = "ABCDEFGHIKLMNOPQRSTVXYZ";
    
    for(int k = 0; k<size; k++)// filling in array to standard value
    {
        distance[k] = INT_MAX;
        visited[k] = false;    
    }
    
    distance[src] = 0;   // Source vertex distance is set 0               
    lastvisited[0] = 0; // lastvisited of source is set 0
    route[0] = end; // route begin set to end
    
    for(int k = 0; k<size; k++){
        
        int m=shortestPath(distance,visited, size); // find shortest path avaliable
        visited[m]=true;
        
        for(int k =0; k<size; k++)                  
        {
            // updating the distance of neighbouring vertex
            if(!visited[k] && graph[m][k] && distance[m]!=INT_MAX && distance[m]+graph[m][k]<distance[k]){
                distance[k]=distance[m]+graph[m][k];
                lastvisited[k] = m;
               
            }   
        }

    }   

    // values to calculate correct path
    int node;
    int counter = 2;
    route[1] = lastvisited[end];
    node = lastvisited[end];
    
    for(int k = 0; k<size; k++)                      
    { 
        
        for (int i= 0; i<size;i++){ // checks the place of lastvisted for each node to make a path
            if(i == node){
                route[counter] = lastvisited[i];
                node = lastvisited[i];
                counter += 1;
                };
            
        };
        
    };

};




