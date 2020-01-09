#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    ifstream in("/home/kachurovsky/workBanch/2BURSA/321_Projects/oop/praktika/lab6/Math.pow(tilt,Infinity).txt");
    ofstream out("/home/kachurovsky/workBanch/2BURSA/321_Projects/oop/praktika/lab6/tilt.txt");
    if (!out.is_open()) {
        cout << "ERROR: Can not open tilt.txt" << endl;
        return 0;
    }
    string str;
    while (getline(in, str));
    {
        cout<<"sentence: "<<str<<endl;
        out << str;
    }
    in.close();
    out.close();
}