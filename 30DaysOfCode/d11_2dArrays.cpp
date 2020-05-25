/*
2D Arrays

Context
    Given a (6x6) 2D Array, A:
        1 1 1 0 0 0
        0 1 0 0 0 0
        1 1 1 0 0 0
        0 0 0 0 0 0
        0 0 0 0 0 0
        0 0 0 0 0 0
    We define an hourglass in A to be a subset of values with indices falling in this pattern in A's graphical representation:
        a b c
          d
        e f g
    There are 16 hourglasses in A, and an hourglass sum is the sum of an hourglass' values.

Task
    Calculate the hourglass sum for every hourglass in A, then print the maximum hourglass sum.

Input Format
    There are 6 lines of input, where each line contains 6 space-separated integers describing 2D Array A; every value in A will be in the inclusive range of -9 to 9.

Constraints
    -9 = A[i][j] <= 9
    0 <= i, j <= 5

Output Format
    Print the largest (maximum) hourglass sum found in A.

Sample Input
    1 1 1 0 0 0
    0 1 0 0 0 0
    1 1 1 0 0 0
    0 0 2 4 4 0
    0 0 0 2 0 0
    0 0 1 2 4 0

Sample Output
    19

Explanation
    A contains the following hourglasses:
        1 1 1   1 1 0   1 0 0   0 0 0
          1       0       0       0
        1 1 1   1 1 0   1 0 0   0 0 0

        0 1 0   1 0 0   0 0 0   0 0 0
          1       1       0       0
        0 0 2   0 2 4   2 4 4   4 4 0

        1 1 1   1 1 0   1 0 0   0 0 0
          0       2       4       4
        0 0 0   0 0 2   0 2 0   2 0 0

        0 0 2   0 2 4   2 4 4   4 4 0
          0       0       2       0
        0 0 1   0 1 2   1 2 4   2 4 0

    The hourglass with the maximum sum (19) is:
        2 4 4
          2
        1 2 4



#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    // Find hourglasses and store into a 2D-array
    // Initialise hourglasses array - 16 hourglasses each with 7 values
    int maxHourglass[7];
    int hourglass[7];
    int maxSum = 0;
    int sum;

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++) {
            // Find sum of hourglass values
            sum = arr[i][j] + arr[i][j+1] + arr[i][j+2] 
            + arr[i+1][j+1] + arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];
            
            sum = 0;
            int index = 0;
            for(int k = i; k < (i+3); k++) {
                for(int l = j; l < (j+3); l++) {
                    if((k == (i+1) && l == j) || (k == (i+1) && l == (j+2))) {
                        sum = sum;
                    } else {
                        sum += arr[k][l];
                        hourglass[index] = arr[k][l];
                        index++;
                    }
                }
            }
            


            if(maxSum < sum) {
                maxSum = sum;
                
                cout << "Max Hourglass: " << endl;
                for(int m = 0; m < 7; m++) {
                    maxHourglass[m] = hourglass[m];
                    cout << maxHourglass[m] << ' '; 
                }
                cout << endl;
                
               
                //copy(begin(hourglass), end(hourglass), begin(maxHourglass));
               
            }
        }
    }

    cout << maxSum << endl;
    return 0;
}
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    // Find sums of each hourglass and find max
    // Set max to be the minimum possible number using constraints
    int maxSum = -9 * 7;
    int sum = 0;

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++) {
            sum = arr[i][j] + arr[i][j+1] + arr[i][j+2] 
            + arr[i+1][j+1] +arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];

            if(maxSum < sum) {
                maxSum = sum;
            }
            sum = 0;
        }
    }

    // Print out max
    cout << maxSum << endl;
    return 0;
}
