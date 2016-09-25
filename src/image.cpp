   #include "image.hpp" //n add mais bibliotecas pq ja esta incluida no hpp

   Image::Image() { //const padrao
            identify = "";
            height = 0;
            width = 0;
            max = 0;
   }

   Image::~Image(){

   } 

   string Image::getNamein(){
   }
   void Image::setNamein(string namein){
      string namein;

      cout << "Digite o nome da imagem a ser filtrada" << endl;

      cin >> namein;

      namein = "doc/" + namein + ".txt"; //mudar para ppm

      this namein->namein;
   }


   string Image::getNameout(){
      this nameout->nameout;
   } 
   void Image::setNameout(string nameout){
      string nameout;

      cout << "Digite o nome da imagem filtrada" << endl;

      cin >> nameout;

      nameout = "doc/" + nameout + ".txt"; //mudar para ppm

      this->nameout=nameout;
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



