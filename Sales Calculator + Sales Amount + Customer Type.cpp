#include <iostream>
#include <iomanip>
using namespace std;
int main (){
    
    int t;
    double SalesAmount,grossSales, discount;
    string c;
    
    cout << "Please enter Customer's Name: ";
    getline (cin,c);
    cout << "Sales Amount: ";
    cin >> SalesAmount;
    cout << "Enter Customer Type (1-wholesare, 2-Retailer): ";
    cin >> t;
    
    switch (t){
    case 1: 
          if (SalesAmount >=1 && SalesAmount <= 20000){
            discount =SalesAmount * 0;
            cout  << "Customer Name: ..............." <<c <<endl;
            cout<<fixed<<setprecision (2);
            cout << "Sales Amount: ................" <<SalesAmount <<endl;
            cout<<fixed<<setprecision (2);
            cout << "Discount (Wholesaler)........." <<discount <<endl;
            cout<<fixed<<setprecision (2);
            grossSales = SalesAmount - discount;
            cout << "GROSS SALES: ................." <<grossSales <<endl;
            
          }
        else if (SalesAmount >=20001 && SalesAmount <= 50000){
            discount = SalesAmount * 0.05;
            cout  << "Customer Name: ..............." <<c <<endl;
            cout<<fixed<<setprecision (2);
            cout << "Sales Amount: ................" <<SalesAmount <<endl;
            cout<<fixed<<setprecision (2);
            cout << "Discount (Wholesaler)........." <<discount <<endl;
            cout<<fixed<<setprecision (2);
           grossSales = SalesAmount - discount;
            cout << "GROSS SALES: ................." <<grossSales <<endl;
        
    }
        else if (SalesAmount >=50001 && SalesAmount <= 70000){
            discount = SalesAmount * 0.07;
             cout  << "Customer Name: ..............." <<c <<endl;
             cout<<fixed<<setprecision (2);
            cout << "Sales Amount: ................" <<SalesAmount <<endl;
            cout<<fixed<<setprecision (2);
            cout << "Discount (Wholesaler)........." <<discount <<endl;
            cout<<fixed<<setprecision (2);
            grossSales = SalesAmount - discount;
            cout << "GROSS SALES: ................." <<grossSales <<endl;
            
    }
        else if (SalesAmount >=70001){
            discount = SalesAmount * 0.09;
             cout  << "Customer Name: ..............." <<c <<endl;
             cout<<fixed<<setprecision (2);
            cout << "Sales Amount: ................" <<SalesAmount <<endl;
            cout<<fixed<<setprecision (2);
            cout << "Discount (Wholesaler)........." <<discount <<endl;
            cout<<fixed<<setprecision (2);
         grossSales = SalesAmount - discount;
            cout << "GROSS SALES: ................." <<grossSales <<endl;
            
    }
        else{
            cout << "Invalid Amount!";
        }
    break;
    
    case 2:{
       if (SalesAmount >=1 && SalesAmount<= 10000){
            discount = SalesAmount * 0.00;
             cout  << "Customer Name: ..............." <<c <<endl;
             cout<<fixed<<setprecision (2);
            cout << "Sales Amount: ................" <<SalesAmount <<endl;
            cout<<fixed<<setprecision (2);
            cout << "Discount (Wholesaler)........." <<discount <<endl;
            cout<<fixed<<setprecision (2);
          grossSales = SalesAmount - discount;
            cout << "GROSS SALES: ................." <<grossSales <<endl;
            
}
        else if (SalesAmount >=10001 && SalesAmount <= 20000){
            discount = SalesAmount * 0.03;
            cout  << "Customer Name: ..............." <<c <<endl;
            cout<<fixed<<setprecision (2);
            cout << "Sales Amount: ................" <<SalesAmount <<endl;
            cout<<fixed<<setprecision (2);
            cout << "Discount (Wholesaler)........." <<discount <<endl;
            cout<<fixed<<setprecision (2);
            grossSales = SalesAmount - discount;
            cout << "GROSS SALES: ................." <<grossSales <<endl;
           
}
        else if (SalesAmount >=20001){
            discount = SalesAmount * 0.05;  
             cout  << "Customer Name: ..............." <<c <<endl;
             cout<<fixed<<setprecision (2);
            cout << "Sales Amount: ................" <<SalesAmount <<endl;
            cout<<fixed<<setprecision (2);
            cout << "Discount (Wholesaler)........." <<discount <<endl;
            cout<<fixed<<setprecision (2);
           grossSales = SalesAmount - discount;
            cout << "GROSS SALES: ................." <<grossSales <<endl;
        }
        else{
            cout << "Invalid Amount! ";
        }
    break;    
}
    default:
    cout << "INVALID CUSTOMER TYPE! ";
}
}