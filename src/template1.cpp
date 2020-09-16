#include <iostream>

template <typename T>
void print(const T t){
    std::cout << t << "1번함수" << std::endl;
}

template <typename First, typename... Rest>
void print(const First first, const Rest... rest){
    std::cout << first << "2번함수" << ", ";
    print(rest...);
}

int main(){
    print(1);
    print(10, 20);
    print(100,200,300);
    print("first", 2, "third", 3.14195);
}