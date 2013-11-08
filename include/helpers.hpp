#pragma once

#include "Preamble.hpp"

class ODE {
        
public:
    virtual double first_derivative(double y, double t) = 0;
    virtual double initial_value() = 0;
    virtual double exact_solution(double t) = 0;
};
