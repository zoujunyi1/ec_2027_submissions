#include <iostream>
#include <cmath>
using namespace std;

float convertX(float x, float y, float theta) {
    float rad = theta * 3.1415926 / 180.0;
    return x * cos(rad) - y * sin(rad);
}

float convertY(float x, float y, float theta) {
    float rad = theta * 3.1415926 / 180.0;
    return x * sin(rad) + y * cos(rad);
}

int main() {
    float x, y, theta;

    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;
    cout << "Enter theta (in degrees): ";
    cin >> theta;

    float a = convertX(x, y, theta);
    float b = convertY(x, y, theta);

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    cin.get();
cin.get();


    return 0;
}