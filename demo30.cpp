#include <iostream>
using namespace std;

int main() {
    int num, r, sum, temp;
    int stno, enno;

    cout << "Input starting number of range: ";
    cin >> stno;

    cout << "Input ending number of range: ";
    cin >> enno;

    cout << "Armstrong numbers in the given range are: ";
    for (num = stno; num <= enno; num++) {
        temp = num;
        sum = 0;

        while (temp != 0) {
            r = temp % 10;
            temp = temp / 10;
            sum = sum + (r * r * r);
        }
        if (sum == num)
            cout << num << " ";
    }

    cout << endl;

    return 0;
}
