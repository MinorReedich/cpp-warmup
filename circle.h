// Name: Minor Reedich
// Date: 02/25/2021

#pragma once
#include <iostream>
using namespace std;

class Circle {
    public:
        Circle();                                                        // default constr                                                       
        Circle(float r);                                                 // constr with radius
        Circle(const Circle &C);                                         // copy constr
        Circle& operator = (const Circle &C);                            // assignment operator
        friend ostream &operator << (ostream &output, const Circle &C);  // output stream operator
        friend Circle operator+(const Circle &C1, const Circle &C2);     // add operator
        float getRadius();                                               // accessor
        void setRadius(float r);                                         // mutator
        float computeArea();                                             // method for area computation 
        ~Circle();                                                       // destructor          
    
    private:
        float radius;
};