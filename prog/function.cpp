#include <iostream>
#include "function.h"
using namespace std;

void initInt(int arr[], int n) {
    for (int i = 0; i < n; i++)
        arr[i] = rand() % 100;

}


void showInt(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}


void findMinInt(int arr[], int n) {
    int min = arr[0];
    for (int i = 0; i < n; i++)
        if (arr[i] < min)
            swap(arr[i], min);
    cout << "Min: " << min << endl;
}


void findMaxInt(int arr[], int n) {
    int max = arr[0];
    for (int i = 0; i < n; i++)
        if (arr[i] > max)
            swap(arr[i], max);
    cout << "Max: " << max << endl;
}


void bSortInt(int arr[], int n) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (arr[j] > arr[i])
                swap(arr[i], arr[j]);

}


void changeElInt(int arr[]) {
    int d, val;
    cout << "Enter the index of element which you want change" << endl;
    cin >> d;
    cout << "Enter new value " << endl;
    cin >> val;
    arr[d + 1] = val;

}

void initFl(float arr[], int n) {
    for (int i = 0; i < n; i++)
        arr[i] = float(((float)rand() / RAND_MAX));;
}


void showFl(float arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}


void findMinFl(float arr[], int n) {
    float min = arr[0];
    for (int i = 0; i < n; i++)
        if (arr[i] < min)
            swap(arr[i], min);
    cout << "Min: " << min << endl;
}


void findMaxFl(float arr[], int n) {
    float max = arr[0];
    for (int i = 0; i < n; i++)
        if (arr[i] > max)
            swap(arr[i], max);
    cout << "Max: " << max << endl;
}


void bSortFl(float arr[], int n) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (arr[j] < arr[i])
                swap(arr[i], arr[j]);

}


void changeElFl(float arr[]) {
    int d;
    float val;
    cout << "Enter the index of element which you want change" << endl;
    cin >> d;
    cout << "Enter new value " << endl;
    cin >> val;
    arr[d + 1] = val;

}


void initCh(char arr[], int n) {
    for (int i = 0; i < n; i++)
        arr[i] = rand() % 100;
}


void showCh(char arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}


void findMinCh(char arr[], int n) {
    char min = arr[0];
    for (int i = 0; i < n; i++)
        if (arr[i] < min)
            swap(arr[i], min);
    cout << "Min: " << min << endl;
}


void findMaxCh(char arr[], int n) {
    char max = arr[0];
    for (int i = 0; i < n; i++)
        if (arr[i] > max)
            swap(arr[i], max);
    cout << "Max: " << max << endl;
}


void bSortCh(char arr[], int n) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (arr[j] < arr[i])
                swap(arr[i], arr[j]);

}


void changeElCh(char arr[]) {
    int d;
    char val;
    cout << "Enter the index of element which you want change" << endl;
    cin >> d;
    cout << "Enter new value " << endl;
    cin >> val;
    arr[d + 1] = val;

}