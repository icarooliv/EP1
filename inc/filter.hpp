#ifndef FILTER_HPP
#define FILTER_HPP
#include <string>
#include <fstream>
#include "image.hpp"
using namespace std;

class Filter {
	public: 
	Filter(){};     
	~Filter(){}; //thx stackoverflow <3
	virtual void setFilter();
};

#endif
