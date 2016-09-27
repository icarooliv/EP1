/*#ifndef FILTERPOLAR_HPP
#define FILTERPOLAR_HPP
#include "filter.hpp"
#include "image.hpp"
#include <string>
#include <cstdlib>
using namespace std;

class Polar : public Filter {
public:
   Polar(){}; 
   ~Polar(){};

   void setFilter(string name, int width, int height, int max, unsigned char ** r, unsigned char ** g, unsigned char **b);
};

#endif
*/