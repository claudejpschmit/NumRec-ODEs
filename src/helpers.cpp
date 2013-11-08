#include "helpers.hpp"

double ODE::first_derivative(double y, double t)
{
}

double ODE::initial_value()
{
}

double ODE::exact_solution(double t)
{
}

/* ****      Polynomial      **** */


PolynomialODE::PolynomialODE(double initial_time)
{
    this->initial_time = initial_time;
}
/*
PolynomialODE::~PloynomialODE()
{

}
*/

double PolynomialODE::first_derivative(double y, double t)
{
    return 3 * t * t - 6 * t + 1;
}
    
double PolynomialODE::initial_value()
{
    return exact_solution(initial_time);
}

double PolynomialODE::exact_solution(double t)
{
    return 1 + t - 3 * t * t + t * t * t;
}
