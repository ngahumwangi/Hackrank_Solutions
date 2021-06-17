#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // Write Your Code Here
    if (n == 1)
        printf("%s\n", "one");
    else if (n == 2)
        printf("%s\n", "two");
    else if (n == 3)
        printf("%s\n", "three");
    else if (n == 4)
        printf("%s\n", "four");
    else if (n == 5)
        printf("%s\n", "five");
    else if (n == 6)
        printf("%s\n", "six");
    else if (n == 7)
        printf("%s\n", "seven");
    else if (n == 8)
        printf("%s\n", "eight");
    else if (n == 9)
        printf("%s\n", "nine");
    else 
        printf("%s\n", "Greater than 9");
    
    return 0;
}