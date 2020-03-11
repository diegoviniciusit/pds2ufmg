#include <iostream>

using namespace std;

int main(){
    long value1=200000;
    long value2;
    long *ptr;
    
    ptr = &value1;
    cout << *ptr << " ";
    value2 = *ptr;
    cout << value2 << " ";
    cout << ptr << " ";
    cout << &value1 << " ";
    
    unsigned int values[5];
    for (int i = 0; i < 5; i++) {
        values[i] = 2 + (i * 2);
    }
    
    unsigned int *vptr;
    cout << 1 << " ";
    for (int i = 0; i < 5; i++) {
        cout << values[i] << " ";
    }
    
    vptr = values;
    vptr = &values[0];
    
    for (int i = 0; i < 5; i++) {
        cout << *(values + i) << " ";
    }
    
    for (int i = 0; i < 5; i++) {
        cout << *(values + i) << " ";
    }
    
    for (int i = 0; i < 5; i++) {
        cout << *(values + i) << " ";
    }
    
    cout << values[4] << " " << values[4] << " " << values[4] << " " << values[4] << " ";
    
    cout << vptr + 3 << " " << *(vptr + 3) << " ";
    vptr = &values[4];
    cout << vptr - 4 << " " << *(vptr - 4) << " ";
    
    return 0;
}
