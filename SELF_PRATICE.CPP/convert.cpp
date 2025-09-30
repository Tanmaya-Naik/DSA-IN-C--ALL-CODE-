#include <iostream>
#include <string>

using namespace std;

int main() {
    string input = "42";  // Example input string representing an integer
    int num = stoi(input); // Convert string to integer using stoi()
    cout << "The number is: " << num << endl;
    return 0;
}
