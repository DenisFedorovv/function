#include <iostream>
#include <Windows.h>
#include "function.h"
#define N 10
#define INTEGER
using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    setlocale(LC_ALL, "Russian");

    int arr[N];
    cout << "Working on the first array" << endl << endl;
    cout << "Array:" << endl;
    init(arr, N);
    show(arr, N);
    cout << endl << endl;
    cout << "Lets sort this array: " << endl;
    bSort(arr, N);
    show(arr, N);
    cout << endl << endl;
    findMin(arr, N);
    cout << endl;
    findMaxInt(arr, N);
    cout << endl;
    changeElInt(arr);
#undef INTEGER

#define FLOAT
#include "function.h"
    cout << endl;
    float arr1[N];
    cout << "Working on the second array" << endl << endl;
    cout << "Array:" << endl;
    init(arr1, N);
    show(arr1, N);
    cout << endl << endl;
    cout << "Lets sort this array: " << endl;
    bSort(arr1, N);
    show(arr1, N);
    cout << endl << endl;
    findMin(arr1, N);
    cout << endl;
    findMax(arr1, N);
    cout << endl;
    changeEl(arr1);
#undef FLOAT

#define CHAR
#include "function.h"
    cout << endl;
    char arr2[N];
    cout << "Working on the second array" << endl << endl;
    cout << "Array:" << endl;
    init(arr2, N);
    show(arr2, N);
    cout << endl << endl;
    cout << "Lets sort this array: " << endl;
    bSort(arr2, N);
    show(arr2, N);
    cout << endl << endl;
    findMin(arr2, N);
    cout << endl;
    findMax(arr2, N);
    cout << endl;
    changeEl(arr2);

#undef CHAR




    system("pause");
    return 0;
}