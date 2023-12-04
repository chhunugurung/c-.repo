#include<iostream>
using namespace std;

class Sales_office;

class revenue_calculator {
private:
	int totalExpenses;
	int totalSalesvalue;
	int totalRevenue;
	int totalproducts;
public:
	void calculate_revenue(const Sales_office &office1 , const Sales_office &office2);
	
	void print(){
        cout << "Total Expenses: " << totalExpenses << endl;
        cout << "Total Sales Value: " << totalSalesvalue << endl;
        cout << "Total Revenue: " << totalRevenue <<endl;
        cout << "Total Products: " << totalproducts << endl;
}	
};	


class Sales_office{
private: 
	int totalExpenses;
	int totalSalesvalue;
	int totalRevenue;
	int totalproducts;

public:
	Sales_office(int exp, int sales, int revenue, int product) : totalExpenses(exp), totalSalesvalue(sales),  totalRevenue(revenue), totalproducts(product) {}

    void settotalExpenses(int exp) {
        totalExpenses = exp;
    }

    void settotalSalesvalue(int sales) {
        totalSalesvalue = sales;
    }

    void settotalRevenue(int revenue) {
        totalRevenue = revenue;
    }

    void settotalproducts(int product) {
        totalproducts= product;
    } 
	
	friend class revenue_calculator;
	
};

void revenue_calculator::calculate_revenue(const Sales_office &office1, const Sales_office &office2) {
    totalExpenses = office1.totalExpenses + office2.totalExpenses;
	totalSalesvalue = office1.totalSalesvalue + office2.totalSalesvalue;
	totalRevenue= office1.totalRevenue + office2.totalRevenue;
    totalproducts = office1.totalproducts + office2.totalproducts;
}

int main() {
    Sales_office office1(100, 200, 300, 400);
    Sales_office office2(500, 600, 700, 800);

    revenue_calculator calculator;
    calculator.calculate_revenue(office1, office2);

    calculator.print();

    return 0;
}









