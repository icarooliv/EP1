#include "image.hpp" //n add mais bibliotecas pq ja esta incluida no hpp
using namespace std;

Image::Image() { 

string insert, nameout;

fstream infile; 
ofstream outfile;

cout << "Digite o nome da imagem a ser filtrada:";
cin >> insert;

namein = "doc/" + insert + ".ppm";

nameout = "doc/copia"+ insert + ".ppm";

this->setNameout(nameout);

infile.open(namein);  

string magicnumber;

getline(infile, magicnumber);
if (!infile || magicnumber != "P6" ){
   cout << "Não foi possível abrir o arquivo de entrada: "<< namein << ". Formato ou nome incorreto"<<"\n"<< endl;
   cout << "Saindo... \n" << endl;
   infile.close();
   return;
}

string str;
long ptr;
int height, width, max;
for(int aux = 0; aux<2; aux=aux){ 
    ptr = infile.tellg(); 
   getline(infile, str);
   if(str[0]!='#'){ 
      infile.seekg(ptr); 
      switch(aux){   
         break;   
         case 0:
         infile >> width >> height;    
         break;   
         case 1:  
         infile >> max;    
         ptr = infile.tellg();
         ptr+=1;   
         break; 
      } 
      aux++; 
   } 
}

this->setWidth(width);  
this->setHeight(height);   
this->setMax(max);

outfile.open(nameout);
outfile << magicnumber << endl;
outfile << width << " " << height << endl;
outfile << max << endl;

infile.close();
infile.open(namein, ios::binary | ios::in); 
infile.seekg(ptr);


r = new unsigned char*[height];
g = new unsigned char*[height]; 
b = new unsigned char*[height]; 

for (int i = 0; i < height; i++){
   r[i] = new unsigned char[width];
   g[i] = new unsigned char[width];
   b[i] = new unsigned char[width];
   for (int j = 0; j < width; j++){
      infile.read((char*)&r[i][j], 1);
      infile.read((char*)&g[i][j], 1);
      infile.read((char*)&b[i][j], 1);
  } 

}

/*  
r = (unsigned char**)malloc(height * sizeof(unsigned char*)); 
g = (unsigned char**)malloc(height * sizeof(unsigned char*)); 
b = (unsigned char**)malloc(height * sizeof(unsigned char*)); 

for (int i = 0; i < height; i++){
   r[i] = (unsigned char*) malloc(width * sizeof(unsigned char));
   g[i] = (unsigned char*) malloc(width * sizeof(unsigned char));
   b[i] = (unsigned char*) malloc(width * sizeof(unsigned char));
      for (int j = 0; j < width; j++){
         infile.read((char*)&r[i][j], 1);
         infile.read((char*)&g[i][j], 1);
         infile.read((char*)&b[i][j], 1);
   } 
}
*/   
infile.close();
outfile.close();

}  


Image::~Image(){

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

string Image::getNamein(){
return namein;
}
void Image::setNamein(string namein){
this->namein=namein;
}

string Image::getNameout(){
return nameout;
}

void Image::setNameout(string nameout){
this->nameout=nameout;
}

unsigned char** Image::getR(){
   return r;
}

unsigned char** Image::getG(){
   return g;
}

unsigned char** Image::getB(){
return b;
} 
