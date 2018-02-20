// utility.cpp

// IN THIS FILE, define any of your OWN functions you may need to 
// solve the problems.    


// You will need to include the function prototype in "utility.h" and
// then be sure to  #include "utility.h" in the file where you use
// these functions
#include <cmath>
using namespace std;

bool doubleApproxEqual(double a, double b, double tolerance){
  return fabs(a - b) < tolerance;
}
