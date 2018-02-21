/**
* @file 		Islem.hpp
* @description 	Huffman algoritmasi ile verilen txt'yi sikistirir.
* @course 		I. Ogretim / A Grubu
* @assignment 	4. Odev
* @date 		20.12.2017
* @author 		Kadir ARSLAN <kadir.arslan1@ogr.sakarya.edu.tr>  /  Cahit TULUM <cahit.tulum@ogr.sakarya.edu.tr>
**/

#ifndef ISLEM_HPP
#define ISLEM_HPP
#include "Kuyruk.hpp"
#include "Huffman.hpp"
#include "Dugum.hpp"
#include <iostream>

using namespace std;

class Islem{
	public:
		void huffmanYazdir(unsigned char, ofstream &);
		unsigned char huffmanOku(ifstream &);
		void dosyayaYazdir(Huffman *);
		void encoder();
		void decoder();
		void ekranaYaz();
};

#endif