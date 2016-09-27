#include <iostream>
#include "filterNEGATIVE.hpp"
#include <fstream>
#include <cstdlib>
#include "image.hpp"

void Negative::setFilter(string name, int width, int height, int max, unsigned char** r, unsigned char** g, unsigned char ** b) {

fstream outfile;

outfile.open(name, ios::binary | ios::app | ios::out);

for(int i=0; i<height; i++){
	for(int j=0; j<width; j++){ 				 	

		r[i][j] = max - (int)r[i][j];					
		outfile.write((char*)&r[i][j], 1); 								

		g[i][j] = max - (int)g[i][j]; 				
		outfile.write((char*)&g[i][j], 1); 										

		b[i][j] = max - (int)b[i][j]; 				
		outfile.write((char*)&b[i][j], 1); 							
	} 		
}
outfile.close();
}
