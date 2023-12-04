#include <iostream>
using namespace std;
class Sales_office{
public:	
	int total_expense;
    int total_sales;
    int total_products;
    s
    Sales_office(int expense, int sales, int products) : total_expense(expense), total_sales(sales), total_products(products){ }
};
class revenue_calculator{
private:
    int total_expenses;
    int grand_total_sales;
    int grand_total_products;
    int grand_total_revenue;
public:
    revenue_calculator() : total_expenses(0), grand_total_sales(0), grand_total_products(0), grand_total_revenue(0) {}	

   void calculate_revenue(const Sales_office& office1, const Sales_office& office2) {
        total_expenses = office1.total_expense + office2.total_expense;
        grand_total_sales = office1.total_sales + office2.total_sales;
        grand_total_products = office1.total_products + office2.total_products;
        grand_total_revenue = grand_total_sales - total_expenses;
    }
    void printInfo() const {
        cout << "Grand Total Sales: " << grand_total_sales << endl;
        cout << "Grand Total Products: " << grand_total_products << endl;
        cout << "Total Expenses: " << total_expenses << endl;
        cout << "Grand Total Revenue: " << grand_total_revenue << endl;
    }
};
    int main() {
    Sales_office office1(1000, 3000, 100);
    Sales_office office2(2000, 4000, 200);

    revenue_calculator calculator;

    calculator.calculate_revenue(office1, office2);

    calculator.printInfo();

    return 0;
}



