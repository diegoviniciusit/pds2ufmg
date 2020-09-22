#ifndef VEC_3D
#define VEC_3D

#include "Vec2D.hpp"

class Vec3D: public Vec2D {
  public:
    Vec3D(double x, double y, double z): Vec2D(x, y), _z(z) {}

    virtual double getZ() const { return _z; }

    virtual double get_norm() const override;

  protected:
    double _z;
};

#endif
