#ifndef FILTERMEDIA_HPP
#define FIILTERMEDIA_HPP
#include "filter.hpp"

#include <string>

using namespace std;

class Media : public Filter {
protected:
   Filter();  // Metodo Construtor
   ~Filter(); // Metodo Destrutor

   void setApply();
};

#endif
