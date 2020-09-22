#include "Vec1D.hpp"

double Vec1D::get_norm() const
{
    if (this->_x < 0) {
        return this->_x * -1;
    }
    return this->_x;
}
