#include <iostream>
using namespace std;
int factorial(int i) {
    if (i == 1) {
        return i;
    }
    return factorial(i - 1) * i;
}
int main() {
    for (int i = 1; i < 10; i++) {
        cout<<"number: "<<i<<"\t"<<"factorial: "<<factorial(i)<<endl;
    }
}
