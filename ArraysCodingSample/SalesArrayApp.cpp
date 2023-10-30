#include <iostream>
#include <string>
#include <iomanip>
#include <ios>
using namespace std;

int main()
{
    string store[5];
    double MonthlySales[5][5] = {0};

    int lengthC = sizeof(MonthlySales[0]) / sizeof(double);

    int lengthR = (sizeof(MonthlySales) / sizeof(double)) / lengthC;

    cout << "Monthly Sales Application\n=========================" << endl;
    for (int r = 0; r < lengthR; r++) {

        cout << "Please enter the store #" << (r+1) << " name: ";
        getline(cin, store[r]);
        
        for (int c = 0; c < lengthC - 1; c++) {
            cout << "Please enter sales for " << store[r] << " store month #" << (c+1) << ": ";
            cin >> MonthlySales[r][c];
            MonthlySales[r][lengthC - 1] += MonthlySales[r][c];
        }
        cin.ignore(); 
    }

    cout << "Monthly Sales Report\n====================" << endl;
    for (int r = 0; r < lengthR; r++) {

        cout << store[r] <<  " Monthly Sales: ";

        for (int c = 0; c < lengthC - 1; c++) {

            cout << MonthlySales[r][c] << setw(5);

        }
        cout << " Total Sales: " << MonthlySales[r][lengthC - 1];
        cout << endl;
    }
    
}


