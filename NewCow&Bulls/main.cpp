#include <iostream>
#include <random>

std::random_device rd;
std::mt19937 gen(rd());
std::uniform_int_distribution<int> uid(0,9);

int * makeCpuNo();
int * inputUserNo();
void checkSB(const int*, const int*);

int main(){
    bool regame;
    do
    {
        int *cpuNo;
        cpuNo = makeCpuNo();

        int *userNO;
        userNO = inputUserNo();
        checkSB(cpuNo,userNO);

        std::cin >> regame;
        
    } while (regame);
    
}

int * makeCpuNo(){
    static int cpuNo[4]; //static 정적변수, 선언된 함수 영역을 벗어나도 선언된 변수가 유지
                         //static 지정자가 없다면 함수가 반환될 때 삭제됨

    for(int i = 0 ; i < 4; ++i ){
        int temp = uid(gen);
        cpuNo[i] = temp;
        for(int j=0; j < 4; ++j)
            if( temp == cpuNo[j] && i != j)
                --i;
    }
    return cpuNo;
}

int * inputUserNo(){
    static int userNo[4];

    for(int i = 0 ; i < 4 ; ++i){
        scanf("%1d", &userNo[i] );
    }

    return userNo;
}

void checkSB(const int* cpuNo, const int* userNo){
    for(int i = 0; i<4 ; ++i)
        std::cout << cpuNo[i] << " ";

    std::cout << "\n";

    for(int i = 0; i<4 ; ++i)
        std::cout << userNo[i] << " ";

}