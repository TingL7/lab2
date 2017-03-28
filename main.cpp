#include <fstream>
#include "recorder.h"

int main(){
	Recorder rcd;
	float temp;
	int RA_old;
	ifstream inFile("file.in", ios::in);
	ofstream outFile("file.out", ios::out);
	//initial
	inFile >> temp;
	rcd.setK(temp);
	inFile >> temp;
	rcd.setRA(temp);
	inFile >> temp;
	rcd.setRB(0, temp);

	outFile << rcd.getRA() << " ";
	outFile << rcd.getRB() << endl;
	//cal
	while(inFile >> temp){
		RA_old = rcd.setRA(temp);
		outFile << rcd.getRA() << " ";
		rcd.setRB(RA_old, 1-temp);
		outFile << rcd.getRB() << endl;
	}

	return 0;
}
