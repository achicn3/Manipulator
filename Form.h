#ifndef __FORM_H_INCLUDED__
#define __FORM_H_INCLUDED__
#include <iostream>
#include <vector>
class Form{
private:
	double val;
	int _precision = -1;
	bool isEnableSci = false;
	bool isEnableFix = false;
public:
	std::streamsize default_precision = std::cout.precision();
	Form(int _precision) : _precision(_precision){}
	Form(){}
	Form& operator ()(double d);
	Form& scientific();
	Form& precision(int _precision);
	Form& fixed();
	
	friend std::ostream& operator<<(std::ostream& os,const Form& );
};
#endif
