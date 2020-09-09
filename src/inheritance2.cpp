#include <iostream>
#include <string>

class Person {
public:
    Person() : Person(""){}
    Person(std::string n) : name(n) {}

    std::string GetName(){
        return name;
    }

private:
    std::string name;
};

class Student : public Person{      
public:
    Student(std::string n) : name(n){}      //Person 내 name 변수를 초기화하려면 Person(n) 생성자를 호출해야함
                                            //별도의 생성자 언급이 없으므로 Preson의 디폴트 생성자가 호출됨
    std::string GetName(){
        return name;
    }

private:
    std::string name;
};

int main(){
    Student s1("홍길동");
    std::cout << "Student : " << s1.GetName() << std::endl;
    std::cout << "Person  : " << s1.Person::GetName() << std::endl;
    return 0;
}