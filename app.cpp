#include <iostream>
#include <string.h>
#include <ctype.h>
#define MAX 50

using namespace std;
// Building calculator

int calculator(char arr[]) {
    // Count how many numbers occur?
    int count = 0;
    for(int i = 0; i < strlen(arr); i++) {
        if(isdigit(arr[i])) {
            count++;
        }
    }

    cout << count;
    return 0;
}


int main() {
    char arr[MAX];
    int x, y;
    cout << "Input your calculator: "<< endl;
    cin.getline(arr, MAX);

    calculator(arr);
    return 0;
}