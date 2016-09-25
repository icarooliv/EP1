   #ifndef IMAGE_HPP
   #define IMAGE_HPP

   #include <iostream>
   #include <string>
   #include <fstream>
   #include <sstream>

   using namespace std;

   typedef struct Pixels{
       unsigned char red[][];
       unsigned char green[][];
       unsigned char blue[][];
      } Pixels;

   class Image {
      
   private:
      string namein, nameout;
      string magicnumber; //identify p/ conferir se é ppm/P6 -- header p pegar o cabeçalho
      unsigned char **red, **green, **blue; //range de 0 ate 255 por isso o unsigned 
      int height, width, max; //

   public:
      Image();  
      virtual ~Image(); 
      Image (string identify, string ignore, int height, int width, int max);
   protected: 
      string getNamein();
      void setNamein(string namein);

      string getNameout();
      void setNameout(string nameout);

      string getMagicnumber();
      void setMagicnumber(string magicnumber);

      string getIgnore();
      void setIgnore(string ignore);

      unsigned char **getPixel;

      int getHeight();
      void setHeight(int height);

      int getWidth();
      void setWidth(int width);

      int getMax();
      void setMax(int inten);


   #endif
