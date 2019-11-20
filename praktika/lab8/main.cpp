#include <iostream>
#include <string>

//Взявши  за  основу  приведену  програму,  додайте перевизначення  операції присвоєння і
// перевизначений конструктор  копіювання  до  класу Array.
// Потім додайте  до main() вираз Array arr2(arr1);  і arr3=arr1;  для  перевірки  того,  що перевизначені  операції  працюють.
// Конструктор  копіювання  повинен  створити новий  об'єкт Array зі  своїм  власним  місцем  у  пам'яті,
// виділеним  для  зберігання елементів  масиву. І  конструктор  копіювання,
// і  оператор  присвоювання  повинні копіювати вміст старого об'єктів та класу Array в новий.

using namespace std;

class Array {
private:
    int *ptr;
    int size;
public:
    Array(int size) {
        this->size = size;
        ptr = new int[this->size];
    }
    Array (Array &temp) {
        this->size = temp.size;
        temp.ptr = new int[temp.size];
    }

    ~Array() {
        delete ptr;
    }

    //operators

    int &operator[](int j) {
        return *(ptr + j);
    }
    Array& operator=(const Array& right) {
        if (this == &right) {
            return *this;
        }
        this->size = right.size;
        this->ptr = right.ptr;
        return *this;
    }

};

int main() {
    const int arrSize = 7;
    Array arr(arrSize);
    Array arr1(arr);
    for (int i = 0; i < arrSize; i++) {
        arr[i] = i * i;
        cout<<arr[i]<<" - content"<<endl;
    }
    arr1 = arr;
    for (int i = 0; i < arrSize; i++) {
        cout<<"arr1: "<<arr[i]<<" - content"<<endl;
    }

}