#include <iostream>
using namespace std;

   int main(){
     int * pPointer = nullptr;

     int numbersArray[3] = {10,20,30};

     pPointer = numbersArray;


     cout <<"address at pPointer: "<<pPointer<<endl;
     cout <<"address of numbersArray[0]: "<<numbersArray<<endl;

     cout <<"value at pPointer: "<<*pPointer<<endl;
     cout <<"address at ++pPointer: "<<*(++pPointer)<<endl;
     pPointer = numbersArray; //assing address of the first element to pointer
     cout <<"the value at pPointer++: "<<*(pPointer++)<<endl;
     
   return 0;
}
