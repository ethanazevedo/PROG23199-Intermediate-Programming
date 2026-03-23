#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ofstream myFile("filename.txt");
    myFile << "Hello, world!";
    myFile.close();

    return 0;
}
