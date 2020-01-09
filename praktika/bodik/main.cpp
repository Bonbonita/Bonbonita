#include <iostream>

using namespace std;

#define M 3
#define N 5

int main() {

    int arr[M][N];
    int counter = 0, min = 0;
    for (int i = 0; i < M; i++) {

        for (int j = 0; j < N; j++) {
            cout << "arr[" << i << "][" << j << "] = ";
            cin >> arr[i][j];
            if (arr[i][j] > -1) {
                min++;
                if (min == 2) {
                    counter++;
                    min = 0;
                }
            }
        }
        min=0;

    }
    cout << counter << endl;
    return 0;


}