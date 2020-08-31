#include <iostream>

void Print_int(int x){
	printf("%d 인수는 %s입니다.\n", x, (x)? "참":"거짓");
}
void Print_bool(bool x){
	std::cout << std::boolalpha << x << " 인수는 " << (x?"참":"거짓") << "입니다." << std::endl;
	std::cout << "bool 타입의 데이터는 " << std::boolalpha << x << "와" << !x <<"로 표시할 수 있습니다." << std::endl;
}

int main(){
	bool ok = true;
	bool notok = false;
	
	Print_int(100);
	Print_bool(ok);
	
	return 0;
}