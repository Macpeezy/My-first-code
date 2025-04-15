#include<iostream>
using namespace std;
int main() {
   int number1;
   int number2;
   int results = 0;
   char operation;

   cout<<"Enter First Number(0-100):";
   cin>>number1;

    cout<<"please enter the operation (+,-,*,/): ";
    cin>>operation;

    cout<<"Enter second Number(0-100):";
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
