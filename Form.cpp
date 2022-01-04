#include "Form.h"
#include <iostream>
Form& Form::operator ()(double d){
	this->val = d;
	return *this;
}

//Set up scientific flag
Form& Form::scientific(){
	this->isEnableSci = true;
	return *this;
}


Form& Form::precision(int _precision){
	this->_precision = _precision;
	return *this;
}

//Set up fixed flag
Form& Form::fixed(){
	this->isEnableFix = true;
	return *this;
}

std::ostream& operator<<(std::ostream& os,const Form& form){
	if(form._precision != -1)
		os.precision(form._precision);
	if(form.isEnableSci)
		os<<std::scientific;
	if(form.isEnableFix)
		os<<std::fixed;
	os<<form.val;
	//Clear flags
	os.precision(form.default_precision);
	std::cout.unsetf ( std::ios::floatfield );
	return os;
}

