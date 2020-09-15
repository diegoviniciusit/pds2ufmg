#include "Vec2D.hpp"

double Vec2D::get_norm() const
{
    return sqrt(pow(this->_x, 2) + pow(this->_y, 2));
}
