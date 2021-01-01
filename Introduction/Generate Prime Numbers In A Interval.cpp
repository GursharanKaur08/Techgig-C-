/* Generate Prime Numbers In A Interval 
You just need to take two number as input from stdin and you need to find prime numbers between those two numbers and print them.

Input Format
You will be taking two numbers as an input from stdin one on each line respectively.

Constraints
1 <= A, B <= 10^4

Output Format
You need to print the prime numbers one on each line to the stdout.*/

#include <iostream>
using namespace std;
int main() 
{
    int low, high, i;
    bool isPrime = true;

    cin >> low; 
	cin >> high;

    while (low < high) {
        isPrime = true;
        if (low == 0 || low == 1) {
            isPrime = false;
        }
        else {
            for (i = 2; i <= low / 2; ++i) {
                if (low % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
        
        if (isPrime)
            cout << low << "\n";

        ++low;
    }

    return 0;
}
