#include <iostream>
#include <string>
using namespace std;
// Створіть  два  похідних класа:  book,  в  якому  відбувається зміна лічильника сторінок (типа int), і tape,
// в якому відбувається зміна лічильника записаних на касету хвилин. Кожен з класів повинен мати метод getdata(),
// який буде запитувати інформацію у користувача, і putdata() для виведення даних на екран.Напишіть main(),
// де створювався б масив покажчиків на клас publication. У циклі запитуйте у користувача дані про конкретнікнигиабо касети,
// використовуйте new для створення нового об'єкта book або tape. Зіставляйте покажчик  в масиві з об'єктом.
// Коли користувач закінчить введення вихідних даних, виведіть результат для всіх введених книг і касет,
// використовуючи цикл for і єдиний вираз:pubагг[j] -> putdata();для виведення даних про кожен об'єкт з масиву.
class publication {
private:
    string name;
    float price;
public:
    publication () {this-> name = " "; this->price = 0;}
    publication (string name, float price) {this->name = name; this->price = price;}
    const string &getName() const {
        return name;
    }

    void setName(const string &name) {
        publication::name = name;
    }

    float getPrice() const {
        return price;
    }

    void setPrice(float price) {
        publication::price = price;
    }
};

class book : public publication {
private:
    int pages;
public:
    book() {this->pages = 0;}
    book(const string &name, float price, int pages) : publication(name, price) {this->pages = pages;}

    int getPages() const {
        return pages;
    }

    void setPages(int pages) {
        book::pages = pages;
    }
};
class tape : public publication {
private:
    int minutes;
public:
    tape(){this->minutes = 0;}
    tape(const string &name, float price, int minutes) : publication(name, price) {this->minutes = minutes;}

    int getMinutes() const {
        return minutes;
    }

    void setMinutes(int minutes) {
        tape::minutes = minutes;
    }
};
int main() {
    int size = 3;
    book bk[size];
    tape kk[size];

    string str;
    int pages, minutes; float price;
    for (int i = 0; i<size; i++) {
        cout<<"enter book name, book price, pages\n";
        cin>>str>>price>>pages;
        bk[i].setName(str); bk[i].setPrice(price); bk[i].setPages(pages);
        cout<<"enter book name, book price, minutes\n";
        cin>>str>>price>>minutes;
        kk[i].setName(str); kk[i].setPrice(price); kk[i].setMinutes(minutes);
    }

    cout<<"all your data: "<<endl;
    for (int i = 0; i < size; i++) {
        cout<<"name: "<<bk[i].getName()<<"\tprice: "<<bk[i].getPrice()<<"\tpages: "<<bk[i].getPages()<<endl;
        cout<<"name: "<<kk[i].getName()<<"\tprice: "<<kk[i].getPrice()<<"\tminutes: "<<kk[i].getMinutes()<<endl;
    }

}