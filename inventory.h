#pragma once
#include <string>
#include <vector>
using namespace std;
#include "Product.h"

class Inventory
{
private:
    vector <Product> products;
    int count;

public:
    Inventory();

    bool add_product(Product p);
    void display_all();
    bool update_price(string name, double new_price);
    bool delete_product(string name);
    void display_byname();
    double calculate_totalvalue();
    void show_bycategory(string category);
    void insert_product(int index, Product p);

};

