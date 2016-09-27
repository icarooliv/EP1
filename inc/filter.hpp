#ifndef FILTER_HPP
#define FILTER_HPP
#include <string>
#include <fstream>
#include "image.hpp"
using namespace std;

class Filter {
	public: 
	
	Filter(){};     
	~Filter(){}; //thx stackoverflow
	
	virtual void setFilter();
};

#endif
