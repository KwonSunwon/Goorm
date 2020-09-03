#include <iostream>

enum Days{
    None = 0x00,
    Sunday = 1,
    Monday = 1 << 1,
    Tuesday = 1 << 2,
    Wednesday = 1 << 3,
    Thursday = 1 << 4,
    Friday = 1 << 5,
    Saturday = 1 << 6
};

const char *week[] = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};

void DayName(int d){
    std::cout << d << std::endl;
    for(int i = 0 ; i < 7 ; ++i){
        if( d & ( 1 << i)){
            std::cout << week[i] << std::endl;
        }
    }
}

int main(){
    Days meeting = Days ((int)Tuesday | (int)Monday);
    DayName(meeting);
}