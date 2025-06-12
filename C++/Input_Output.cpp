#include<iostream>
#include<string>
#include<algorithm>  // for transform and remove
using namespace std;

// Helper function to process name (remove spaces and convert to lowercase)
string normalize(string str) {
    // Remove spaces
    str.erase(remove(str.begin(), str.end(), ' '), str.end());

    // Convert to lowercase
    transform(str.begin(), str.end(), str.begin(), ::tolower);

    return str;
}



int main() {
    string name;
    string R_name = "fahan al mahmud";

    cout << "Enter Your name: ";
    getline(cin, name);

    // Normalize both strings
    string normalized_input = normalize(name);
    string normalized_reference = normalize(R_name);

    if (normalized_input == normalized_reference)
        cout << "You can Enter" << endl;
    else
        cout << "You can't Enter" << endl;

    return 0;
}
