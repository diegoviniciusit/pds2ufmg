#ifndef VEC_2D
#define VEC_2D

#include "Vec1D.hpp"

class Vec2D: public Vec1D {
  public:
    Vec2D(double x, double y): Vec1D(x), _y(y) {}

    virtual double getY() const { return _y; }

    virtual double get_norm() const override;

  protected:
    double _y;
};

#endif
