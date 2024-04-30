#include <iostream>
using namespace std;
     int main(){
      int numbersArray[5];
      

        //declareing a nullptr pointer
        int * pPointer = nullptr;

        pPointer = numbersArray; //the pointer pointes to the first element of the array

        *pPointer = 10; //assign the first element the value of 10

        pPointer++;//incrementing the pointer to point to the second element in the array
        *pPointer = 20; //second element will be a 20

        pPointer = &numbersArray[2]; //pointer points to the 3rd element
        *pPointer = 30;

        pPointer = numbersArray + 3; //pointer now ointes to the 4th element
        *pPointer= 40;

        pPointer = numbersArray;

        *(pPointer +4 ) = 50;

        for (int n = 0; n < 5; n++)
        {
           cout << numbersArray[n] << ", ";
        }


        return 0;

     }