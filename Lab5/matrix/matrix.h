//
// Created by Paulina on 22/05/2019.
//

#ifndef MATRIX_MATRIX_H
#define MATRIX_MATRIX_H

#include <regex>
#include <vector>
#include <memory>
#include <complex>

class Matrix {
private:
    int width;
    int height;
    static std::regex ROW_REGEX;

    void Init(int width, int height);
    void Copy(const Matrix &source);
    void Fill(const std::complex<double> &value);
    std::complex<double> *matrix;

    std::string Trim(const std::string &text);
    std::complex<double> TranslateStringToNumber(const std::string &input);
    std::vector<std::string> ExtractRowsFromInputString(const std::string &input);
    std::vector<std::complex<double>> ExtractNumbersFromRow(const std::string &row);

public:
    Matrix();
    ~Matrix();
    Matrix(int width, int height);
    Matrix(const Matrix &source);
    Matrix(const std::string &matrix);
    Matrix *Add(const Matrix *matrix) const;
    void Print() const;
};

#endif //MATRIX_MATRIX_H
