#include <iostream>

using namespace std;
//Клас комплексних чисел
//Базовий клас (уявних чисел):
//Конструктори: за замовчуванням, з параметрами та копіювання.
//Деструктор.
//Функції: додавання; віднімання; множення на дійсне число; виведення
//інформації на екран.
//Похідний клас: комплексних чисел.

class imagineNum {
private:
    int i;
public:
    imagineNum() { this->i = 0; }

    imagineNum(int i) { this->i = i; }

    imagineNum(imagineNum &temp) {
        temp.i = this->i;
    }

    double plus(double num) {
        return this->i + num;
    }

    double minus(double num) {
        return this->i - num;
    }

    double multiply(double num) {
        return this->i * num;
    }

    int getI() {
        return i;
    }

    ~imagineNum() {}
};

class complexNum : public imagineNum {
private:
    double a, b;
public:
    complexNum() {
        this->a = 0;
        this->b = 0;
    }

    complexNum(int i, double a, double b) :
            imagineNum(i) {
        this->a = a;
        this->b = b;
    }

    double getA() {
        return this->a;
    }

    double getB() {
        return this->b;
    }
};

int main() {
    complexNum num(4, 5.5, 3.3);
    cout << "i: " << num.getI() << endl;
    cout<<"plus: "<<num.plus(num.getA())<<endl;
    cout<<"minus: "<<num.minus(num.getB())<<endl;
    cout<<"multiply: "<<num.multiply(num.getB())<<endl;
}