#include <iostream>

using namespace std;
//Клас комплексних чисел
//Базовий клас (уявних чисел):
//Конструктори: за замовчуванням, з параметрами та копіювання.
//Деструктор.
//Функції: додавання; віднімання; множення на дійсне число; виведення
//інформації на екран.
//Похідний клас: комплексних чисел.
//Операції: = (присвоювання),+, – (поелементні математичні операції).

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
    void setI(int i) {
        this-> i = i;
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
    complexNum operator+(complexNum &arg) {
        this->a += arg.a;
        this->b += arg.b;
    }
    complexNum operator-(complexNum &arg) {
        this->a -= arg.a;
        this->b -= arg.b;
    }
    complexNum& operator=(complexNum &arg) {
        if (this == &arg) {
            return *this;
        }
        this->a = arg.a;
        this->b = arg.b;
        setI(arg.getI());
        return *this;
    }
};

int main() {

    complexNum num(4, 5.5, 3.3);
    complexNum num1(3, 33, 12);
    complexNum num2;

    cout << "num: i: " << num.getI() << endl;
    cout << "num: plus: " << num.plus(num.getA()) << endl;
    cout << "num: minus: " << num.minus(num.getB()) << endl;
    cout << "num: multiply: " << num.multiply(num.getB()) << endl;

    cout<<"after num + num1\n"<<endl;
    num + num1;
    cout << "num: plus: " << num.plus(num.getA()) << endl;
    cout << "num: minus: " << num.minus(num.getB()) << endl;
    cout << "num: multiply: " << num.multiply(num.getB()) << endl;

    num2 = num;
    cout<<"num: a: "<<num.getA()<<endl;
    cout<<"num2: a: "<<num2.getA()<<endl;

}