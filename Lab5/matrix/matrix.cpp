//
// Created by Paulina on 22/05/2019.
//

#include <regex>
#include <string>
#include <iterator>
#include <algorithm>
#include <vector>
#include <iostream>
#include "matrix.h"

std::regex Matrix::ROW_REGEX("[^0-9i\\s+]");

Matrix::Matrix() : Matrix(0, 0) {}

Matrix::~Matrix() {
    delete this->matrix;
}

Matrix::Matrix(int width, int height) {
    Init(width, height);
    Fill(std::complex<double>(0, 0));
}

Matrix::Matrix(const Matrix &source) {
    Init(width, height);
    Copy(source);
}

void Matrix::Init(int width, int height) {
    this->width = width;
    this->height = height;
    this->matrix = new std::complex<double>[width * height];
}

Matrix::Matrix(const std::string &matrix) {
    auto rows = ExtractRowsFromInputString(matrix);

    int height = rows.size();
    int width = std::count(rows.at(0).begin(), rows.at(0).end(), ' ') + 1;
    Init(width, height);

    for (int y = 0; y < this->height; y++) {
        auto numbers = ExtractNumbersFromRow(rows.at(y));

        for (int x = 0; x < this->width; x++) {
            this->matrix[y * this->width + x] = numbers.at(x);
        }
    }
}

void Matrix::Fill(const std::complex<double> &value) {
    for (int y = 0; y < this->height; y++) {
        for (int x = 0; x < this->width; x++) {
            this->matrix[y * this->width + x] = value;
        }
    }
}

void Matrix::Copy(const Matrix &source) {
    for (int y = 0; y < this->height; y++) {
        for (int x = 0; x < this->width; x++) {
            this->matrix[y * this->width + x] = source.matrix[y * this->width + x];
        }
    }
}

std::vector<std::string> Matrix::ExtractRowsFromInputString(const std::string &input) {
    std::string buffer;
    std::vector<std::string> rows;
    std::istringstream inputStream(input);

    while (std::getline(inputStream, buffer, ';')) {
        buffer = Trim(std::regex_replace(buffer, Matrix::ROW_REGEX, ""));
        rows.push_back(buffer);
    }

    return rows;
}

std::complex<double> Matrix::TranslateStringToNumber(const std::string &input) {
    int iIndex = input.find('i');

    if (iIndex != std::string::npos) {
        return {
                std::stod(input.substr(0, iIndex), nullptr),
                std::stod(input.substr(iIndex + 1, input.length()))
        };
    }

    return { std::stod(input), 0 };
}

std::vector<std::complex<double>> Matrix::ExtractNumbersFromRow(const std::string &row) {
    std::string buffer;
    std::vector<std::complex<double>> numbers;
    std::istringstream inputStream(row);

    while (std::getline(inputStream, buffer, ' ')) {
        numbers.push_back(TranslateStringToNumber(buffer));
    }

    return numbers;
}

std::string Matrix::Trim(const std::string &text) {
    std::string::const_iterator iterator = text.begin();
    std::string::const_reverse_iterator reverseIterator = text.rbegin();

    while (iterator != text.end() && isspace(*iterator)) {
        iterator++;
    }

    while (reverseIterator.base() != iterator && isspace(*reverseIterator)) {
        reverseIterator++;
    }

    return std::string(iterator, reverseIterator.base());
}

void Matrix::Print() const {
    for (int y = 0; y < this->height; y++) {
        for (int x = 0; x < this->width; x++) {
            std::cout << this->matrix[y * this->width + x] << " ";
        }
        std::cout << std::endl;
    }
}

Matrix *Matrix::Add(const Matrix *matrix) const {
    if (this->width != matrix->width || this->height != matrix->height) {
        throw std::invalid_argument("Cannot add matrices with different dimensions!");
    }

    auto sumMatrix = new Matrix(this->width, this->height);

    for (int y = 0; y < this->height; y++) {
        for (int x = 0; x < this->width; x++) {
            sumMatrix->matrix[y * this->width + x] =
                    this->matrix[y * this->width + x] + matrix->matrix[y * this->width + x];
        }
    }

    return sumMatrix;
}
