#include <sstream>
#include <iostream>
#include "CommaDecorator.hpp"

std::string CommaDecorator::toString() {
    std::string str = StreamDecorator::toString();
    int size = str.length();
    int aux;
    for (int i = 0; i < (size - 1); i++) {
        if (str[i] == ' ') {
            while (str[i + 1] == ' ') {
                str.erase(str.begin() + i + 1);
                size--;
            }
            str.insert(str.begin() + i + 1, ',');
            str.insert(str.begin() + i + 2, ' ');
            i += 2;
            size += 2;
        }
    }
    return str;
}
