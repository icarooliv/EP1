#ifndef FILTER_HPP
#define FILTER_HPP

#include <string>

using namespace std;

class Filter {
private: 
	int size;
protected:
virtual   Filter();  // Metodo Construtor
virtual  ~Filter(); // Metodo Destrutor
virtual void setApply();
};
#endif
