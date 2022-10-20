#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
    string input;
    string output;
    string line;
    string sourceFile = "filename.txt"; //Change this to the name of your file and write what you are looking for
    string searchFile = "filename.txt"; //Change this to the name of your file and write what you are looking for
    ifstream sourceFileStream(sourceFile);
    ifstream searchFileStream(sourceFile);

    if (sourceFileStream.is_open()) {
        while (getline(sourceFileStream, line)) {
            input = line;
        }
        sourceFileStream.close();
    }

    if (searchFileStream.is_open()) {
        while (getline(searchFileStream, line)) {
            output = line;
            if (output == input) {
                cout << "Object Found : " << output << endl;
                cout << "Press any key to exit..." << endl;
                getchar();
            }
        }
        searchFileStream.close();
    }
    return 0;
}