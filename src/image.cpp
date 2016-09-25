   #include "image.hpp" //n add mais bibliotecas pq ja esta incluida no hpp

   Image::Image() { //const padrao
            identify = "";
            height = 0;
            width = 0;
            max = 0;
   }

   Image::~Image(){

   } 


   string Image::getMagicnumber(){
      return magicnumber;
   }
   void Image::setIdentify(string magicnumber){
      this->magicnumber=magicnumber;
   }


   string Image::getIgnore(){
      return ignore;
   }
   void Image::setIgnore(string ignore);{
      this->ignore=ignore;
   }


   int Image::getHeight(){
      return height;
   }
   void Image::setHeight(int height){
      this->height=height;
   }


   int Image::getWidth(){
      return width;
   }
   void Image::setWidth(int width){
      this->width=width;
   }


   int Image::getMax(){
      return max;
   }

   void Image::setMax(int max){
      this->max=max;
   }

   long File::getPtr(){
   return ptr;
   }
   
   void File::setPtr(long ptr){
   this ptr->ptr;
   }
