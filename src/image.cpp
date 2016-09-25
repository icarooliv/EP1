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
      cout <<"\tInforme o diretório do arquivo de entrada: ";
         string name;
         cin >> name; 
      nameIn = "doc/" + name + ".txt"; 
   return nameIn;
   }

   void Image::setNamein(string nameIn){
      this nameIn->nameIn;
   }

   string Image::getNameout(){
      cout << "\tInforme o diretório do arquivo de saída: ";
      cin >> nameOut; //atribui nome
      if (nameOut == name){
         do{
            cout << "nome invalido. digite novamente: " << endl;
            cin >> nameOut; 
         } while(nameOut==name); //continua pedindo nome caso o nome de saida seja igual ao de entrada  
      }

      nameOut = "doc/" + nameOut + ".txt"; //concatena string
      return nameOut;
   }
   
   void Image::setNameout(string nsameOut){
      this->nameOut=nameOut;
   }


   string Image::getIdentify(){
      return identify;
   }
   void Image::setIdentify(string identify){
      this->identify=identify;
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





/*
   unsigned char** Image::getRed(){
      return red;
   }

   void setPixel(unsigned char **red){
      this red->red;
   }


   unsigned char** Image::getGreen(){
      return green;
   }
   void setGreen (unsigned char **green){
      this green->green;
   }


   unsigned char** Image::getBlue(){
      return blue;
   }
   void setBlue (unsigned char **blue){
      this blue->blue;
   }
*/