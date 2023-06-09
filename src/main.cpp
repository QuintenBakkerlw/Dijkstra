#include<iostream>
#include<stdio.h>
#include<list>
#include "dijkstra.hpp"
using namespace std;

int shortestPath(int distance[], bool visited[]) // finding minimum distance
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

void DijkstraAlgo(int graph[4][4],int src, int end) // adjacency matrix 
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



}

int main()
{
    int graphCar[4][4]={
        {0, 1, 7, 1},
        {1, 0, 0, 2},
        {7, 0, 0, 3},
        {1, 2, 3, 0}};
    
    int graphPlane[4][4]={
        {0, 1, 7, 1},
        {1, 0, 0, 2},
        {7, 0, 0, 3},
        {1, 2, 3, 0}};

     int graphTrain[4][4]={
        {0, 1, 7, 1},
        {1, 0, 0, 2},
        {7, 0, 0, 3},
        {1, 2, 3, 0}};
    DijkstraAlgo(graphCar,0,2); 
    
    return 0;           
}
         
   