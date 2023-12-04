#include<iostream>
using namespace std;
void  calculate(int& Totalexpenses, int& TotalSalesvalue, int& TotalRevenue, int& TotalProductsSold){
	//for salesoffice1
	int Expenses1 = 100;
	int salesvalue1 = 200;
	int Revenue1 = salesvalue1 - Expenses1;
	int ProductsSold1 = 10;
	
	//for salesoffice2
	int Expenses2 = 150;
	int salesvalue2 = 250;
	int Revenue2 = salesvalue2 - Expenses2;
	int ProductsSold2 = 15;
	
	// total
	Totalexpenses = Expenses1 + Expenses2;
	TotalSalesvalue = salesvalue1 + salesvalue2;
	TotalRevenue = Revenue1 + Revenue2;
	TotalProductsSold = ProductsSold1 + ProductsSold2;
}

int main(){
	int Totalexpenses, TotalSalesvalue, TotalRevenue, TotalProductsSold;
	calculate(Totalexpenses, TotalSalesvalue, TotalRevenue, TotalProductsSold);
	
	cout<<"total expenses:" << Totalexpenses << endl;
	cout<<"totalsales value:" << TotalSalesvalue<< endl;
	cout<<"total revenue:" << TotalRevenue << endl;
	cout<<"total products sold:" << TotalProductsSold << endl;
	
	return 0;  
}
