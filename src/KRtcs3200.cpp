#include "KRtcs3200.h"

KRtcs3200::KRtcs3200(byte S0, byte S1, byte S2, byte S3, byte OUT) {
	this->S0 = S0;
	this->S1 = S1;
	this->S2 = S2;	this->S3 = S3;
	this->OUT = OUT;
	begin();
}

void KRtcs3200::begin() {
	pinMode(S0, OUTPUT);
	pinMode(S1, OUTPUT);
	pinMode(S2, OUTPUT);
	pinMode(S3, OUTPUT);
	digitalWrite(S0, HIGH);
	digitalWrite(S1, LOW);
	pinMode(OUT, INPUT);
}

int KRtcs3200::getRed() {
	digitalWrite(S2, LOW);
	digitalWrite(S3, LOW);
	int PW;
	PW = pulseIn(OUT, LOW);
	return PW;
}

int KRtcs3200::getGreen() {
	digitalWrite(S2, HIGH);
	digitalWrite(S3, HIGH);
	int PW;
	PW = pulseIn(OUT, LOW);
	return PW;
}

int KRtcs3200::getBlue() {
	digitalWrite(S2, LOW);
	digitalWrite(S3, HIGH);
	int PW;
	PW = pulseIn(OUT, LOW);
	return PW;
}