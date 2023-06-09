#include <string>
#include <vector>
#include "connection.hpp"
using namespace std;
class node{
private:
    int lowestWeight, ID;
    string LastVisited;
    vector<connection> connections;
public:
    node(int ID, vector<connection> connections, int lowestWeight, string LastVisited);
    node();

    void setlowestWeight(int lowestWeight);
    int getlowestWeight();

    string setLastVisited(string LastVisited);
    string getLastVisited();

    int getID();
    void setConnections(vector<connection> connections);
    vector<connection> getConnections();

    void ShowConnetions();
};


