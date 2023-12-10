#ifndef PRODUCT_H
#define PRODUCT_H
#include<iostream>
using namespace std;

struct Product{
string name;
int price;

Product(string nm,int pr){
    name=nm;
    price=pr;
}
};

#endif

