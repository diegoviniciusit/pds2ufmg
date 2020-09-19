#include <sstream>
#include "NumberDecorator.hpp"

std::string NumberDecorator::toString() {
    std::string str = StreamDecorator::toString();
    int size = str.length();
    int aux;
    for (int i = 0; i < (size - 1); i++) {
        if (str[i] == ' ') {
            while (str[i + 1] == ' ') {
                str.erase(str.begin() + i + 1);
                size--;
            }
            if (str[i] >= 48 && str[i] <= 57) {
                str.insert(str.begin() + i, '+');
                i++;
                size++;
            }
        }
    }
    return str;
}
