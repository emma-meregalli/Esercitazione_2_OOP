#include <iostream>
#include "complex_number.hpp"

int main(void) {
    using cn = complex_number<double>;
    cn z1(1.0,3.0);
    cn z2(1.0,6.0);

    std::cout<<"z1 = "<<z1<<std::endl;

    std::cout<<"Coniugato di "<<z1<<": "<<z1.conj()<<std::endl;
    std::cout<<"Parte reale di "<<z1<<": "<<z1.real()<<std::endl;
    std::cout<<"Parte immaginaria di "<<z1<<": "<<z1.imag()<<std::endl;

    std::cout<<"("<<z1<<")"<<" + "<<"("<<z2<<")"<<" = "<<z1+z2<<std::endl;
    std::cout<<"("<<z1<<")"<<" + "<<2.0<<" = "<<z1+2.0<<std::endl;
    std::cout<<2.0<<" + "<<"("<<z1<<")"<<" = "<<2.0+z1<<std::endl;

    std::cout<<"("<<z1<<")"<<" * "<<"("<<z2<<")"<<" = "<<z1*z2<<std::endl;
    std::cout<<"("<<z1<<")"<<" * "<<2.0<<" = "<<z1*2.0<<std::endl;
    std::cout<<2.0<<" * "<<"("<<z1<<")"<<" = "<<2.0*z1<<std::endl;
    
    return 0;    
}