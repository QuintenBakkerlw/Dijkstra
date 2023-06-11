#include<iostream>
#include<stdio.h>
#include<list>
#include "dijkstra.hpp"
using namespace std;


void test(int size){
    int autorit[4][4]={
        {0, 1, 7, 1},
        {1, 0, 0, 2},
        {7, 0, 0, 3},
        {1, 2, 3, 0}};

    int autorit_2[4][4]={
        {0, 2, 1, 0},
        {2, 0, 1, 3},
        {1, 1, 0, 5},
        {0, 3, 5, 0}};
    
    
    int vlucht[4][4]={
        {0, 2, 1, 4},
        {2, 0, 1, 3},
        {1, 1, 0, 5},
        {4, 3, 5, 0}};

     int treinrit[4][4]={
        {0, 1, 6, 4},
        {1, 0, 4, 1},
        {6, 4, 0, 2},
        {4, 1, 2, 0}};

    DijkstraAlgo D1 = DijkstraAlgo();
    cout << "THIS IS A TEST \n\n";
    cout << "CORRECT ANSWER CDAA : answer == ";
    D1.Dijkstra(autorit,0,2,size);
    cout << "\nCORRECT ANSWER DBAA : answer == ";
    D1.Dijkstra(autorit_2,0,3,size);
    cout << "\nCORRECT ANSWER DAAA : answer == ";
    D1.Dijkstra(vlucht,0,3,size);
    cout << "\nCORRECT ANSWER DAAA : answer == ";
    D1.Dijkstra(treinrit,0,2,size);

    
    
    
  
}

int main()
{
    int sizeOfGraph = 4;
    bool Test = false; // if you want to run the test
    if (Test == true){
        test(sizeOfGraph);
    }

    int autorit[4][4]={ // adjacency matrix 
        {0, 1, 7, 1},
        {1, 0, 0, 2},
        {7, 0, 0, 3},
        {1, 2, 3, 0}};
    
    ////////////////////// IF YOU CHANGE THE GRAPH SIZE YOU NEED TO CHANGE IT IN dijkstra.HPP & dijkstra.CPP //////////////////////
    DijkstraAlgo D1 = DijkstraAlgo();
    // Dijkstra(graph, start point, end point, size of graph)
    D1.Dijkstra(autorit,0,2,sizeOfGraph);
              
}
         
   