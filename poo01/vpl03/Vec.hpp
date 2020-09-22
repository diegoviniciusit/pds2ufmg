#ifndef VEC_H
#define VEC_H

#include <string>
#include <cmath>

class Vec {
  public:
    virtual double get_norm() const = 0;

    virtual ~Vec() {};
};

#endif
