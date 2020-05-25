/*
Operators

Task:
Given the meal price (base cost of a meal), tip percent (the percentage of the meal price being added as tip), and tax percent (the percentage of the meal price being added as tax) for a meal, find and print the meal's total cost.

Note: Be sure to use precise values for your calculations, or you may end up with an incorrectly rounded result!

Input Format:
    There are 3 lines of numeric input:
    The first line has a double, mealCost (the cost of the meal before tax and tip).
    The second line has an integer, tipPercent (the percentage of  being added as tip).
    The third line has an integer, taxPercent (the percentage of  being added as tax).

Output Format
Print the total meal cost, where totalCost is the rounded integer result of the entire bill ( with added tax and tip).

Sample Input
12.00
20
8

Sample Output
15

Explanation
Given:
    mealCost = 12
    tipPercent = 20
    taxPercent = 8

Calculations:
    tip = 12 * (20/100) = 2.4
    tax = 12 * (8/100) = 0.96
    totalCost = mealCost + tip + tax
              = 12 + 2.4 + 0.96
              = 15.36
    
    round(totalCost) = 15
        - round to nearest dollar and print result



We round  to the nearest dollar (integer) and then print our result, .

*/

#include <bits/stdc++.h>

using namespace std;

// Complete the solve function below.
void solve(double meal_cost, int tip_percent, int tax_percent) {
    float total_cost;

    // Find tip and tax
    double tip = meal_cost * tip_percent / 100;
    double tax = meal_cost * tax_percent / 100;

    // Find rounded total_cost 
    total_cost = round(meal_cost + tip + tax);

    // Print to 0 decimal places
    cout << fixed << setprecision(0) << total_cost;
}

int main()
{
    double meal_cost;
    cin >> meal_cost;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    /*
    This line ignores the rest of the current line, up to '\n' or EOF - whichever comes first:

    '\n' sets the delimiter, i.e. the character after which cin stops ignoring
    numeric_limits<streamsize>::max() sets the maximum number of characters to ignore. Since this is the upper limit on the size of a stream, you are effectively telling cin that there is no limit to the number of characters to ignore.
    */

    int tip_percent;
    cin >> tip_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int tax_percent;
    cin >> tax_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    solve(meal_cost, tip_percent, tax_percent);

    return 0;
}
