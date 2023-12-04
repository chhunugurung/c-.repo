#include<iostream>
using namespace std;
class Sales_office{
private:
	int totalExpenses;
    int totalSalesValue;
    int totalRevenue;
    int totalProductsSold;
public:
    Sales_office(int exp, int sales, int revenue, int product)
        : totalExpenses(exp), totalSalesValue(sales),
          totalRevenue(revenue), totalProductsSold(product) {}
          
    void settotalExpenses(int exp) {
        totalExpenses = exp;
    }

    void settotalSalesValue(int sales) {
        totalSalesValue = sales;
    }

    void settotalRevenue(int revenue) {
        totalRevenue = revenue;
    }

    void settotalProductsSold(int product) {
        totalProductsSold = product;
    } 
	
	void print() {
        cout << "Total Expenses: " << totalExpenses << endl;
        cout << "Total Sales Value: " << totalSalesValue << endl;
        cout << "Total Revenue: " << totalRevenue << endl;
        cout << "Total Products Sold: " << totalProductsSold << endl;
    } 
    
    
int main() {

    Sales_office office(500, 1000, 1500, 100);

    cout << "Initial Values:" << endl;
    office.print();

    office.settotalExpenses(600);
    office.settotalSalesValue(1200);
    office.settotalRevenue(1800);
    office.settotalProductsSold(150);

    cout << "Updated Values:" << endl;
    office.print();

    return 0;
}

	
	
	
	
	
	
	
	
	
	
	
	     
    
};