#include <iostream>
#include <random>

std::random_device rd;
std::mt19937 gen(rd());
std::uniform_int_distribution<int> uid(0,9);

int * makeCpuNo();
int * inputUserNo();
bool checkSB(const int*, const int*);

int main(){
    bool regame = false;
    bool win = false;
    do{
		std::cout << "--------------------------\n";
		std::cout << "----- Balls and Cows -----\n";
		std::cout << "----- Balls and Cows -----\n";
		std::cout << "----- Balls and Cows -----\n";
		std::cout << "--------------------------\n";
        int *cpuNo;
        cpuNo = makeCpuNo();

        do{
        int *userNO;
        userNO = inputUserNo();
        win = checkSB(cpuNo,userNO);
        } while (!win);

        std::cout << "게임을 계속하시겠습니까? Y : 1 , N : 0" <<std::endl;

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

bool checkSB(const int* cpuNo, const int* userNo){
    /*
    for(int i = 0; i<4 ; ++i)
        std::cout << cpuNo[i] << " ";

    std::cout << "\n";

    for(int i = 0; i<4 ; ++i)
        std::cout << userNo[i] << " ";
    */
    bool win;
    int strikeCount, ballCount;

    strikeCount = 0;
    ballCount = 0;

    for(int i = 0 ; i < 4 ; ++i)
        for(int j = 0 ; j < 4 ; ++j ){
            if(cpuNo[i] == userNo[j]){
                if(i == j)
                    ++strikeCount;
                else 
                    ++ballCount;
            }
        }
    
    if(4 == strikeCount){
        win = true;
        std::cout << "게임에서 승리했습니다." << std::endl;
        return win;
    }
    else 
        win = false;

    std::cout << "Strike : " << strikeCount << " Ball : " << ballCount << std::endl;
    
    return win;
}
