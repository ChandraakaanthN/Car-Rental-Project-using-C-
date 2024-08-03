#include <iostream>
#include <fstream>
#include"login.h"
#include"carpool.h"
#include"rents.h"
#include"mainclass.h"

using namespace std;
int main() {
    CarRentals carRentals; 
    int choice;
	while (true) {
        cout << "                                  1. Login";
        cout << "                         2. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
             carRentals.login();
             if(carRentals.co==1){
             	
             	carRentals.carPooling();
				carRentals.rent();	
             	}
                break;
            case 2:
                cout << "Thanks For Using Our Service" << endl;
                return 0; 
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }
    return 0;
}
