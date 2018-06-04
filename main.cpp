//main.cpp
#include "Cal.h"
#include <iostream>
#include<string>

using namespace std;

int main(){
        char op;
        float a, b;
        
        cout <<"Enter operator: ";
        cin >> op;

        cout << "Enter the first number: ";
        cin >> a;

        cout << "Enter the second number: ";
        cin >> b;

        //Cal(x, y);

        switch(op)
        {
                case '+':
                        cout << "The sum is: ";
                        cout << Add(a,b)<< endl;
                        break; 
                case '-':
                        cout << "The Difference is: ";
                        cout << Sub(a,b)<< endl;
                        break; 
                case '*':
                        cout << "The product is: ";
                        cout << Mult(a,b)<< endl;
                        break; 
                case '/':
                        cout << "The quotent is: ";
                        cout << Div(a,b)<< endl;
                        break;
                default:
                        cout << "ERROR! operator not correct"<< endl;
                        break;
          }
        return 0;
}
