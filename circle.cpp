#include "circle.h"
#include "math.h"

Circle::Circle(){
    radius = 0;
}

Circle::Circle(float r){
    radius = r;
}

Circle::Circle(const Circle &C){
   radius = C.radius;
}

Circle& Circle::operator = (const Circle &C){
    radius = C.radius;
    return *this;
}

std::ostream &operator << (ostream &os, const Circle &C){
    os << C.radius;
    return os;
}

Circle operator+(const Circle &C1, const Circle &C2){ 
    float rad = C1.radius + C2.radius; 
    Circle C(rad);
    return C;
}

float Circle::getRadius(){
    return radius; 
}

void Circle::setRadius(float r){
    radius = r;
}

float Circle::computeArea(){
    float area;
    area = M_PI * radius * radius;
    return area; 
}

Circle::~Circle(){
   cout << "Circle has been successfully destructed!" << endl;
}