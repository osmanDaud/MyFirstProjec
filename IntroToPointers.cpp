#include <iostream>
using namespace std;
     int main(){
        //declareing a nullptr pointer
        int * pPointer = nullptr;

        int intergerVar = 5;

        pPointer = &intergerVar; //assingning the pointer to the address of an object

        cout << "intergerVal: "<<intergerVar<<endl;
        cout << "Address of intergerVal: "<<&intergerVar<<endl;

        cout << "pPointer: "<<pPointer<<endl; //outputs the address assigned to the pointer
        cout << "Address of pPointer: "<<&pPointer<<endl; //address of pointer
        return 0;

     }