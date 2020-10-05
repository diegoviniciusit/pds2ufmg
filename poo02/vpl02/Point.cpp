#include <iostream>

#include "Point.h"

std::ostream & operator << (std::ostream &out, const Point &p) {
  return out << "(" << p.x << ", " << p.y << ")";
}

std::istream & operator >> (std::istream &in,  Point &p) {
  in >> p.x >> p.y;
  return in;
}

Point Point::operator + (const Point &p) {
  double newX = this->x + p.getX();
  double newY = this->y + p.getY();
  Point point = Point(newX, newY);
  return point;
}

Point& Point::operator += (const Point &p) {
  double newX = this->x + p.getX();
  double newY = this->y + p.getY();
  this->x = newX;
  this->y = newY;
  return *this;
}