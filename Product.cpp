#include "Product.h"
#include <iostream>
#include <string>
using namespace std;

Product :: Product() {
	set_name("unknown");
	set_price(0);
	set_amount(0);
	set_category("unknown");
}
Product::Product(string name, double price, int amount, string category) {
	set_name(name);
	set_price(price);
	set_amount(amount);
	set_category(category);
}

void Product::set_name(string name) {
	this->name = name;
}
void Product::set_price(double price) {
	this->price = price;
}
void Product::set_discount() {
	if(this -> amount >= 5)
	this->discount = 10.0;
	else
	this->discount = 0.0;
}
void  Product::set_amount(int amount) {
	this->amount = amount;
}
void Product::set_category(string category) {
	this->category = category;
}

string Product::get_name() {
	return this->name;
}
double Product::get_price() {
	return this->price;
}
double Product::get_discount() {
	set_discount();
	return this->discount;
}
int  Product::get_amount() {
	return this->amount;
}
string Product::get_category() {
	return this->category;
}

double Product::get_finalPrice() {
	set_discount();
	return this->discount;

}

void Product::display() {
	cout << " Name = " << this->name << endl;
	cout << " price = " << this->price << endl;
	cout << " amount = " << this->amount << endl;
	cout << " category = " << this->category << endl;
	cout << endl;
	cout << " discount = " << get_discount() << endl;
	cout << " final price = " << get_finalPrice() << endl;
	cout << endl;

}
