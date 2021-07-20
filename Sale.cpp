/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Sale.cpp
 * Author: Stefany
 * 
 * Created on 10 de septiembre de 2019, 09:05 AM
 */
#include<string>
#include<iostream>
#include "Sale.hpp"

Sale::Sale() {
}

Sale::Sale(std::string item , double cost , short int amount) {
    setItem(item);
    setAmount(amount);
    setCost(cost);
}

short int Sale::getAmount() {
    return amount;

}

double Sale::getCost() {
    return cost;

}

std::string Sale::getItem() {
    return item;

}

double Sale::liquidationSale() {
    
}

void Sale::setAmount(short int amount) {
    this->amount;
}

void Sale::setCost(double cost) {
    this->cost;
}

void Sale::setItem(std::string item) {
    this->item;
}


Sale::~Sale() {
}

