#include "connection.hpp"


connection::connection(int ID_A, int ID_B, int weight){
    this->ID_A = ID_A;
    this->ID_B = ID_B;
    this->weight = weight;
}


int connection::getID_A(){
    return ID_A;
}



int connection::getID_B(){
    return ID_B;
}

int connection::getWeigth(){
    return weight;
}