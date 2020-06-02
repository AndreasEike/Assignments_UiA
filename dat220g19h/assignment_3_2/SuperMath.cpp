//
// Created by Andreas on 08.09.2019.
//

#include <cmath>

double add(double num1, double num2) {
    return num1+num2;
}

double subtract(double num1, double num2) {
    return num1-num2;
}

double multiply(double num1, double num2) {
    return round((num1 * num2)*100)/100;
}

double divide(double num1, double num2) {
    return round((num1 / num2) * 100) / 100;
}