/*#include "filterMEDIAN.hpp"
#include "image.hpp"

Median::Median(){
	
}

void Median::setFilter(string name, int width, int height, int mai, unsigned char** r, unsigned char** g, unsigned char ** b) {
	fstream outfile;
	
	int size;

	cout << "Informe a dimensão da máscara do filtro (infome um valor positivo!):" << endl;
	
	cin >> size;

	if(size < 0){
	do{
		cout << "Insira valor positivo"<<endl;
		cin >> size;	
	}while(size < 0);
	
	size = size/2;
	
	outfile.open(name, ios::binary | ios::app | ios::out);

	int auxR = 0, auxG = 0, auxB = 0, aux = 0;

	for(int i=0; i<height; i++){
		for(int j=0; j<width; j++){

			for(int x=-size; x<=size; x++){
				for(int y=-size; y<=size; y++){

					if((i+a) >= 0 && (a+i) < height){
						if((j+y)>=0 && (j+y) < width){
							auxR += (int)r[i+a][j+y];
							auxG += (int)g[i+a][j+y];
							auxB += (int)b[i+a][j+y];
							aux++;
						}
					}

				}
			}
			auxR = auxR/aux;
			auxG = auxG/aux;
			auxB = auxB/aux;

			r[i][j] = (unsigned char)auxR;
			g[i][j] = (unsigned char)auxG;
			b[i][j] = (unsigned char)auxB;

			outfile.write((char*)&r[i][j], sizeof(unsigned char));
			outfile.write((char*)&g[i][j], sizeof(unsigned char));
			outfile.write((char*)&b[i][j], sizeof(unsigned char));

			auxR = 0;
			auxB = 0;
			auxG = 0;
			aux = 0; 


		}
	}

	outfile.close();
}
*/