/*
#include <iostream>
#include <cstddef>

using namespace std;

void f(int* pi){
	cout << "정수" << endl;
}
void f(double* pd){
	cout << "실수" << endl;
}
void f(nullptr_t ptr){
	cout << "null 포인터" << endl;
}

int main(){
	int pi = 0;
	double pd = 0.0;
	
	f(&pi);
	f(&pd);
	f(nullptr);
	
	//f(null)은 모든 함수를 가리키므로 에러가 발생한다.
}
*/