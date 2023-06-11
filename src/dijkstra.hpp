#include <iostream>
#include "shortestPath.hpp"
#include <string>
using namespace std;


class DijkstraAlgo
{
private:
    int graph[4][4], src, end, size;
public:
    DijkstraAlgo(int graph[4][4],int src, int end, int size);

    int shortestPath(int distance[4], bool visited[4], int size) // finding minimum distance
    {
        int min=INT_MAX,ind;
                
        for(int k=0;k<size;k++) 
        {
            if(visited[k]==false && distance[k]<=min)      
            {
                min=distance[k];
                ind=k;
            }
        }
        return ind;
    }

    // int translator(int lastvisited[4],int end, int graphsize){
        
    //     int route[graphsize];
    //     string routestring[graphsize];
    //     string alphabet="ABCDEFGHIKLMNOPQRSTVXYZ";
        
    //     bool x = false;
    //     int node;
    //     int counter = 2;

        
    //     route[0] = end;
    //     route[1] = lastvisited[end];
    //     node = lastvisited[end];
        
        
    //     for(int k = 0; k<graphsize; k++)                      
    //     { 
    //         for (int i= 0; i<graphsize;i++){
    //             // if(x == false){
    //             //     x = true;
    //             //     route[counter] = lastvisited[end];
    //             //     z = lastvisited[end];
    //             //     counter += 1;
    //             // };
    //             if(i == node){
    //                 route[counter] = lastvisited[i];
    //                 node = lastvisited[i];
    //                 counter += 1;
    //                 };
    //         };
            
    //     };
        
    //     for(int i=0; i<graphsize; i++){
    //         cout << alphabet[1];
    //         // routestring[i] = alphabet[route[i]];
    //         // cout << routestring[i];
            
    //     };
        
    //     return 0;
    // }
};