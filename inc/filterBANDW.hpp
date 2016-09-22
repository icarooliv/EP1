#ifndef FBANDW_HPP
#define FBANDW_HPP
#include "filter.hpp"

#include <string>

using namespace std;

class Bandw : public Filter {
protected:
   Filter();  // Metodo Construtor
   ~Filter(); // Metodo Destrutor

   void setApply();
};

#endif
