#ifndef SHAPE
#define SHAPE
#include<iostream>

class shape{
protected:
    std::string _name;
    double _x, _y;
    std::string _color;
    std::string _line_type;

public:
    virtual ~shape(){}
    virtual double area() const = 0;
    bool operator < (const shape &rhs) const{
        return area() <rhs.area();
    }
    friend std::ostream & operator << (std::ostream &out, const shape &rhs);
};
#endif
