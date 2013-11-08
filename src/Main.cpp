#include "Preamble.hpp"
#include "ODE_Solver.hpp"
#include "helpers.hpp"

int main(int argc, char *argv[])
{
    PolynomialODE pODE(0.0);
    double dt = 0.1;
    EulerMethod euler(dt, pODE, 0.0);
    
    ofstream output, exactsol;
    output.open("Euler.txt");
    exactsol.open("Exact.txt");

    for (int i = 0; i < 100; ++i) {
        
        exactsol << pODE.exact_solution(euler.time_step_tn) << endl;
        output << euler.step() << endl;
    }

    output.close();
    exactsol.close();

    return 0;
}
