#include <iostream>
#include <string>

class Shape {
public:
    Shape(std::string n) : name(n) {}
    
    void GetArea(){
        std::cout << "도형 이름 : " << GetName() << ",\t 도형 크기 : " << Area() << std::endl;
    }

    virtual double Area() { return 0; }     //63줄처럼 일반 변수로 선언하면 이 함수가 호출됨
    std::string GetName(){
        return name;
    }

private:
    std::string name;
};

class Rectangle : public Shape {
public:
    Rectangle(std::string n, float w = 0, float h = 0) : Shape(n), width(w), height(h) {}

    double Area(){
        return (width * height);
    }

protected:
    float width;
    float height;
};

class Triangle : public Rectangle {
public:
    Triangle(float w = 0, float h = 0) : Rectangle("삼각형", w, h) {};

    virtual double Area() final { return (Rectangle::Area()/2); }       //더이상 가상 함수로 상속되지 않도록 final 지정자 사용
};

const double PI = 3.14159;

class Circle : public Shape {
public:
    Circle(double r = 0) : Shape("원"),  radius(r) {}

    double Area() override { return (PI * (radius * radius)); }

protected:
    double radius;
};

int main(){
    Shape *shape[] = {
        new Rectangle ("직사각형", 10, 5),
        new Triangle (10, 5),
        new Circle(10)
    };

    for(Shape *s : shape)
        s->GetArea();

    Rectangle r("직사각형-2", 10, 15);
    Shape s = r;

    s.GetArea();                //Shape 객체의 GetArea가 호출됨

    for(Shape *s : shape)
        delete s;
}
