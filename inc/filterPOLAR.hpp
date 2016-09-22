#ifndef FILTERPOLAR_HPP
#define FILTERPOLAR_HPP
#include "filter.hpp"

#include <string>

using namespace std;

class Polar : public Filter {
protected:
   Filter();  // Metodo Construtor
   ~Filter(); // Metodo Destrutor

   void setApply();
};

#endif
