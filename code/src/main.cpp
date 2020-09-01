#include <cstdlib>
#include <cstdio>
#include <cstring>

struct Account
{
    Account(const char *id, const char *n, int bal){
        strcpy(account, id);
        strcpy(name, n);
        balance = bal;
    }
    
    void Print(){
        printf("계 좌 : %s , 소유자 : %s", account, name);
        printf(", 잔 액 : %i\n", balance);
    }

    void Deposit(int money){
        balance += money;
    }

    void Withdraw(int money){
        balance -= money;
    }

    char account[20];
    char name[20];
    int balance;
};

int main(){
    char id[] = "120-345-129099";
    char name[] = "홍길동";
    
    Account hong = Account(id, name, 60000);
    hong.Withdraw(10000);
    hong.Deposit(1000);
    hong.Print();
    return 0;
}
