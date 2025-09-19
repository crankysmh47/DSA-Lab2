#include<iostream>
using namespace std;
void analyze_pointer(int *ptr){
    cout<<"The address pointed by the pointer is: "<<ptr<<endl;
    cout<<"The value pointed by the pointer is: "<<*ptr<<endl;
    return;
}
int main(){


    int iValue=5;
    analyze_pointer(&iValue);

    // Allocate an int on the heap (with the new operator).
    int* heapIntPtr = new int;

    // Assign a value to it.
    *heapIntPtr = 10;

    // Pass it to analyze_pointer.
    analyze_pointer(heapIntPtr);

    // Free the allocated memory to prevent a memory leak.
    delete heapIntPtr;

    return 0;
}
