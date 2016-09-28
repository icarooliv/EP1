#include "image.hpp"
#include "filter.hpp"
#include "filterNEGATIVE.hpp"
#include "filterPOLAR.hpp"
#include "filterBANDW.hpp"
//#include "filterMEDIAN.hpp"

using namespace std;

int main(int argc, char ** argv) {

	Image image;
	image.createHeader(&image);

	cout << " ------------------------------------------------------------  "<< endl;
	cout << "                   MENU DE FILTROS                             "<< endl;
	cout << "										    			        "<< endl;
	cout << "    Digite o número correspondente para  o filtro desejado     "<< endl;
	cout << "										    			        "<< endl;
	cout << "   1- Negativo           2-Polarizado           3-P&B          "<< endl;
	cout << "										    			        "<< endl;
	cout << "	4- Media			  0 - Sair 		    			        "<< endl;
	cout << "										    			        "<< endl;
	cout << "										    			        "<< endl;
	cout << " ------------------------------------------------------------  "<< endl;

	int dig;

	cin >> dig;
	if (dig > 5 || dig < 0){
		do {
				cout << "Digite uma opção válida!" << endl;
				cin >> dig;
		}while(dig > 5 || dig < 0);
}else{

	Negative neg;
	Polar pol;
	Bandw bandw;
//	Median med;
	
	switch(dig){
		case(0):
			cout << "Saindo..." << endl;
			return 0;
		case(1):
				neg.setFilter(image.getNameout(), image.getWidth(), image.getHeight(), image.getMax(), image.getR(), image.getG(), image.getB());

		case(2):
				pol.setFilter(image.getNameout(), image.getWidth(), image.getHeight(), image.getMax(), image.getR(), image.getG(), image.getB());
		case(3):
				bandw.setFilter(image.getNameout(), image.getWidth(), image.getHeight(), image.getMax(), image.getR(), image.getG(), image.getB());

	//	case(4):
	//			med.setFilter(image.getNameout(), image.getWidth(), image.getHeight(), image.getMax(), image.getR(), image.getG(), image.getB());

			
	} 
}
return 0;	
}		 	
