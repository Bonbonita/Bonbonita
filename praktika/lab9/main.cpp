#include <iostream>
//Створіть функцію аmaх(), що повертає значення максимального елемента масиву.
// Аргументами функції повинні бути адреса і розмір масиву.
// Зробіть з функції шаблон, щоб вона могла працювати з масивом будь-якого числового типу. Напишіть функцію
// main(),  в  якій  перевірите  роботу  функції  з  різними  типами масивів.
using namespace std;

template    <typename T>
T maxArr (T *arr, T size) {
    T max = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > max ) max = arr[i];
    }
    return max;
}

int main() {

    int arr[4];
    double arr1[4];

    for (int i = 0; i < 4; i++) {
        arr[i] = i * 2;
        arr1[i] = i * 3;
    }
    cout<<"int: "<<maxArr(arr, 4)<<endl;
    cout<<"double: "<<maxArr(arr1, 4.0)<<endl;
}

// стор 7, 8