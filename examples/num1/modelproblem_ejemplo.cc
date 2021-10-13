#include <iostream>
#include <vector>
#include "hdnum.hh"

#include "modelproblem.hh"
#include "expliciteuler.hh"

int main ()
{
  typedef double Number;               // define a number type

  typedef ModelProblem<Number> Model;  // Model type
  Model model(1.0);                   // instantiate model

  typedef ExplicitEuler<Model> Solver; // Solver type
  Solver solver(model);                // instantiate solver
  solver.set_dt(0.25);                  // set initial time step

  hdnum::Vector<Number> times(10);           // store time values here
  hdnum::Vector<hdnum::Vector<Number> > states; // store states here
  times.push_back(solver.get_time());  // initial time
  states.push_back(solver.get_state()); // initial state

  while (solver.get_time()<5.0-1e-6) // the time loop
    {
      solver.step();                  // advance model by one time step
      times.push_back(solver.get_time()); // save time
      states.push_back(solver.get_state()); // and state
    }
  std::cout<<"Tiempos: "<<times<<std::endl;
  std::cout<<"Estados: "<<states<<std::endl;
  gnuplot("model_ejemplo.dat",times,states); // output model result

  return 0;
}
