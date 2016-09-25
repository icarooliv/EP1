#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include "file.hpp"
using namespace std;

File::File(string name){
	    this->openFile(nome, infile);     
	    this->getData();

}

File::~File(){

}

void File::openFile(){
    this->setNamein(namein);     
    string myfile = string("doc/") + namein;     
    filein.open(myfile);
}
void File::closeFile(){
	infile.close();
}

string File::getNamein(){
	return namein;
}

void File::setNamein(string namein){
	string namein, aux1;

	cout << "Digite o nome da imagem a ser filtrada" << endl;

	cin >> namein;

      namein = "doc/" + namein + ".txt"; //mudar para ppm

      this namein->namein;
  }


  string File::getNameout(){
  	return nameout;
  }

  void File::setNameout(string nameout){
  	string nameout;

  	cout << "Digite o nome da imagem filtrada" << endl;

  	cin >> nameout;

      nameout = "doc/" + nameout + ".txt"; //mudar para ppm

      this->nameout=nameout;
  }


  void File::getData(){


  	getline(infile, magicnumber);
  	if (!infile || magicnumber != "P6" || magicnumber != "P3" ){
  		cout << "Não foi possível abrir o arquivo de entrada: "<< namein << ". Formato ou nome incorreto"<<"\n"<< endl;
  		cout << "Saindo... \n" << endl;
  		infile.close();
  		return 1;
  	}

  	int height, width, max;
  	string straux;
  	long ptr; 
  	for(int aux = 0; aux<2; aux=aux){ 
  		ptr = infile.tellp(); 
  		getline(infile, straux);
  		if(straux[0]!='#'){ 
  			infile.seekg(ptr); 
  			switch(aux){ 	
  				break; 	
  				case 0:
  				infile >> width >> height; 	
  				break; 	
  				case 1: 	
  				infile >> max; 	
  				ptr = infile.tellp(); 	
  				break; 
  			} 
  			aux++; 
  		} 
  	}
  	ptr+=1;
  	this->setPtr(ptr);
  	this->setIdentify(identify);         
  	this->setWidth(width); 	
  	this->setHeight(height); 	
  	this->setMax(max);

  	infile.close(); 
  }  

