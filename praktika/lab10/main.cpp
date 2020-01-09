#include <iostream>
using namespace std;
class imagineNum {
private:
    int i;
public:
    imagineNum() { this->i = 0; }
    imagineNum(int i) { this->i = i; }
    imagineNum(imagineNum &temp) {temp.i = this->i;}
    double plus(double num) {return this->i + num;}
    double minus(double num) {return this->i - num;}
    double multiply(double num) {return this->i * num;} int getI() {return i;}
    ~imagineNum() {}
};
class complexNum : public imagineNum {
private:
    double a, b;
public:
    complexNum() {this->a = 0; this->b = 0;}
    complexNum(int i, double a, double b) :
            imagineNum(i) {this->a = a; this->b = b;}
    double getA() {return this->a;}
    double getB() {return this->b;}
};

int main() {
    complexNum num(4, 5.5, 3.3);
    cout << "i: " << num.getI() << "\t";
    cout<<"plus: "<<num.plus(num.getA())<<"\t"; cout<<"minus: "<<num.minus(num.getB()); cout<<num.multiply(num.getB());
}