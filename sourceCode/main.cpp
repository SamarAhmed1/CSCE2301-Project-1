#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <regex>
using namespace std;

struct verilogVariable {
    string name;
    bool value = 0;
};

int main()
{
    ifstream infile("case5.v"); // getting file
    // if theres an error in the file, abort code
    if (!infile) {
        cout << "Error opening file!" << endl;
        exit(0);
    }
    // declaring variables
    string line, temp;
    vector<verilogVariable> varArray;
    // storing what is inside the brackets to be used as variables
    getline(infile, line, '(');
    getline(infile, line, ')');
    // getting the words input and output and removing them
    size_t inputPos = line.find("input");
    if (inputPos != string::npos) line.erase(inputPos, 5);

    size_t outputPos = line.find("output");
    if (outputPos != string::npos) line.erase(outputPos, 6);

    // Remove spaces from the string
    line.erase(remove(line.begin(), line.end(), ' '), line.end());
    line.erase(remove(line.begin(), line.end(), '\n'), line.end());
    cout << line << endl; // testing
    stringstream ss(line);
    // adding variables in the array
    while (getline(ss, temp, ',')) {
        verilogVariable x; x.name = temp;
        varArray.push_back(x);

    }
    // testing
    for (int i = 0; i < varArray.size(); i++) {
        cout << "Variable: " << varArray[i].name << endl;
    }
    infile.close();
}
