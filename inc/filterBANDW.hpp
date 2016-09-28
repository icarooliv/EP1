#ifndef FILTERBANDW_HPP
#define FILTERBANDW_HPP
#include "filter.hpp"
#include "image.hpp"
#include <string>
#include <cstdlib>
using namespace std;

class Bandw : public Filter {
public:
   Bandw(){}; 
   ~Bandw(){};

   void setFilter(string name, int width, int height, int max, unsigned char ** r, unsigned char ** g, unsigned char **b);
};

#endif
