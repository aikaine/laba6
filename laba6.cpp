#include "Header.h"



int main() {
    setlocale(LC_ALL, "ru");
    const string inputFilename = "input.txt";
    const string outputFilename = "output.txt";
    int n = 5; 


    generateTable(n, inputFilename);
    calculateProducts(inputFilename, outputFilename);

    return 0;
}