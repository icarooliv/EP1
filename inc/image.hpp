#ifndef IMAGE_HPP
#define IMAGE_HPP

#include <string>

using namespace std;

class Image {
   // Atributos
   
private:
   string name;
   char identify;
   int width;
   int height;
   int intensity;
   string copia;

public:
   Image();  // Metodo Construtor
   ~Image(); // Metodo Destrutor
   
   string getName();
   void setName(string name);

   char getIdentify();
   void setIdentify(char identify);

protected: 

   int getWidth();
   void setWidth(int width);
   
   int getHeight();
   void setHeight(int height);

   int getIntensity();
   void setIntensity(int intensity);

private:

   void setCopiaImagem();
   
};

#endif
