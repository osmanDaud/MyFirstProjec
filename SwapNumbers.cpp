#include <iostream>
using namespace std;
int varA;
int varB;
int a,b;
int SwapNumbers(int a, int b);
   int main(){
int varA = 25;
int varB = 100;
cout << "varA before swap: " << varA << endl; //varA is 25
cout << "VarB before swap: " << varB << endl; //varB is 100
   SwapNumbers(varA, varB);
cout << "varA after swap: " << varA << endl; //varA is 100
cout << "VarB after swap: " << varB << endl; //varB is 25
return 0;
}
int SwapNumbers(int a, int b){
   varA = b;
   varB = a;

   return varA,varB; 
  
}
