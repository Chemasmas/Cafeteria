//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : Nota.h
//  @ Date : 28/10/2012
//  @ Author : 
//
//


#if !defined(_NOTA_H)
#define _NOTA_H


class Nota {
public:
	int getNota(int ID);
	int getProductos(int ID);
private:
	int IDNota;
	List Productos;
};

#endif  //_NOTA_H
