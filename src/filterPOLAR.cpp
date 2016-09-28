#include <iostream>
#include "filterPOLAR.hpp"
#include <fstream>
#include <cstdlib>
#include "image.hpp"

void Polar::setFilter(string name, int width, int height, int max, unsigned char** r, unsigned char** g, unsigned char ** b) {

	fstream outfile;
	outfile.open(name, ios::binary | ios::app | ios::out);

	for(int i=0; i<height; i++){
		for(int j=0; j<width; j++){

			if((int)r[i][j]>(max/2)){
				r[i][j] = (unsigned char)max;
			} 				
			else{r[i][j] = 0;
			} 				
			outfile.write((char*)&r[i][j], sizeof(unsigned char)); 									


			if((int)g[i][j]>(max/2)){
				g[i][j] = (unsigned char)max;
			} 				
			else{g[i][j] = 0;
			} 				
			outfile.write((char*)&g[i][j], sizeof(unsigned char)); 							


			if((int)b[i][j]>(max/2)){
				b[i][j] = (unsigned char)max;
			} 				
			else{b[i][j] = 0;
			} 				
			outfile.write((char*)&b[i][j], sizeof(unsigned char)); 			
		}
	}

}	 		 			 				 		
