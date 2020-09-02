#include "door.hpp"

int main(){
    mynamespace::Door d;

    d.Open();
    d.ShowState();

    d.Close();
    d.ShowState();

    return 0;
}