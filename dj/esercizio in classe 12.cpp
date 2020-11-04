//>>>>>>>>>>>>>>>>>>>>>numerativi
//enum class mese{gennaio, febbraio,.....};
//mese m;
//m=mes::gennaio;
//if(m==mese::dicembre)
// >>>>>>>>>>>>>>>>>>>what the fuck is this ??
#include<iostream>
using namespace std;
int main(){
	enum class Stagione{INV,PRI,EST,AUT};
	enum class Mese{GEN,FEB,MAR,APR,MAG,GIU,LUG,AGO,SET,OTT,NOV,DIC};
    int m;
	srand(time(0));
	m=rand()%12;
//what the fuck is cast
	Mese mese=static_cast<mese>(m);
	Stagione s;
	swith(mese){
		case DIC:
		case GEN:
		case FEB:
			s= Stagione::INV;
			break;
		case MAR:
		case APR:
		case MAG:
			s= Stagione::PRI;
			break;
		case GIU:
		case LUG:
		case AGO:
			s= Stagione::EST;
			break;
		case SET:
		case OTT:
		case NOV:
			s= Stagione::AUT;
	}
	
	
	return 0;
}
