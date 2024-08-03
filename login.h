#ifndef LOGIN_H
#define LOGIN_H
#include<iostream>
#include<fstream>
#include <conio.h> 
using namespace std;
#include"mainclass.h"
//class CarRentals;
void CarRentals::login()
{   cout << "\t\t\t----------------------------------------\n";
    cout<<"\t\t\t   ********** LOGIN PROTAL *********\n";
    cout << "\t\t\t----------------------------------------\n";
    cout<<"\t\t\tLogin your account or else Create account \n";
      
    cout<<"\t\t\t\1.Create(1)\n \t\t\t\1.Login(2)"<<endl;
    int k;
    string email,pass,name,mobile,e,p,n,m,em,pas;
    cout<<"Enter your choice: ";
    cin>>k;
    if(k==1)
    {
        cout<<"Enter name : ";
        cin>>name;
        cout<<"Enter mobile : ";
        cin>>mobile;
        cout<<"Enter email:";
        cin>>email;
        cout<<"Enter pass : ";
       pass = "";
        char ch;
        while ((ch = _getch()) != 13) { // 13 is the ASCII value for Enter key
            if (ch == '\b') { // Backspace
                if (!pass.empty()) {
                    pass.erase(pass.size() - 1); // Erase the last character
                    cout << "\b \b"; // Move the cursor back and overwrite the last '*' with a space
                }
            } else {
                pass.push_back(ch);
                cout << "*";
            }
        }
        cout<<"\nYour account has been created."<<endl;
        ofstream myfile("login.txt",ios::app);
        myfile<<name<<" "<<mobile<<" "<<email<<" "<<pass<<endl;
        myfile.close();
    }

    else if(k==2)
    {
        
        cout<<"Enter email:";
        cin>>e;
        cout<<"Enter pass : ";
    p = "";
        char ch;
        while ((ch = _getch()) != 13) { 
            if (ch == '\b') { // Backspace
                if (!p.empty()) {
                    p.erase(p.size() - 1); // Erase the last character
                    cout << "\b \b"; // Move the cursor back and overwrite the last '*' with a space
                }
            } else {
                p.push_back(ch);
                cout << "*";
            }
        }
        ifstream myfile1("login.txt");
        while(myfile1>>n>>m>>em>>pas)
        {
        	
            if(em==e && pas==p)
            {
                
                co=1;
            } 
        }
        if(co==1)
        {
        	 cout <<"\n\n\n\n\t\t\tAccess Granted! Welcome To Our System \n\n";
            
        }
        else
        {
            cout<<"\nSorry! incorrect id and password"<<endl;
            cout<<"\nTry again please"<<endl;
            exit(0);
        }
        myfile1.close();
    }
}

#endif

