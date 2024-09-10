#include <iostream>
using namespace std;

int main() {
    const string trueLabel = "true";
    const string falseLabel = "false";
    const char* operators[6] = {" == ", " != ", " > ", " < ", " >= ", " <= "};

    int numbers[12];

    for (int i = 0; i < 12; i++) {
        const bool isFirst = (i == 0);
        const bool isSecond = (i == 1);
        const bool isThird = (i == 2);

        cout << "Enter the " << i + 1 << (isFirst  ? "st" : (isSecond ? "nd" : (isThird ? "rd" : "th"))) << " number: ";
        cin >> numbers[i];
    }

    cout << numbers[0] << operators[0] << numbers[1] << " outputs: " << (numbers[0] == numbers[1] ? trueLabel : falseLabel) << endl;
    cout << numbers[2] << operators[1] << numbers[3] << " outputs: " << (numbers[2] != numbers[3] ? trueLabel : falseLabel) << endl;
    cout << numbers[4] << operators[2] << numbers[5] << " outputs: " << (numbers[4] > numbers[5] ? trueLabel : falseLabel) << endl;
    cout << numbers[6] << operators[3] << numbers[7] << " outputs: " << (numbers[6] < numbers[7] ? trueLabel : falseLabel) << endl;
    cout << numbers[8] << operators[4] << numbers[9] << " outputs: " << (numbers[8] >= numbers[9] ? trueLabel : falseLabel) << endl;
    cout << numbers[10] << operators[5] << numbers[11] << " outputs: " << (numbers[10] <= numbers[11] ? trueLabel : falseLabel) << endl;

    return 0;
}