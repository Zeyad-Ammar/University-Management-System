#include "Manager.h"
#include <bits/stdc++.h>
using namespace std;

void Manger::getAdministratorsInfo(vector<Administrator>& admin) {

    if (admin.empty())
    {
        cout << "No there any admin go to add admin from Manger \n";
        return;
    }
    cout << " Administrators information \n";
    for (auto& ad : admin)
    {
        cout << "Admin ID : " << ad.Id << endl;
        cout << "Admin name : " << ad.Name << endl;
        cout << "Admin email : " << ad.Email << endl;
        cout << "Admin age : " << ad.Age << endl;
        cout << "___________________________________________\n";
    }

}

void Manger::addAdministrator(Administrator& admin) {
    cout << "Enter Administrator ID : ";
    cin >> admin.Id;
    cout << "Enter Administrator name : ";
    getline(cin >> ws, admin.Name);
    cout << "Enter the Administrator age : ";
    cin >> admin.Age;
    cout << "Enter Administrator email : ";
    cin >> admin.Email;
}
