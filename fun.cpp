#include "Header.h"
void generateTable(int n, const string& filename) {
    ofstream file(filename);
    if (!file) {
        cout << "������ ��� �������� �����." << endl;
        return;
    }

    srand(time(0));

    for (int i = 0; i < n; i++) {
        int num1 = rand() % 10 + 1;
        double num2 = (rand() % 60) * 0.1;
        file << num1 << " * " << num2 << endl;
    }

    file.close();
    cout << "������� ������� ������� � �������� � ���� " << filename << endl;
}
void calculateProducts(const string& inputFile, const string& outputFile) {
    ifstream file(inputFile);
    if (!file) {
        cout << "������ ��� �������� �����." << endl;
        return;
    }

    ofstream output(outputFile);
    if (!output) {
        cout << "������ ��� �������� �����." << endl;
        return;
    }

    int num1;
    char symbol;
    double num2;

    while (file >> num1 >> symbol >> num2) {
        double product = num1 * num2;
        output << product << endl;
    }

    file.close();
    output.close();
    cout << "������������ ������� ��������� � �������� � ���� " << outputFile << endl;
}