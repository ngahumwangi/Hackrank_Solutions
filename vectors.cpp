#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int num_of_arrays, num_of_queries, array_lengh, array_values, query_value_1, query_value_2;

    vector<vector<int>> vec;
    vector<int> temp;


    cin >> num_of_arrays >> num_of_queries;

    //read the values of arraries
    for (int i = 0; i < num_of_arrays; i++) {
        cin >> array_lengh;

        for (int j = 0; j < array_lengh; j++) {
            cin >> array_values;
            temp.push_back(array_values);
        }
        //Creating 2D array
        vec.push_back(temp);
        temp.resize(0);
    }
    /******Queries section*******/
    for (int i = 0; i < num_of_queries; i++) {
        cin >> query_value_1 >> query_value_2;
        cerr << query_value_1 << query_value_2;
        temp.push_back(vec[query_value_1][query_value_2]);
    }
    //Print output
    for (int i = 0; i < num_of_queries; i++) {
        cout << temp[i] << endl;
    }

    return 0;
}
