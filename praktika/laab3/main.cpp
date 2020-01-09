#include <iostream>
#include <string.h>
using namespace std;
int main () {
    char city[] = "Ternopil Kurbasa/11";
    cout<<city<<"\t";
    cout<<"str length: "<<strlen(city)<<endl;
    int i = 0;
    char word1[32];
    char *wrds = strtok(city, " ");
    char *wrd2 = strtok(NULL, " ");
    cout<<wrd2<<"\t";
    cout<<wrds<<"\t";
    char cou[300] = "";
    strcat(cou, wrds);
    strcat(cou,wrd2);
    cout<<cou<<"\t";
    for (int i = strlen(wrds) - 1; i != -1; i-- ) {
        cout<<wrds[i];
    }
}
