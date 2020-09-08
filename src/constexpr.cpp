#include <iostream>

struct complex{
    constexpr complex(double r, double i) : re(r), im(i) {/*std::cout << "constexpr complex 호출" << std::endl;*/}
    constexpr double real() const {return re;}
    constexpr double imag() const {return im;}
private:
    double re;
    double im;
};

constexpr double square(double x) {return x * x;}

int main(){
    //인수로 리터럴을 사용하였으므로 사용이 가능하다. comp 변수는 상수로 사용된다.
    constexpr complex comp(0.0, 1.0);
    double x = 1.0;

    //constexpr 지정자로 선언한 변수는 상수를 의미한다. 따라서 생서앚의 인수로
    //변수를 사용한다면 x 변수의 값을 알 수 있다하더라도 에러가 발생한다.
    // constexpr complex cx1 (x, 0);

    //다음 cx1 변수는 허용된다. 상수표현식으로 선언된 생선자는 인라인 함수로 인식되므로
    //일반 객체를 생성하는 데 사용하더라도 전혀 문제가 되지 않는다.
    complex cx1(x,10);
    std::cout << "실수 : " << cx1.real() << ", 허수 : " << cx1.imag() << std::endl;

    //cx2 변수는 const 상수로 선언되어 있기 때문에 허용된다.
    const complex cx2(x, 1);

    //comp 변수는 constexpr 지정자로 상수로 선언되어 있으므로 
    //내부 멤버 변수 역시 모두 상수로 인식되므로 허용된다
    constexpr double cr = comp.real();
    constexpr double ci = comp.imag();
    std::cout << "실수 : " << cr << ", 허수 : " << ci << std::endl;

    //인라인 함수로 인신되므로 허용된다. constexpr 생성자는 모든 멤버 변수를 초기화시켜 제공한다.
    complex cx3(2, 4.6);
    const int dmv = 17;
    int var = 17;

    //square(17) 함수는 const 상수를 인수로 사용하므로 허용된다.
    constexpr double max1 = 1.4 * square(dmv);

    //constexpr 지정자로 선언한 변수는 상수를 의미한다. 따라서 앞에서 설명한 이유와 같이
    //"함수의 인수로 변수를 사용한다면 x 변수의 값을 알 수 있다"하더라도 에어가 발생한다.
    // constexpr double max2 = 1.4 * square(var);

    //const 상수는 변수를 사용하더라도 변수가 초기화되어 있다면 허용된다.
    double max2 = 1.4 * square(var);
    const double max3 = 1.4 * square(var);
    std::cout << "제곱 : " << max3 << std::endl;
}