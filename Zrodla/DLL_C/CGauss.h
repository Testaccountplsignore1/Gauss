#include <string>


void gaussMain(std::string filename);
bool gaussLoad(double ***A, std::string, int &size);
void gaussSave(double **A, std::string, int size);
bool gaussSolve(double **A, int size);