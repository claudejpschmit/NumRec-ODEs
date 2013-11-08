#pragma once

#include "Preamble.hpp"
#include "helpers.hpp"

/** \brief
 *
 *
 */

class StepEngine {

public:
    virtual double step() = 0;

protected: 
    ODE ode; 
};

/** \brief Euler Method 
 *
 *
 */

class EulerMethod : public StepEngine {
    
public:
    EulerMethod(double step_size_dt, ODE ode);
    ~EulerMethod();
    double step();
    
private:
    /// y(t_{n-1}) stores the result of the last iteration
    double last_step_y;
    /// \Delta t is the stepsize between iterations
    double step_size_dt;
    /// t_n gives the current time
    double time_step_tn; 
};

/** \brief Midpoint Runge-Kutta Method
 *
 *
 */

class MRKMethod : public StepEngine {
    
public:
    MRKMethod(double step_size_dt, ODE ode);
    ~MRKMethod();
    double step();

private:
    double t_midpoint; 
    double y_midpoint;
    /// y(t_{n-1}) stores the result of the last iteration
    double last_step_y;
    /// \Delta t is the stepsize between iterations
    double step_size_dt;
    /// t_n gives the current time
    double time_step_tn; 

};

/** \brief Fourth Order Runge-Kutta Method 
 *
 *
 */

class FORKMethod : public StepEngine {
    
public:
    FORKMethod(double step_size_dt, ODE ode);
    ~FORKMethod();
    double step();

};
