#include<iostream>
using namespace std;

int arr[10];
int as[8] = {1, 2, 3, 4, 5, 6, 7, 8};
int de[8] = {8, 7, 6, 5, 4, 3, 2, 1};

int main() {
    int N;
    for (int i = 0; i < 8; i++){
        cin >> arr[i];
    }

    bool isAscending = true;
    bool isDescending = true;

    for (int i = 0; i < 8; i++){
        if(arr[i] != as[i]){
            isAscending = false;
        }
        if(arr[i] != de[i]){
            isDescending = false;
        }
    }

    if(isAscending) {
        cout << "ascending" << '\n';
    } else if(isDescending) {
        cout << "descending" << '\n';
    } else {
        cout << "mixed" << '\n';
    }
}
