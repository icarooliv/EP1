#ifndef FILTERMEDIAN_HPP
#define FILTERMEDIAN_HPP
#include "filter.hpp"
#include "image.hpp"
#include <string>
#include <cstdlib>
using namespace std;

class Median : public Filter {
public:
   Median(){}; 
   ~Median(){};

   void setFilter(string name, int width, int height, int max, unsigned char** r, unsigned char** g, unsigned char** b);
};

#endif
