//Введіть  назву  міста  в  якому  ви  живете  та  назву  вулиці,  як  одне  текстоведане.  Визначити  його довжину.
// Розв’язати  задачувідповідно  довашого  варіанта.
// 1.Вивести  найкоротше  слово.
// 2.Вивести  найдовше  слово.
// 3.З’єднати  назву  міста  та  назву  вулиці  в  один  рядок.
// 4.Вивести  назву міста  у  зворотньому  порядку.
#include <iostream>
#include <string.h>

using namespace std;

int main () {
    char city[] = "Ternopil Kurbasa/11";
    cout<<city<<endl;

    cout<<"str length: "<<strlen(city)<<endl;
    int i = 0;

    char word1[32];
    char *wrds = strtok(city, " ");
    char *wrd2 = strtok(NULL, " ");

    cout<<wrd2<<endl;
    cout<<wrds<<endl;

    char cou[300] = "";

    strcat(cou, wrds);
    strcat(cou,wrd2);

    cout<<cou<<endl;


    for (int i = strlen(wrds) - 1; i != -1; i-- ) {
        cout<<wrds[i];
    }
}
