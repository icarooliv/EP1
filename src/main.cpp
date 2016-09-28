#include "image.hpp"
#include "filter.hpp"
#include "filterBANDW.hpp"
#include "filterPOLAR.hpp"
#include "filterMEDIAN.hpp"
#include "filterNEGATIVE.hpp"
using namespace std;

int main(int argc, char ** argv) {

	Image image;
	image.createHeader(&image);

	cout << " ------------------------------------------------------------  "<< endl;
	cout << "                   MENU DE FILTROS                             "<< endl;
	cout << "										    			        "<< endl;
	cout << "	(1) Negativo								                "<< endl;
	cout << "	(2) Polarizado						    			        "<< endl;
	cout << "	(3) Preto e Branco			  		 				        "<< endl;
	cout << "	(4) Mediana/Blur					    			        "<< endl;
	cout << "										    			        "<< endl;
	cout << " ------------------------------------------------------------  "<< endl;

	cout << "Digite o número correspondente para  o filtro desejado: ";
	
	int dig;
        Negative neg;
		Polar pol;
		Bandw bandw;
		Median med;

	cin >> dig;
	if (dig >= 0 || dig < 5)
	switch(dig){
		case(1):
				neg.setFilter(image.getNameout(), image.getWidth(), image.getHeight(), image.getMax(), image.getR(), image.getG(), image.getB());
				break;
		case(2):
				pol.setFilter(image.getNameout(), image.getWidth(), image.getHeight(), image.getMax(), image.getR(), image.getG(), image.getB());
				break;
		case(3):
				bandw.setFilter(image.getNameout(), image.getWidth(), image.getHeight(), image.getMax(), image.getR(), image.getG(), image.getB());
				break;
		case(4):
				med.setFilter(image.getNameout(), image.getWidth(), image.getHeight(), image.getMax(), image.getR(), image.getG(), image.getB());
				break;
			
	} 

return 0;	
}		 	
