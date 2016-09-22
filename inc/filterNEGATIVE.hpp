#ifndef FILTERNEGATIVE_HPP
#define FFILTERNEGATIVE_HPP
#include "filter.hpp"

#include <string>

using namespace std;

class Negative : public Filter {
protected:
   Filter();  // Metodo Construtor
   ~Filter(); // Metodo Destrutor

   void setApply();
};

#endif
