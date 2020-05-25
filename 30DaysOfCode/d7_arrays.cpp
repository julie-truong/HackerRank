/*
Arrays
    If you want to create an array whose size is unknown at compile time (i.e., being read as input), you need to create a pointer to whatever data type you'll be declaring your array as (e.g., char, int, double, etc.). Then you must use the new operator to set aside the space you need for your array. The example below shows how to create an array of type DataType and unknown size n that is read from stdin.

    // array size
    int n; 
    cin >> n;

    // create array of unknown size n
    DataType* arrayName = new DataType[n]; 

Task
Given an array, A, of N integers, print A's elements in reverse order as a single line of space-separated numbers.

Input Format
The first line contains an integer, N (the size of our array).
The second line contains N space-separated integers describing array A's elements.

Constraints
1 <= N <= 1000
1 <= A_i <= 10000, where A_i is the ith integer in the array.
Output Format

Print the elements of array A in reverse order as a single line of space-separated numbers.

Sample Input
4
1 4 3 2

Sample Output
2 3 4 1
*/

/*
// Not sure what this is but was in editor

#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split_string(arr_temp_temp);

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
*/

// One-liner from discussion:
// copy(arr.rbegin(), arr.rend(), ostream_iterator(cout, " "));

// My Solution:
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int* numbers = new int[n];

    int val;
    for(int i = 0; i < n; i++) {
        cin >> val;
        numbers[i] = val;
    }

    for(int j = n-1; j >= 0; j--) {
        cout << numbers[j] << " ";
    }

    cout << endl;
    
    return 0;
}
