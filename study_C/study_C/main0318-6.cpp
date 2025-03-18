#include <iostream>
#include <string>
using namespace std;

int main() {
    int size;
    cout << "크기 지정: ";
    cin >> size;

    int* mArr = new int[size];
    
    for (int i = 0; i < size; ++i) {
        mArr[i] = i + 1;
        cout << mArr[i] << endl;
    }

    delete[] mArr;
    return 0;
}
