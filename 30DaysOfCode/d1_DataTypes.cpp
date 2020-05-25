/*
Data Types

Theory:
    To consume the whitespace or newline between the end of a token and the beginning of the next line:

    // eat whitespace
    getline(cin >> ws, s2);
    where s2 is a string. In addition, you can specify the scale of floating-point output with the following code:

    #include <iostream>
    #include <iomanip>

    using namespace std;
    int main(int argc, char *argv[]) {
        double pi = 3.14159;
        
        // Let's say we wanted to scale this to 2 decimal places:
        cout << fixed << setprecision(2) << pi << endl;
        printf("%.2f", pi);
    }

    which produces this output:
    3.14
    3.14

Task:
    Complete the code in the editor below. The variables i, d, and s are already declared and initialized for you. You must:

    1. Declare 3 variables: one of type int, one of type double, and one of type String.

    2. Read 3 lines of input from stdin (according to the sequence given in the Input Format section below) and initialize your 3 variables.
    
    3. Use the + operator to perform the following operations:
        a. Print the sum of i plus your int variable on a new line.
        b. Print the sum of d plus your double variable to a scale of one decimal place on a new line.
        c. Concatenate s with the string you read as input and print the result on a new line.
    Note: If you are using a language that doesn't support using  for string concatenation (e.g.: C), you can just print one variable immediately following the other on the same line. The string provided in your editor must be printed first, immediately followed by the string you read as input.

    Input Format

    The first line contains an integer that you must sum with i.
    The second line contains a double that you must sum with d.
    The third line contains a string that you must concatenate with s.

    Output Format

    Print the sum of both integers on the first line, the sum of both doubles (scaled to 1 decimal place) on the second line, and then the two concatenated strings on the third line.

    Sample Input
    12
    4.0
    is the best place to learn and practice coding!
    
    Sample Output
    16
    8.0
    HackerRank is the best place to learn and practice coding!
    Explanation

    When we sum the integers 4 and 12, we get the integer 16.
    When we sum the floating-point numbers 4.0 and 4.0, we get 8.0.
    When we concatenate "HackerRank" with "is the best place to learn and practice coding!", we get HackerRank is the best place to learn and practice coding!.
*/

#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    // Declare second integer, double, and String variables.
    int i2;
    double d2;
    string s2;

    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    cin >> i2 >> d2;
    
    // Read in entire line as string
    getline(cin >> ws, s2);
    
    // Print the sum of both integer variables on a new line.
    int sum_i = i + i2;
    cout << sum_i << endl;

    // Print the sum of the double variables on a new line.
    double sum_d = d + d2;
    cout << fixed << setprecision(1) << sum_d << endl;

    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    string s_concat = s + s2;
    cout << s_concat << endl;

    return 0;
}