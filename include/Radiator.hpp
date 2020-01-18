#pragma once

#include <string>
#include <vector>

extern bool checkErrorA(int ac, char **av, int n, int ir, int jr);
extern bool checkErrorB(int ac, char **av, int n, int ir, int jr,
    int i, int j);
extern void printVecResult(const std::vector<double> &matrixX);
extern void printShortResult(const std::vector<double> &matrixX,
    int n, int j, int i);
extern void printCoeff(const std::vector<std::vector<double>> &matrixA);
extern void radiator(int n, int nPow, int jr, int ir, int i, int j,
    const std::string &options);
