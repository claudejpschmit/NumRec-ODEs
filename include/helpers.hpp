#pragma once

#include "Preamble.hpp"

class ODE {
        
public:
    virtual double first_derivative(double y, double t);
    virtual double initial_value();
    virtual double exact_solution(double t);

protected:
    double initial_time;
};

class PolynomialODE : public ODE {
    
public:
    PolynomialODE(double initial_time);
    //~PloynomialODE();

    double first_derivative(double y, double t);
    double initial_value();
    double exact_solution(double t);

};
