#ifndef CARRENTAL_H
#define CARRENTAL_H
#include <iostream>
#include <string>
using namespace std;
#include"mainclass.h"

void CarRentals::rent() {
    struct Cars {
        string company[200] = {"Maruti Suzuki", "Volkswagen", "BMW", "Audi", "KIA", "Tesla", "Mercedes", "Mahindra", "TATA"};
        string model[200] = {"800", "2020", "Q7", "R8", "Saltos", "S-Series", "Benz", "Thar", "Nano"};
        string color[200] = {"Yellow", "Black", "Red", "Brown", "Blue", "Silver", "Balck", "Grey", "Red"};
        string max_speed[200] = {"80 Km/h ", "200 Km/h", "300 Km/h", "250 Km/h", "320 Km/h", "400 Km/h", "200 Km/h", "250 Km/h", "280 Km/h"};
        int price[100] = {10000, 20000, 50000, 40000, 50000, 50000, 20000, 20000, 20000};
        int date[100] = {2020, 2012, 2019, 2018, 2017, 2016, 2015, 2021, 2010};
    } car;

    struct LeaseInfo {
        string Name[100];
        string Natio_ID[100];
        int payment_acc[100];
    } lease;
    char c;
     cout << "\t\t\t----------------------------------------\n";
    cout<<"\t\t\tEnter Y for Car Rentals:\n";
    cin>>c;
    if(c=='Y'||c=='y'){
	
    string decide = "yes";
    cout << "\t\t\t----------------------------------------------\n";
    cout << "\t\t\t\tSIMPLE CAR RENTAL SYSTEM \n";
    cout << "\t\t\tWelcome to Our Company, Choose from the menu : " << endl;
    cout << "\t\t\t----------------------------------------------\n";
    while (decide != "exit") {
        int num = 1;
        for (int i = 0; i < 9; ++i) {
            cout << "\t\t\t";
            cout << "Enter " << num << "\t- To Select  " << car.company[i] << endl;
            num++;
        }

        cout << "\n\n\n\t\t\tYour Choice: ";
        int theChoice;
        cin >> theChoice;

        system("CLS");
        cout << "\n\n\n\t\t\t-----------------------------\n";
        cout << "\t\t\tYou Have Selected - " << car.company[theChoice - 1] << endl;
        cout << "\t\t\t-----------------------------\n\n\n";
        cout << "\t\t\tModel : " << car.model[theChoice - 1] << endl;
        cout << "\t\t\tColor : " << car.color[theChoice - 1] << endl;
        cout << "\t\t\tMaximum Speed : " << car.max_speed[theChoice - 1] << endl;
        cout << "\t\t\tPrice : " << car.price[theChoice - 1] << endl;

        cout << "\n\n\n\t\t\tAre You Sure, you want to rent this Car? (yes/no/exit): ";
        cin >> decide;

        if (decide == "yes") {
            int j = theChoice - 1;
            cout << "\t\t\t----------------------------------------\n";
            cout << "\t\t\tPlease Provide Your Personal Details  : \n";
            cout << "\t\t\t----------------------------------------\n\n";
            cout << "\n\tNOTE: PROVIDE FIRST NAME ONLY, DONOT ENTER SPACE WHILE PROVIDING NAME,\n\tPAYMENT WON'T PROCEED IF THE GIVEN AMOUNT IS LESS THAN THE RATE OF CAR\n\n\n\n";
            cout << "\t\t\tEnter Your Name : ";
            cin >> lease.Name[100];
            cout << "\t\t\tEnter Your National ID : ";
            cin >> lease.Natio_ID[j];
            cout << "\t\t\tPayment Amount: ";
            cin >> lease.payment_acc[j];

            if (lease.payment_acc[j] >= car.price[j])
                cout << "\n\n\n\t\t\tProcess has been done successfully!! " << endl;
            else
                cout << "\n\n\n\t\t\tNot Available " << endl;

            cout << "\n\n\t\t\tDo you want to continue? (yes/no) ";
            cin >> decide;

            if (decide == "no")
                break;

            system("CLS");
        } else {
            if (decide == "no") {
                system("CLS");
                continue;
            } else if (decide == "exit") {
                system("CLS");
                break;
            }
        }
    }

    cout << "Exiting Car Rental System." << endl;
}
else{
	cout << "\t\t\t----------------------------------------\n";
	cout<<"Thank You for Using Our Service";
}
}

#endif

