#include <string>
using namespace std;
class connection
{
private:
    int ID_A, ID_B, weight;
public:
    connection(int ID_A, int ID_B, int weight);
    int getID_A();

    int getID_B();

    int getWeigth();
};


