#include <stdexcept>
#include <iostream>

void Copyobject(const char *original){
    if(nullptr == original){
        throw std::runtime_error("인수가NULL이다.");
    }
    std::cout << original << std::endl;
}

int main(){
    char *name = nullptr;
    try{
        Copyobject(name);
    }catch(std::runtime_error& e){
        std::cerr << e.what() << std::endl;
    }catch(int e){
        std::cerr << e << std::endl;
    }catch(...){
        std::cerr << "모든 exception 처리." << std::endl;
    }
    return 0;
}
