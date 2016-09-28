#ifndef FILTERNEGATIVE_HPP
#define FILTERNEGATIVE_HPP
#include "filter.hpp"
#include "image.hpp"
using namespace std;

class Negative : public Filter {
public:
   Negative(){}; 
   ~Negative(){};

   void setFilter(string name, int width, int height, int max, unsigned char** r, unsigned char** g, unsigned char** b);
};

#endif
#ifndef FILTERNEGATIVE_HPP
#define FILTERNEGATIVE_HPP
#include "filter.hpp"
#include "image.hpp"
#include <string>
#include <cstdlib>
using namespace std;

class Negative : public Filter {
public:
   Negative(){}; 
   ~Negative(){};

   void setFilter(string name, int width, int height, int max, unsigned char ** r, unsigned char ** g, unsigned char **b);
};

#endif
