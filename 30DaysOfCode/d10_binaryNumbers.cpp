/*
Binary Numbers

Tutorial
    Decimal to Binary Conversion
    To convert an integer from decimal to binary, repeatedly divide your base-10 number, n, by 2. The dividend at each step i should be the result of the integer division at each step (i-1). The remainder at each step of division is a single digit of the binary equivalent of n; if you then read each remainder in order from the last remainder to the first (demonstrated below), you have the entire binary number.

    This can be expressed in pseudocode as:
        while(n > 0):
            remainder = n%2;
            n = n/2;
            Insert remainder to front of a list or push onto a stack

        Print list or stack

Task
    Given a base-10 integer, n, convert it to binary (base-2). Then find and print the base-10 integer denoting the maximum number of consecutive 1's in n's binary representation.

Input Format
    A single integer, n.

Constraints
    1 <= n <= 10^6

Output Format
    Print a single base-10 integer denoting the maximum number of consecutive 1's in the binary representation of n.

Sample Input 1
    5

Sample Output 1
    1

Sample Input 2
    13

Sample Output 2
    2

Explanation
    Sample Case 1:
    The binary representation of 5 is 101, so the maximum number of consecutive 1's is 1.

Sample Case 2:
The binary representation of 13 is 1101, so the maximum number of consecutive 1's is 1.
*/
#include <bits/stdc++.h>

using namespace std;



int main()
{
    // Read in input val
    int val;
    cin >> val;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // Convert to binary and store in vector
    int i = 0;
    vector<int> bin;
    while(val > 0) {
        bin.push_back(val%2);
        val = val/2;
        i++;
    }

    // Find consecutive 1's in binary number and find max consecutive 1's
    int max_consec = 0;
    int consec = 0;
    for(int j = 0; j < i; j++) {
        // For first digit since can't look at index before 0
        if(j == 0 && bin[j] == 1) {
            consec++;
            max_consec = consec;
        } else {
            // For two consecutive 1's
            if(bin[j-1] == 1 && bin[j] == 1) {
                consec++;
                // Check if this is new max
                if(max_consec < consec) {
                    max_consec = consec;
                }
            // If found just one 1
            } else if (bin[j-1] == 0 && bin[j] == 1) {
                consec = 1;
                // Update max if needed
                if(max_consec < consec) {
                    max_consec = consec;
                }
            // Didn't find a 1
            } else {
                consec = 0;
            }
        }
    }

    // Print out maximum number of consecutive 1's
    cout << max_consec << endl;
    
    return 0;
}
