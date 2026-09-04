#include <iostream>
using namespace std;

class Solution {
public:
    int whileLoop(int d) {
        int sum = 0;
        int num = d;
        int count = 0;

        // For d = 0, start from 10 because 0 is not positive
        if (d == 0) {
            num = 10;
        }

        while (count < 50) {
            sum = sum + num;
            num = num + 10;
            count++;
        }

        return sum;
    }
};

int main() {
    Solution obj;

    int d;
    cin >> d;

    cout << obj.whileLoop(d);

    return 0;
}