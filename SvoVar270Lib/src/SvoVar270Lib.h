/*
 Name:		SvoVar270Lib.h
 Created:	1/4/2021 9:09:02 PM
 Author:	lamri
 Editor:	http://www.visualmicro.com
*/

#ifndef _SvoVar270Lib_h
#define _SvoVar270Lib_h



#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
//#include "Arduino.h"
#endif

class SvoVar270Lib {
	public:
	SvoVar270Lib();
	int GetId() {};
		 
	private:
	int _id;
	};

#endif

