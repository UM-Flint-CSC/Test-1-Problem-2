// Write a program to enter a natural number and check to see if it 
// is a special number or not. This number occurs when the sum of 
// the factorials of each digit is equal to the number.  

// Example 1: 145 = 1! + 4! + 5!
//            145 = 1  + 24 + 120
         
// Example 2: 40585 = 4! + 0! + 5! + 8! + 5!
//            40585 = 24 + 0  + 120 + 40320 + 120
             
// Example 3: 176 = 1! + 7! + 6!
//            176 ≠ 1 + 5040 + 720 = (5761)

#include <iostream>
using namespace std;

int main() {
    int number,copy,remainder,sum=0, fac;

    cout << "Enter a natural number to test: ";
    cin >> number;
    copy = number;
    // Your solution code goes here


    return 0;
}
