#include<iostream>
using namespace std;
int main() {
   float number1;
   float number2;
   float results= 0.0;
   char operation;

   cout<<"Enter First Number:";
   cin>>number1;

    cout<<"please enter the operation (+,-,*,/): ";
    cin>>operation;

    cout<<"Enter second Number:";
    cin>>number2;
    //Performing calculations
    switch(operation) {
        case '+':
            results = number1 + number2;
            break;
        case '-':
            results = number1 - number2;
            break;
        case '*':
            results = number1 * number2;
            break;
        case '/':
            results = number1 / number2;
            break;
        default: ;
    }
   cout << "results " << results << endl;
  return 0;
}
