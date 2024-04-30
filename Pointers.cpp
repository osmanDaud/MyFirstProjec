#include <iostream>
using namespace std;
     int main(){
      int firstValue;
      int secondValue;

        //declareing a nullptr pointer
        int * pPointer = nullptr;

        pPointer = &firstValue;
        *pPointer = 10; //indirectly

        pPointer = &secondValue;
        *pPointer= 20; //indirectly 

       /*the values of the firstValue will be 10
       while that of the secondValue will be 20*/

        cout << "firstValue is: "<<firstValue<<endl;
        cout << "secondValue: "<<secondValue<<endl;

        return 0;

     }