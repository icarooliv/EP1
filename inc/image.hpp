   #ifndef IMAGE_HPP
   #define IMAGE_HPP

   #include <iostream>
   #include <string>
   #include <fstream>
   #include <sstream>

   using namespace std;

   class Image {
      
   private:
      string namein, nameout;
      string magicnumber; //identify p/ conferir se é ppm/P6 -- header p pegar o cabeçalho
      unsigned char *pixels; //range de 0 ate 255 por isso o unsigned 
      int height, width, max; //
      long ptr;
   public:
      Image();  
      virtual ~Image();    

   protected: 

      string getMagicnumber();
      void setMagicnumber(string magicnumber);

      string getIgnore();
      void setIgnore(string ignore);

      int getHeight();
      void setHeight(int height);

      int getWidth();
      void setWidth(int width);

      int getMax();
      void setMax(int inten);

      long getPtr();
      void setPtr(long ptr);



   #endif
