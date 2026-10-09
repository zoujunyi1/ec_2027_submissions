#include <iostream>
#include <string>
using namespace std;


struct Student {
    string name;   
    int id;       
    float score;   
};

int main() {
    Student stu[5];         
    Student *p = stu;       

    for (int i = 0; i < 5; i++) {
        cout << "Enter the name of student " << i + 1 << ": ";
        cin >> (p + i)->name;
        cout << "Enter the score of student " << i + 1 << ": ";
        cin >> (p + i)->score;
        (p + i)->id = i + 1;   
    }

    
    float sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += (p + i)->score;
    }
    float average = sum / 5;

    cout << "\nThe average score of the 5 students is: " << average << endl;

    return 0;
}