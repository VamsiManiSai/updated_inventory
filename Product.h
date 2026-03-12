#pragma once
#include <string>
using namespace std;
class Product
{
private:
	string name;
	double price;
	double discount;
	int amount;
	string category;

public:
	Product();
	Product(string name, double price, int amount, string category);

	void set_name(string name);
	void set_price(double price);
	void set_discount();
	void set_amount(int amount);
	void set_category(string category);

	string get_name();
	double get_price();
	double get_discount();
	int get_amount();
	string get_category();

	double get_finalPrice();
	void display();
	

};
