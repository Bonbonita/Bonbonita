#include <iostream>
#include <fstream>
using namespace std;
int main() {
    int num;
    ofstream File ("/home/kachurovsky/workBanch/2BURSA/321_Projects/praktika/lab4/laboratorna.txt", ios::app);
    cout<<"enter 5 numbers"<<endl;
    for (int i = 5; i < 10; i++) {
        cin>>num;
        File<<num<<"\t";
    }
}