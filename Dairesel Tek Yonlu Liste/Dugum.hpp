#ifndef Dugum_hpp
#define Dugum_hpp
#include<iostream>
using namespace std;
//Sablon s�n�flar�nda butun tan�m tek bir dosyada bulunmal�d�r.
template<typename Tur>
class Dugum
{
public:
    Dugum(const Tur& veri)
    {
        this->veri = veri;
        sonraki = 0;
    }
    Tur veri;
    Dugum* sonraki;

};

#endif