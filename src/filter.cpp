#include <iostream>
#include "image.hpp"

Filter::Filter() {
    outfile << image.getMagicnumber() << endl;     
    outfile << image.getWidth() << " " << image.getHeight() << endl;     
    outfile << image.getMax() << endl; 
}

Filter::~Filter(){
} 

Filter::setApply(){
}