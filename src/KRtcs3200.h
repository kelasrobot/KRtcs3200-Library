#ifndef KRtcs3200_h
#define KRtcs3200_h

#include "Arduino.h"

class KRtcs3200 {
private:
	byte S0;
	byte S1;
	byte S2;
	byte S3;
	byte OUT;
public:
	KRtcs3200(byte S0, byte S1, byte S2, byte S3, byte OUT);
	void begin();
	int getRed();
	int getGreen();
	int getBlue();
};

#endif