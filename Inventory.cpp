#include "Inventory.h"
#include "Product.h"
#include <iostream>
#include <string>
using namespace std;

Inventory::Inventory() {
	count = 0;
}

bool Inventory::add_product(Product p) {
	this->products.push_back(p);
	return false;
}

void Inventory::display_all() {
	for (int i = 0; i < products.size(); i++) {
		products.at(i).display();
	}
}

bool Inventory::update_price(string name, double new_price) {
	for (int i = 0; i < products.size(); i++) {
		if (products[i].get_name() == name) {
			products[i].set_price(new_price);
			return true;
		}
	}
	return false;
}

bool Inventory :: delete_product(string name) {
	int index = 0;
	for (int i = 0; i < products.size(); i++) {
		if (products.at(i).get_name() == name) {
			index = i;
		}
	}
	if (index != 0) {
		products.erase(products.begin()+index);
	}
	return false;
}

void Inventory :: display_byname() {
	for (int i = 0; i < products.size(); i++) {
		cout << i << " : " << products.at(i).get_name() << endl;
	}
	cout << endl;
}

double Inventory::calculate_totalvalue() {
	double total = 0.0;

	for (int i = 0; i < products.size(); i++) {
		products.at(i).set_discount();
		total += products.at(i).get_amount();
	}
	if( total!= 0)
	return total;
	return 0.0;
}

void Inventory::show_bycategory(string category) {
	for (int i = 0; i < this->products.size(); i++) {
		if (this->products.at(i).get_category() == category) {
			products.at(i).display();
		}
	}
}

void Inventory::insert_product(int index, Product p) {
	this->products.insert(this->products.begin()+index, p);
}
