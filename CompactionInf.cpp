#include <iostream>
#include <fstream>

using namespace std;

void createBinaryFile(const string& inputFileName, const string& outputFileName) {
    ifstream inputFile(inputFileName);
    ofstream outputFile(outputFileName, ios::binary);

    if (!inputFile.is_open()) {
        cerr << "Error opening file " << inputFileName << endl;
        return;
    }

    if (!outputFile.is_open()) {
        cerr << "Error creating file " << outputFileName << endl;
        return;
    }

    cout << "Start creating file \"" << outputFileName << "\" from file \"" << inputFileName << "\"" << endl;

    int size;
    inputFile >> size;

    outputFile.write(reinterpret_cast<char*>(&size), sizeof(int));

    int number;
    while (inputFile >> number) {
        outputFile.write(reinterpret_cast<char*>(&number), sizeof(int));
    }

    cout << "File \"" << outputFileName << "\" created!" << endl;
}

void testBinaryFile(const string& fileName) {
    ifstream file(fileName, ios::binary);

    if (!file.is_open()) {
        cerr << "Error opening file " << fileName << endl;
        return;
    }

    cout << "Start testing file \"" << fileName << "\"!" << endl;

    int size;
    file.read(reinterpret_cast<char*>(&size), sizeof(int));
    cout << "> Size: " << size << endl;

    cout << "> Data:" << endl;
    int number;
    for (int i = 0; i < size; ++i) {
        file.read(reinterpret_cast<char*>(&number), sizeof(int));
        cout << number << endl;
    }

    cout << "End testing file \"" << fileName << "\"" << endl;
}

int main() {
    createBinaryFile("data.txt", "data.bin");
    cout << endl;
    testBinaryFile("data.bin");
}