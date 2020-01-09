#include <iostream>
#include <string>
using namespace std;
struct  friends {
string name, lastName, birthDate, phoneNumbers;
};
int main() {
    friends a, b, c;
    a.lastName = "lalka";
    a.birthDate = "31/12/2045";
    a.name = "igop";
    a.phoneNumbers = "+8805553535";
    cout<<"name: "<<a.name<<"\tlast name: "<<a.lastName
    <<"\tbirthDate: "<<a.birthDate<<"\tphone"<<a.phoneNumbers<<endl;
    return 0;
}