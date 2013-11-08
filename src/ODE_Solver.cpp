#include "ODE_Solver.hpp"

/* ****           Euler Method          **** */

EulerMethod::EulerMethod(double step_size_dt, ODE ode, double initial_time)
    :
    step_size_dt(step_size_dt),
    time_step_tn(initial_time)
{
    last_step_y = ode.initial_value();
    this->ode = ode;    
}

EulerMethod::~EulerMethod()
{

}

double EulerMethod::step()
{
    last_step_y = last_step_y + step_size_dt * ode.first_derivative(last_step_y,time_step_tn);
    time_step_tn += step_size_dt; 
    return last_step_y;
}

/* ****           Midpoint Runge-Kutta Method          **** */

MRKMethod::MRKMethod(double step_size_dt, ODE ode)
    :
    step_size_dt(step_size_dt),
    time_step_tn(0.0)
{
    last_step_y = ode.initial_value();
    this->ode = ode;
}

MRKMethod::~MRKMethod()
{

}

double MRKMethod::step()
{
    return 0;
}
/* ****           Fourth Order Runge-Kutta Method          **** */

FORKMethod::FORKMethod(double step_size_dt, ODE ode)
{

}

FORKMethod::~FORKMethod()
{

}

double FORKMethod::step()
{
    return 0;
}


