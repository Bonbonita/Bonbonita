//Ввести   двомірний   масив   який   містить    Nрядків    та M стовпців використовуючи
// динамічний    розподіл    пам’ять. Значення   N та M задайте  самі.
// Сформулюйте   одномірний    масив , який   складається   з максимальних   елементів   кожного   рядка.
#include <iostream>

using namespace std;


int main() {

    int N = 3, M = 4;

    int **arr = new int *[N];
    for (int i = 0; i < N; i++) {
        arr[i] = new int[M];
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout<<"enter elment of array:["<<i<<"]"<<"["<<j<<"]"<<endl;
            cin >> arr[i][j];
        }
    }


    int max = arr[1][1], *maxRow = new int [N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
                maxRow = arr[i];
            }
        }

    }


    for (int i = 0; i < N; i++) {
        cout<<maxRow[i]<<endl;
    }

    for (int i = 0; i < N; i++) {
        delete [] arr[i];
    }

}