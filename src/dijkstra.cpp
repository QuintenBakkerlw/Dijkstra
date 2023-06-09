#include <iostream>
using namespace std;
#include "dijkstra.hpp"




DijkstraAlgo::DijkstraAlgo(int graph[4][4],int src, int end) // adjacency matrix 
{


   
    int distance[4]; // // array to calculate the minimum distance for each node                             
    bool visited[4];// boolean array to mark visited and unvisited for each node
    int lastvisited[4];// array to see last visited of a node
    int route[4];// route in numbers
    string routestring[4]; // route displayed in alphabet
    string alphabet = "ABCDEFGHIKLMNOPQRSTVXYZ";
    
    
    for(int k = 0; k<4; k++)// filling in array to standard
    {
        distance[k] = INT_MAX;
        visited[k] = false;    
    }
    
    distance[src] = 0;   // Source vertex distance is set 0               
    lastvisited[0] = 0;
    route[0] = end;

    for(int k = 0; k<4; k++)                           
    {
        int m=shortestPath(distance,visited); 
        visited[m]=true;
        for(int k = 0; k<4; k++)                  
        {
            // updating the distance of neighbouring vertex
            if(!visited[k] && graph[m][k] && distance[m]!=INT_MAX && distance[m]+graph[m][k]<distance[k]){
                distance[k]=distance[m]+graph[m][k];
                lastvisited[k] = m;
            }
                


                
        }
    }
    bool x = false;
    int node;
    int counter = 2;

    route[1] = lastvisited[end];
    node = lastvisited[end];

    for(int k = 0; k<4; k++)                      
    { 
        for (int i= 0; i<4;i++){
            // if(x == false){
            //     x = true;
            //     route[counter] = lastvisited[end];
            //     z = lastvisited[end];
            //     counter += 1;
            // };
            if(i == node){
                route[counter] = lastvisited[i];
                node = lastvisited[i];
                counter += 1;
                };
        };
        
    };

    for(int i =0; i<4; i++){
        // cout << route[i];
        routestring[i] = alphabet[route[i]];
        cout << routestring[i];
    };



};