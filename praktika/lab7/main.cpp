#include <iostream>
#include <string>
using namespace std;
class Spivrobitnuk {
public:
    string secondName;
    int strahivka, paySum;
    Spivrobitnuk() {
        this->secondName = "NULL";
        this->strahivka = 0;
        this->paySum = 0;
    }
    Spivrobitnuk(string secondName, int strahivka, int paySum) {
        this->secondName = secondName;
        this->strahivka = strahivka;
        this->paySum = paySum;
    }
    string getName() {return this->secondName;}};
class SpivrobShtat : public Spivrobitnuk {
private:
    int weekStavka;
public:
    SpivrobShtat() {this->weekStavka = 0;}
    SpivrobShtat(int weekStavka) {this->weekStavka = weekStavka;}
    SpivrobShtat(const string &secondName, int strahivka, int paySum, int weekStavka)
    : Spivrobitnuk(secondName, strahivka,paySum)
    {this->secondName = secondName;
        this->strahivka = strahivka;
        this->paySum = paySum;
        this->weekStavka = weekStavka;}
void printCheck() {cout<<"second name: "<<this->secondName<<"/tstrahivka: "<<this->strahivka<<"\tweek tarif: "<<this->weekStavka<<
        "\tpayment sum: "<<this->paySum<<endl;}};
int main() {
    SpivrobShtat Lalka("Lalka", 2881337, 3000, 1000);
}