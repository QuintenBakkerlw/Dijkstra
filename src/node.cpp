#include "node.hpp"
#include <iostream>
using namespace std;

node::node(int ID, vector<connection> connections, int lowestWeight, string LastVisited){
    this->ID = ID;
    this->connections = connections;
    this->LastVisited = LastVisited;
    this->lowestWeight = lowestWeight;
}
node::node(){
    
}

void node::setlowestWeight(int lowestWeight){
    this->lowestWeight = lowestWeight;

}
int node::getlowestWeight(){
    return lowestWeight;
}

string node::setLastVisited(string LastVisited){
    this->LastVisited = LastVisited;
}

string node::getLastVisited(){
    return LastVisited;
}

int node::getID(){
    return ID;
}

void node::setConnections(vector<connection> connections){
    this->connections = connections;
}
vector<connection> node::getConnections(){
    return connections;
}


void node::ShowConnetions(){
    for (auto & v : connections){
        cout << v.getID_A() << "-" << v.getID_B() << "\n";
    }
    return;
}
