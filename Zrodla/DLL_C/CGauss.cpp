#include "CGauss.h"
#include <iostream>
#include <fstream>
#include <string>
#include <utility>
#include <iomanip>

using namespace std;
//TEST CZY DZIALA W DOBRYM MIEJSCU

void gaussMain(string filename )
{
	double **A = NULL;
	int size;
	if(gaussLoad(&A, filename, size))
	{
		if (gaussSolve(A, size))
		{
			gaussSave(A, filename, size);
		}
	}

	

}

//Rozwiazywanie ukladu rownan metoda gaussa-jordana
bool gaussSolve(double **A,int size)
{
	double division;
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size;j++)
			if (i != j)
			{
				division = A[j][i] / A[i][i];
				for (int k = 0; k <= size; k++)
					A[j][k] = A[j][k] - A[i][k] * division;
			}
	for (int i = 0; i < size; i++)
	{
		A[i][size] = A[i][size] / A[i][i];
		A[i][i] = A[i][i] / A[i][i];
	}
		
	return true;
}
//Wczytywanie danych z pliku
bool gaussLoad(double ***A, string filename,int &size)
{
	/*ZABEZPIECZYC WCZYTYWANIE NA LITOSC BOSKA 
	*/
	fstream file;
	file.open(filename);
	if (file.is_open())
	{
		file >> size;
		*A = new double*[size];
		for (int i = 0; i<size; i++)
		{
			(*A)[i] = new double[size+1];
			for (int j = 0; j<=size; j++)
			{
				file >> (*A)[i][j];
			}
		}
		file.close();
		return true;
	}
	else
	{
		return false;
	}
}
//Zapisywanie wynikow do pliku
void gaussSave(double **A, string filename, int size)
{
	fstream file;
	file.open("result.txt", ios::out | ios::trunc);
	if (file.is_open())
	{
		for (int j = 0; j < size; j++)
		{
			for (int i = 0; i <= size; i++)
			{
				file << " " << std::fixed << std::setprecision(10) << A[j][i];
			}
			file << "\n";
		}
		file.close();
	}
}