#include "filterMEDIAN.hpp"
#include "image.hpp"

void Median::setFilter(string name, int width, int height, int max, unsigned char** r, unsigned char** g, unsigned char ** b) {
	fstream outfile;

	int size;
	cout << "Indique o tamanho da máscara 3, 5 ou 7: " << endl;


	outfile.open(name, ios::binary | ios::app | ios::out);

	cin >> size;

	switch (size){
		case(3):
		size = 3;
		break;
		case(5):
		size = 5;
		break;
		case(7):
		size = 7;
		break;
	}


	int i=0;
	int auxr, auxg, auxb, aux;
	while(i<height){
		for(int j=0; j<width; j++) {
			auxr = 0;
			auxg = 0;
			auxb = 0;
			for(int x=-size; x<=size; x++) {
				for(int y=-size; y<=size;y++){
					if((i+x)>=0 && (x+i) < height){
						if((j+y)>=0 && (j+y) < width){
							auxr += (int)r[i+x][j+y];
							auxg += (int)g[i+x][j+y];
							auxb += (int)b[i+x][j+y];
							aux+=1;
						}
					}
				}
			}

			auxr = auxr/aux;
			auxg = auxg/aux;
			auxb = auxb/aux;

			r[i][j] = (unsigned char)auxr;
			outfile.write((char*)&r[i][j], sizeof(unsigned char));
			g[i][j] = (unsigned char)auxg;
			outfile.write((char*)&g[i][j], sizeof(unsigned char));
			b[i][j] = (unsigned char)auxb;
			outfile.write((char*)&b[i][j], sizeof(unsigned char));

			auxr = 0;
			auxg = 0;
			auxb = 0;
			aux = 0;

		}
		i++;
	}

	outfile.close();

	outfile.close();
}