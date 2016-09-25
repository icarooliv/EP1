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

void setInfile(ifstrem *infile){
	
}

ifstream *getOutfile(){

}

void setOutfile(ofstream *outfile){

}	

void getData(){
	cout <<"\tInforme o diretório do arquivo de entrada: ";

		string infile_name, test, ignore, outfile_name, name, magicnumber;
		int height, width, max;

		cin >> name; 
		infile_name = "doc/" + name + ".txt"; 

		ifstream infile (infile_name.c_str()); 

		getline(infile, test);

		if (!infile || test != "P6"){
			cout << "Não foi possível abrir o arquivo de entrada: "<< name << ". Formato ou nome incorreto"<<"\n"<< endl;
			cout << "Saindo... \n" << endl;
			infile.close();
			return 1;
		}

		infile.seekg(0, infile.beg); //manda ponteiro do infile para o inicio

		cout << "\tInforme o diretório do arquivo de saída: ";
		cin >> outfile_name; //atribui nome
		if (outfile_name == name){
			do{
				cout << "nome invalido. digite novamente: " << endl;
				cin >> outfile_name; 
			} while(outfile_name==name); //continua pedindo nome caso o nome de saida seja igual ao de entrada  
		}

		outfile_name = "doc/" + outfile_name + ".txt"; //concatena string
		ofstream outfile (outfile_name.c_str()); //abre arquivo

		if(!outfile){ //caso falhe a abertura
			cout << "Não foi possível abrir o arquivo de saída: " << name << "\n" << endl;
			cout << "Saindo...\n";
			return 1;
		}	

		string saux;
		int aux;
		long pos;

		if (infile.good()){

			do { //pega as 3 primeiras linhas q n iniciarem com '#'
				getline(infile, saux);
				infile.seekg(pos); //manda ponteiro do infile para o inicio	
				if (saux[0]!='#'){	
					outfile << saux << endl;
					aux++;
				}
			}while(aux<3);	
		}

		infile.close();
		outfile.close(); 

		ifstream outfileLet (outfile_name.c_str()); //abre arquivo de saida como ifstream

		outfileLet >> identify; //passa atributos
		outfileLet >> width >> height;
		outfileLet >> max;

		setIdentify(identify);         
		setWidth(width); 	
		setHeight(height); 	
		setMax(max);

		for( int i=0; i < largura; ++i){
    		for(int j=0; j < altura; ++j){
 				ponteiro_arquivo.get(r);
 				ptr_pixel->vermelho[i][j] = (unsigned char) r;
 				ponteiro_arquivo.get(g);
      		   	ptr_pixel->verde[i][j] = (unsigned char)g;
 				ponteiro_arquivo.get(b);
 				ptr_pixel->azul[i][j] = (unsigned char)b;    
			}  
		}		

}

	}
