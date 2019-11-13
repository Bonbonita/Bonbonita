/*
Напишіть програму, яка емулює команду COPY (MS DOS). Тобто програма повинна копіювати  вміст  одного  файлу  в  іншій.
Необхідно  використовувати  два  аргументи  командної стрічки -вихідний файл і файл призначення.
Наприклад:С: \>ocopy srcfile.cpp destfile.
cppЗдійснюйте  перевірку  числа  аргументів  командного  рядка  і  можливість
відкриття  вказаних користувачем файлів.#include <iostream>
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main () {
    ifstream in("/home/kachurovsky/workBanch/2BURSA/321_Projects/praktika/lab6/Math.pow(tilt,Infinity).txt");
    ofstream out("/home/kachurovsky/workBanch/2BURSA/321_Projects/praktika/lab6/tilt.txt");
    if (!out.is_open())
    {
        std::cout << "ERROR: Can not open document2.txt" << std::endl;
        return -1;
    }

    string str;
    while (getline(in, str));
    {
        out<<str;
    }
    in.close();
    out.close();
}