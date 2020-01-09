#include <iostream>
#include <string>
using namespace std;
class Array {
private:
    int *ptr, size;
public:
    Array(int size) {
        this->size = size;                                                          ptr = new int[this->size];}
    Array (Array &temp) {
        this->size = temp.size;  temp.ptr = new int[temp.size];
    }
    ~Array() {delete ptr;}
    int &operator[](int j) {return *(ptr + j);}
    Array& operator=(const Array& right) {
        if (this == &right) {return *this;}
        this->size = right.size;
        this->ptr = right.ptr;
        return *this;}};
int main() {
    const int arrSize = 2;
    Array arr(arrSize);
    Array arr1(arr);
    for (int i = 0; i < arrSize; i++) {arr[i] = i * i;       cout<<arr[i]<<" - content"<<endl;}
    arr1 = arr;
    for (int i = 0; i < arrSize; i++) {cout<<"arr1: "<<arr[i]<<" - content"<<endl;}
}