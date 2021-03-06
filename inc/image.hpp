#ifndef IMAGE_HPP
#define IMAGE_HPP
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <string>
#include <cstdlib>

using namespace std;

class Image {
   
protected:
   int height, width, max;
   string namein, nameout; 
   long ptr;
 
   unsigned char** r; 
   unsigned char** g; 
   unsigned char** b; 

public:

   Image();  
   ~Image();    

   int getHeight();
   void setHeight(int height);

   int getWidth();
   void setWidth(int width);

   int getMax();
   void setMax(int inten);

   long getPtr();
   void setPtr(long ptr);

   string getNamein();
   void setNamein(string namein);

   string getNameout();
   void setNameout(string nameout);

   unsigned char** getR();
   void setR(unsigned char** r);

   unsigned char** getG();
   void setG(unsigned char** g);
   
   unsigned char** getB();
   void setB(unsigned char** r);
   
   Image* createHeader(Image* image);

};

#endif
