#pragma once
#include <iostream>
#include <concepts>

template <typename T> 
requires std::floating_point<T>
class complex_number
{
    private:
        T z_re, z_im;

    public:
    complex_number()
        : z_re(0), z_im(0)
    {}

    explicit complex_number(T a)
        : z_re(a), z_im(0)
    {}

    complex_number(T a, T b)
        : z_re(a), z_im(b)
    {}

    complex_number conj(void) const{
        return complex_number(z_re, -z_im);
    }

    T real(void) const{
        return z_re;
    }

    T imag(void) const{
        return z_im;
    }

    friend std::ostream& operator<<(std::ostream& os, const complex_number& z) {
        os<<z.z_re;
        if(z.z_im>=0)
            os<<"+"<<z.z_im<<"i";
        else
            os<<z.z_im<<"i";
        return os;
	}

    complex_number operator+(const complex_number& other) const{
        return complex_number(z_re+other.z_re, z_im+other.z_im);
	}

    complex_number operator*(const complex_number& other) const{
        return complex_number(z_re*other.z_re - z_im*other.z_im, z_re*other.z_im + z_im*other.z_re);
	}

    complex_number& operator+=(const complex_number& other) {
        *this=*this+other;
        return *this;
	}

    complex_number& operator*=(const complex_number& other) {
        *this=*this*other;
        return *this;
	}

    complex_number operator+(const T& s) const{
        return complex_number(z_re+s, z_im);
	}

    complex_number operator*(const T& s) const{
        return complex_number(z_re*s, z_im*s);
	}
};

template<typename T>
complex_number<T>
operator+(const T& s, const complex_number<T>& z)
{
    return z+s;
}

template<typename T>
complex_number<T>
operator*(const T& s, const complex_number<T>& z)
{
    return z*s;
}

