//https://www.youtube.com/watch?v=7oG0jxN3THI
include <iostream>
#include <string>

using namespace std;
void showArray(int lead[]);

class myClass {
public:
    string name;
    int rollNumber;
    void print(string name, int rollNumber);
};
void myClass::print(string name, int rollNumber) {
    cout << "Name is = " << name << "Roll number is = " << rollNumber << endl;
}

int main() {
    int rollNumber = 101;
    switch (rollNumber) {
        case 1011:
            cout << "RollNumber 101" << endl;
            break;
        case 102:
            cout << "RollNumber 101" << endl;
            break;
        case 103:
            cout << "RollNumber 101" << endl;
            break;
        case 104:
            cout << "RollNumber 101" << endl;
            break;
        case 105:
            cout << "RollNumber 101" << endl;
            break;
        default:
            cout << "RollNumber not Exist" << endl;
            break;
    }

    cout << " " << endl;
    cout << "--------While loop-------" << endl;
    cout << " " << endl;

    int i = 1;
    while (i < 10) {
        cout << "total number " << i << endl;
        i++;
    }


    cout << " " << endl;
    cout << "--------Do While loop-------" << endl;
    cout << " " << endl;

    int j = 1;
    do {
        cout << "do while " << j  <<  endl;
        j++ ;
    }while (j <= 5);


    cout << " " << endl;
    cout << "--------For loop-------" << endl;
    cout << " " << endl;

    for(int f = 5; f >= 0; --f) {
        cout << "For" << f << endl;
    }

    cout << " " << endl;
    cout << "--------For array-------" << endl;
    cout << " " << endl;

    int firstArray[] = {10,20,30,40,50};

    for(int l = 0; l < 5; l++) {
        cout << "Number of array " << l+1 << "." << " " << firstArray[l] << endl;
    }


    cout << " " << endl;
    cout << "--------2D Array-------" << endl;
    cout << " " << endl;


    int dArray[5][3] = {
            {10,20,30},
            {10,20,30},
            {10,20,30},
            {10,20,30},
            {10,20,30},
    };

    for(int row = 0; row < 5; row++) {
         for(int col = 0 ; col < 3; col++) {
             cout << dArray[row][col] << "   ";
         }
         cout << endl;
    }

    int methodArray[] = {11,22,33,44,55};

    showArray(methodArray);

    cout << " " << endl;
    cout << "--------print value with class object-------" << endl;
    cout << " " << endl;


    myClass mc;
    mc.print("Farhan", 101);
}

void showArray(int lead[]){
    for(int x = 0; x < 5; x++) {
        cout << "value to method array" << lead[x] << endl;
    }
}

