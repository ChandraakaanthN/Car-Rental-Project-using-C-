#ifndef CARPOOL_H
#define CARPOOL_H
#include<iostream>
#include<fstream>
using namespace std;
#include"mainclass.h"
class CarRentals;
void CarRentals::carPooling() {
    string Pilot, Destination, Pickup, D, P, Contact_Number, date;
    int cost, seats;
    char c, v;
    cout << "\t\t\t----------------------------------------\n";
    cout << "\t\t\tDo You Want to Publish a Ride(Y/N)?\n\n";
    cin >> c;
    
    if (c == 'Y' || c == 'y') {
        cout<<"Enter Your Name:"<<endl;
        cin>>Pilot;
        cout<<"Contact Number:"<<endl;
        cin>>Contact_Number;
        cout<<"Enter Pickup Point:" << endl;
        cin>>Pickup;
        cout<<"Enter Destination Point:" << endl;
        cin>>Destination;
        cout<<"Enter the date(dd/mm/yy):" << endl;
        cin>>date;

            cout << "Enter number of seats available:" << endl;
            cin >> seats;
            cout << "Enter cost per seat:" << endl;
            cin >> cost;
            cout<<"********Hurray! Your Raid got Published!********\n";
            ofstream myfile2("Carpool.txt", ios::app);
            myfile2 << Pilot << " " << Contact_Number << " " << Pickup << " " << Destination << " " << seats << " " << cost << " " << date << endl;
            myfile2.close();
        
    }
   
    	
    		  cout << "\t\t\t----------------------------------------\n";
    cout << "\t\t\tDo You want To Pool? (Y/N):\n\n";
    string p, d, n, dt;
    int service;
    char response;
    cin >> response;
    int s;
    
    if (response == 'Y' || response == 'y') {
        cout << "Enter your Name: " ;
        cin >> n;
        cout << "Enter Pickup Point:" ;
        cin >> p;
        cout << "Enter Destination Point:" ;
        cin >> d;
        cout << "Enter the date:" ;
        cin >> dt;
        cout << "Enter Y to see details:" << endl;
        char t;
        cin >> t;
        
        if (t == 'Y' || t == 'y') {
            ifstream myfile4("Carpool.txt");
            ofstream tempFile("tempcar.txt");
            while (myfile4 >> Pilot >> Contact_Number >> Pickup >> Destination >> seats >> cost >> date) {
                if (Pickup == p && Destination == d && date == dt) {
                    if (seats == 0) {
                        cout << "Service Not available." << endl;
                        break;
                    }
                    else {
                        cout << "Service Available" << endl;
                        cout << "Number of seats Available: " << seats << endl;
                        cout << "Enter the Number of Seats You want to Book:" << endl;
                        cin >> s;
                        if (s <= seats) {
                            seats = seats - s;
                            int price = cost * s;
                            cout << "Total Price: " << price << endl;
                            cout << "Contact Number of Driver: " << Contact_Number << endl;
                            cout << "Driver will reach you On Time." << endl;
                            cout << "Thank You Using Our Service." << endl;
                            ofstream myfile5("Bookingdetails.txt", ios::app);
                            myfile5 << n << " " << s << " " << dt << " " << price << endl;
                        }
                        else {
                            cout << "Invalid input! Not enough seats available." << endl;
                        }
                    }
                }
                else{
                	cout<<"Service Not available";
				}
               
                tempFile << Pilot << " " << Contact_Number << " " << Pickup << " " << Destination << " " << seats << " " << cost << " " << date << endl;
            }
            myfile4.close();
            tempFile.close();
            remove("Carpool.txt");
            rename("tempcar.txt", "Carpool.txt");
        }
        else{
		
    }
	}
	else{
		
	}

    }
#endif
