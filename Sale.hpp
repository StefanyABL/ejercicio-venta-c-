/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Sale.hpp
 * Author: Stefany
 *
 * Created on 10 de septiembre de 2019, 09:05 AM
 */

#ifndef SALE_HPP
#define SALE_HPP

#include<string>
class Sale {
public:
    Sale();
    Sale(std::string,double,short int);
    void setItem(std::string);
    void setCost(double);
    void setAmount (short int);
    std::string getItem();
    double getCost();
    short int getAmount();
    double liquidationSale();
    
    
    virtual ~Sale();
private:
    std::string item;
    double cost;
    short int amount;
    double clculateDiscount;

};

#endif /* SALE_HPP */

