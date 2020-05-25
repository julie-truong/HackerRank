/* 
Recursion 3

Task
    Write a factorial function that takes a positive integer, N as a parameter and prints the result of N! (N factorial).

Input Format
    A single integer, N (the argument to pass to factorial).

Constraints
    2<= N <= 12

Output Format
    Print a single integer denoting N!.

Sample Input
    3

Sample Output
    6
*/

#include <bits/stdc++.h>

using namespace std;

// Complete the factorial function below.
int factorial(int n) {
    int result;
    if (n == 1) {
        result = 1;
    } else {
        result = n * factorial(n-1);
    }
    return result;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = factorial(n);

    fout << result << "\n";

    fout.close();

    return 0;
}
