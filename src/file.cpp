#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include "file.hpp"
using namespace std;

File::File(){

}

File::~File(){

}

ifstream *getInfile(){
	return infile;
}

void setInfile(ifstream *infile){

}

ifstream *getOutfile(){

}

void setOutfile(ofstream *outfile){

}	

void getData(){
	getline(infile, magicnumber);

	if (!infile || magicnumber != "P6"){
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
	infile.close(); 
	infile.open(namein, ios::binary | ios::in); 
	infile.seekg(ptr); 



	setIdentify(identify);         
	setWidth(width); 	
	setHeight(height); 	
	setMax(max);

}  



