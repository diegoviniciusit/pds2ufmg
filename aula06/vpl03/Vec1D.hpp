#ifndef VEC_1D
#define VEC_1D

#include "Vec.hpp"

class Vec1D: public Vec {
  public:
    Vec1D(double x): _x(x) {}

    double getX() const { return _x; }

    virtual double get_norm() const override;

  protected:
    double _x;
};

#endif
