/**
* @file 		Dugum.hpp
* @description 	Huffman algoritmasi ile verilen txt'yi sikistirir.
* @course 		I. Ogretim / A Grubu
* @assignment 	4. Odev
* @date 		18.12.2017
* @author 		Kadir ARSLAN <kadir.arslan1@ogr.sakarya.edu.tr>  /  Cahit TULUM <cahit.tulum@ogr.sakarya.edu.tr>
**/

#ifndef DUGUM_HPP
#define DUGUM_HPP
#include <iostream>
using namespace std;

class Dugum
{
    public:
        unsigned int freq;
        unsigned char ch;
        Dugum *sol, *sag;
        //constructor
        Dugum();
};

#endif