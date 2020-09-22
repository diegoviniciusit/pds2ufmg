#include "Vec3D.hpp"

double Vec3D::get_norm() const
{
    return sqrt(pow(this->_x, 2) + pow(this->_y, 2) + pow(this->_z, 2));
}
