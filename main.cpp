#include <iostream>
#include "Form.h"

using std::cout;
using std::endl;



Form gen4(4); // general format, precision is 4

void f(double d)
{
	Form sci8 = gen4;
	sci8.scientific().precision(8); // scientific format, precision 8
	Form fix8 = gen4;
	fix8.fixed().precision(8); // fixed format, precision 8
	cout<< "default = " << d << endl
		<< "gen4 = " << gen4(d) << endl
		<< "sci8 = " << sci8(d) << endl
		<< "fix8 = " << fix8(d) << endl
		<< "default = " << d << endl;
}


/**


default = 1234.57
gen4 = 1235
sci8 = 1.23456789e+03
fix8 = 1234.56789000
default = 1234.57
default = 12.3457
gen4 = 12.35
sci8 = 1.23456789e+01
fix8 = 12.34567890
default = 12.3457

*/
int main()
{
	f(1234.56789);
	f(12.3456789);

	return 0;
}
