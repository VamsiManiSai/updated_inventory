// opps.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<random>
#include<vector>
#include "rectangle.h"
#include "person.h"
#include "Item.h"
#include "teacher.h"
#include "studentinherit.h"
#include "shape.h"
#include "Product.h"
#include "Inventory.h"
using namespace std;

class vehicle {

    public:
        string color;
        int speed;
        void forward(){
            cout << " vroom vroom" << endl;
        }

        void information() {
            cout << " The max spped of the bmw " << color << " color varient is " << speed << endl;
        }

        void setengine(string engine) {
            this->engine = engine;
        }
        string getengine() {
            return engine;
        }

    private:
        string engine;
};


class employee {

    private :
        string name;
        string department;
        string position;
        double salary;

    public:
        void set_name(string name) {
            this->name = name;
        }
        
        void set_department(string department) {
            this->department = department;
        }

        void set_position(string position) {
            this->position = position;
        }

        void set_salary(double salary) {
            this->salary = salary;
        }

        string get_name() {
            return name;
        }

        string get_department() {
            return department;
        }

        string get_position() {
            return position;
        }

        double get_salary() {
            return salary;
        }

        void to_string() {
            cout << " employee informaion " << endl;
            cout << " name   :  " << this -> name << endl;
            cout << " deartment :  " << this-> department<< endl;
            cout << " position  :  " << this-> position << endl;
            cout << " salary in $ :  " << this-> salary << endl;
            cout << endl;
            cout << endl;
        }
};

int main()
{
    srand(time(NULL));
    /*vehicle bmw;

    bmw.color = "black";
    bmw.speed = 200;

    bmw.forward();
    bmw.information();

    rectangle rect;

    rect.setheight(4);
    rect.setwidth(3);

    cout << rect.cal_area() << endl;
    cout << rect.cal_circum() << endl;

    rectangle rect2;

    rect2.setheight(3);
    rect2.setwidth(1);

    cout << rect2.cal_area() << endl;
    cout << rect2.cal_circum() << endl;

    employee emp1;
    emp1.set_name("vamsi");
    emp1.set_department("Development");
    emp1.set_position("level1");
    emp1.set_salary(25000.80);
    emp1.to_string();

    employee emp2;
    emp2.set_name("solomon");
    emp2.set_department("Tester");
    emp2.set_position("level1");
    emp2.set_salary(25000.80);
    emp2.to_string();

    studentinherit s1("Vamsi Krishna", "pullakhandam", 23, "CSE", 9.0);
    s1.person_info();

    cout << endl;

    teacher t1("solomon", "godse", 60, "profesor", 50000.89);
    t1.person_info();

        vector <int> items;
    int second_largest = 0;
    int swap;

    for (int i = 0; i < 10; i++) {
        items.push_back(rand() % 10);
    }

    for (int i = 0; i < items.size(); i++) {
        cout << items.at(i) << endl;
    }

    cout << endl << endl;

    for (int i = 0; i < items.size() - 1; i++) {
        for (int j = 0; j < items.size() - i - 1; j++) {
            if (items.at(j) > items.at(j + 1)) {
                int swap = items.at(j);
                items.at(j) = items.at(j + 1);
                items.at(j + 1) = swap;
            }
        }
    }

    for (int i = 0; i < items.size(); i++) {
        cout << items.at(i) << endl;
    }
    cout << endl << endl;

    cout << items.at(items.size() - 2);

    for (int i = 0; i < items.size(); i++) {

    }


    srand(time(NULL));
    person *pupil[10];
    int r;

    for (int i = 0; i < 10; i++) {
        r = rand() % 3;
        cout << r << endl;
        if (r == 0) {
            pupil[i] = new person(" person_name ", " person_surname ", rand() % 70);
        }
        else if (r == 1) {
            pupil[i] = new studentinherit(" student_name ", " student_surname ", rand()%70, " stuent_department ", rand() % 4 + 1);
        }
        else if (r == 2) {
            pupil[i] = new teacher(" teacher_name ", " teacher_surname ", rand()%70,  " teacher_department ", rand() % 70);
        }
    }

    for (person *p : pupil) {
        p -> person_info();
        cout << endl;
    }
    


    srand(time(NULL));
    Inventory inventory;
    int r;

    for (int i = 0; i < 2; i++) {
        inventory.add_product(Product("CPP" + to_string(i), rand() % 50 + 0.0, rand() % 50, "software"));
    }
    int i = 10;
    inventory.add_product(Product("CPP" + to_string(i), rand() % 50 + 0.0, rand() % 50, "software"));

    inventory.display_byname();
    inventory.delete_product("CPP8");

    inventory.display_byname();

    inventory.add_product(Product("CPP" + to_string(i), rand() % 50 + 0.0, rand() % 50, "software"));
    inventory.display_byname();

    inventory.display_all();
    
    cout << inventory.calculate_totalvalue();=

    vector <Product> products;*/

    Inventory inventory;

    for (int i = 0; i < 19; i++) {
        inventory.add_product(Product("CPP" + to_string(i), rand() % 50 + 0.0, rand() % 50, "software"));
        

    }

    for (int i = 0; i < 15; i++) {
        inventory.delete_product("CPP" + to_string(i));
        inventory.cap();

    }
    
    inventory.cap();
    /*inventory.delete_product("CPP5");
    inventory.add_product(Product("CPP" + to_string(5), rand() % 50 + 0.0, rand() % 50, "software"));
    inventory.update_price("CPP5", 100.00);
    cout << inventory.calculate_totalvalue() << endl;
    inventory.display_byname();
    inventory.show_bycategory("CPP5");
    inventory.insert_product(9, Product("CPP" + to_string(10), rand() % 50 + 0.0, rand() % 50, "software"));*/
    
    
    
    

  
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
