#include "recorder.h"
#include <iostream>
#include <iomanip>

Recorder::Recorder(){
	RA = 0;
	RB = 0;
}

void Recorder::setK(int k){
	K = k;
}

int Recorder::getK(){
	return K;
}

int Recorder::setRA(float Sa){
	int RA_old;
	RA_old = RA;
	if(!RA) RA = Sa;
	else	RA = cal(RA, RB, Sa);
	return RA_old;
}

int Recorder::getRA(){
	return RA;
}

void Recorder::setRB(int RA_old, float Sb){
	if(!RB) RB = Sb;
	else	RB = cal(RB, RA_old, Sb);
}

int Recorder::getRB(){
	return RB;
}

int Recorder::cal(int R1, int R2, float S1){
	float E1, r1;
	E1 =  1 / (1 + pow(10, (float)(R2 - R1) / 400));
	r1 = R1 + (S1 - E1) * K;
	R1 = r1 + 0.5;
	return R1;
}
