/*
Para el ejercicio anterior, Abrir el archivo y mostrar las frases x pantalla, con cada frase
en una línea, con Interlineado.
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream inputFile;
    inputFile.open("QuotesOfBjarne.txt");

    if (!inputFile) throw "Error opening file";

    while (!inputFile.eof())
    {
        string line;
        getline(inputFile, line);
        cout << line << endl;
        cout << endl;
    }

    inputFile.close();

    return 0;
}