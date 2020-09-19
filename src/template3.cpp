#include <iostream>

enum Days { Sunday = 0 , Monday = Sunday +1 , Tuesday,
            Wednesday , Thursday, Friday, Saturday = Sunday + 6};

const char *week[] = { "Sunday","Monday","Tuesday",
                    "Wednesday","Thursday","Friday","Saturday"};

template<Days D>
class Select{
public:
    const char * DayName(){
        return week[D];
    }
    int DayNumber(){
        return D+1;
    }
};

int main(){
    Select<Sunday> today;
    std::cout << today.DayName() << "은 " << today.DayNumber() << "번째 요일이다." << std::endl;
}