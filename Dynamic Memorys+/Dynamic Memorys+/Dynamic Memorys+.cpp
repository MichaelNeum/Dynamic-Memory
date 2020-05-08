
#include <iostream>
#include <new>
#include "Header.h"

using namespace std;

int main()
{
    int ArraySize;
    int height;
    int width;
    int* DynamicArray;
    DynamicClass* DynamicObject;

    cout << "How big is the array: ";
    cin >> ArraySize;

    DynamicArray = new (nothrow) int[ArraySize];
    if (DynamicArray == nullptr) {
        cout << "Failed to assign memory";
        return 0;
    }
    else {
        cout << "Type in " << ArraySize << " numbers:" << endl;
        for (int i = 0; i < ArraySize; i++) {
            cin >> DynamicArray[i];
        }
        cout << "You have entered: " << endl;
        for (int i = 0; i < ArraySize; i++) {
            cout << DynamicArray[i] << " ";
        }
        delete[] DynamicArray;
    }

    cout << "\nType in height and width of a rectangle:" << endl;
    cin >> height;
    cin >> width;
    DynamicObject = new DynamicClass(height, width);
    int area = DynamicObject->Area();
    cout << "The Area of the rectangel is: " << area << endl;
    delete DynamicObject;
    return 0;
}

