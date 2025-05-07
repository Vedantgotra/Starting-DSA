#include <iostream>
using namespace std;

void reverseArray(int arr[], int n) {
  int temp;
  for (int i = 0; i < n / 2; i++) {
    temp = arr[i];
    arr[i] = arr[n - 1 - i];
    arr[n - 1 - i] = temp;
  }
}

void printArray(int arr[], int n) {
  cout << "Printing array" << endl;
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() {
  int arr[6] = {1, 4, 0, 5, -2, 15};
  printArray(arr, 6);
  reverseArray(arr, 6);
  printArray(arr, 6);
}