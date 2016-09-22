#include <iostream>
#include "image.hpp"

Image::Image() {

string *nome;

}

Image::~Image(){

} 

//get return 
//set this->

string Image::getName(){
   return name;
   }

void Image::setName(string name){
   string infile_name
   cout << Digite o nome da imagem, sem a extensão ou endereço << endl;
   cin >> infile_name;
   this infile_name->name;
   }


string Image::getIdentify(){
   return identify;
   }
void Image::setIdentify(int setIdentify){
   this identify->identify;
   }


int Image::getWidth(){
   return width;
   }
void Image::setWidth(int width){
   this width->width;
   }
   

int Image::getHeight(){
   return height;
   }
void Image::setHeight(int height){
   this height->height;
   }


int Image::getIntensity(){
   return intensity;
}
void Image::setIntensity(int intensity){
   this intensity->intensity;
}
