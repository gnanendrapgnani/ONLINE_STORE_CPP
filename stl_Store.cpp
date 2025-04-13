#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <list>
#include <map>
#include <set>
#include <ctime>
#include <unordered_set>
#include <unordered_map>

using namespace std;

struct Product
{
    int productID;
    string name;
    string category;
};

struct Order
{
    int orderID;
    int productID;
    int quntity;
    string customerID;
    time_t orderDate;
};

int main()
{
    vector<Product> products = {
        {101, "Laptop", "Electronics"},
        {102, "Mobile", "Electronics"},
        {103, "PS5", "Electronics"},
        {104, "Stove", "Kitchen"},
        {105, "Table", "Home"},
    };

    deque<string> recentCustomer{

        "C001",
        "C002",
        "C003",
    };

    recentCustomer.push_back("C004");
    recentCustomer.push_front("C005");

    list<Order> orderHistry;

    orderHistry.push_back({1, 101, 1, "C001", time(0)});
    orderHistry.push_back({2, 102, 2, "C001", time(0)});
    orderHistry.push_back({3, 103, 3, "C002", time(0)});
    orderHistry.push_back({4, 104, 2, "C003", time(0)});

    set<string> categories;

    for (const auto &product : products)
    {
        categories.insert(product.category);
    }

    map<int, int> productStock = {
        {101, 10},
        {102, 20},
        {103, 80},
        {104, 40},
        {105, 5},
    };

    multimap<string, Order> customerOrders;

    for (const auto &order : orderHistry)
    {
        customerOrders.insert({order.customerID, order});
    }

    unordered_map<string, string> customerData = {
        {"C001", "Gnani"},
        {"C002", "Lakshmi"},
        {"C003", "Rakshitha"},
        {"C004", "Sahana"},
    };

    unordered_set<int> uniqueProductID;

    for (const auto &product : products)
    {
        uniqueProductID.insert(product.productID);
    }

    return 0;
}
