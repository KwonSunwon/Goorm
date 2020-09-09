//Inheritance 
//public -> public 접근가능
//       -> protected 접근 지정자로 선언된 멤버는 protected 접근 지정자로 상속
//       -> private 접근불가
//protected -> public 접근 지정자로 선언된 멤버는 protected 접근 지정자로 변경되어 상속
//          -> protected 접근 지정자로 선언된 멤버는 protected 접근 지정자로 상속
//          -> private 접근불가
//          -> 상속에 직접적으로 관련 없는 외부 클래스 또는 외부 함수는 객체 내 기본 클래스의
//              public 지정자로 선언된 멤버에 대해 접근불가 (ex.아래 프로그램은 GetName()에 접근 불가)
//private -> 모든 멤버를 private 접근 지정자로 만들어 상속
//        -> 디폴트 접근 지정자


#include <iostream>
#include <string>

class Person {
public:
    Person() : Person(""){}
    Person(std::string n) : name(n){}

    std::string GetName(){
        return name;
    }

protected:
    std::string degree;

private:
    std::string name;
};

class Student : public Person {
public:
    // Person class의 name 멤버 변수는 private이지만 Person class의 생성자 함수를 호출하여 읽고 쓸 수 있다.
    Student(std::string n) : Person(n), total(0) {}

    int GetTotal(){
        return total;
    }

    void AddTotal(int i){
        total += i;
    }

    void SetDgree(std::string d){
        degree = d;
    }

    std::string GetDegree(){
        return degree;
    }

private:
    int total;
};

int main(){
    Student s1("홍길동");
    s1.SetDgree("초등학교 졸업");
    s1.AddTotal(95);
    std::cout <<"이름 : " << s1.GetName();
    std::cout <<", 학력 : " << s1.GetDegree() << ", 졸업점수 : " << s1.GetTotal() << std::endl;
    return 0;
}