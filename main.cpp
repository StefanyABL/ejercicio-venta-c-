/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Stefany
 *
 * Created on 10 de septiembre de 2019, 09:04 AM
 */

#include <cstdlib>
#include<iostream>
#include "Sale.hpp"


using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    Sale  cams( "Camisa " , 180000 , static cast<short int >(10) ) ;
    Sale* pant = new Sale ( " Pantalon " , 230000 , 5 ) ;
    cout<<" Articulo . . : "<<cams.getItem ( )<<"nnPrecio . . : "<<cams.getCost ( )<<endl ;
    cout<<"\n Articulo . . : "<<pant->getItem ( )<<"\nPrecio . . : "<<pant->getCost( )<<endl;
    delete ( pant ) ;
    return EXIT_SUCCESS ;
}

