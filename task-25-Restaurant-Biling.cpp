#include <iostream>
using namespace std;

class RestaurantBill {
private:
    string customerName;
    int pastaQty, burgerQty, pizzaQty;
    int total;

public:
    RestaurantBill() {
        pastaQty = burgerQty = pizzaQty = 0;
        total = 0;
    }

    void takeOrder() {
        cout << "Enter customer name: ";
        cin >> customerName;

        int choice, qty;
        do {
            cout << "\n--- Menu ---\n";
            cout << "1. Pasta (Rs. 120)\n";
            cout << "2. Burger (Rs. 80)\n";
            cout << "3. Pizza (Rs. 150)\n";
            cout << "4. Finish Order\n";
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    cout << "Enter quantity of Pasta: ";
                    cin >> qty;
                    pastaQty += qty;
                    break;
                case 2:
                    cout << "Enter quantity of Burger: ";
                    cin >> qty;
                    burgerQty += qty;
                    break;
                case 3:
                    cout << "Enter quantity of Pizza: ";
                    cin >> qty;
                    pizzaQty += qty;
                    break;
                case 4:
                    cout << "Finishing order...\n";
                    break;
                default:
                    cout << "Invalid choice! Try again.\n";
            }

        } while (choice != 4);
    }

    int calculateBill() {
        total = pastaQty * 120 + burgerQty * 80 + pizzaQty * 150;
        return total;
    }

    void printBill() {
        cout << "\nCustomer: " << customerName << endl;

        if (pastaQty > 0)
            cout << "Pasta X " << pastaQty << " : - " << pastaQty * 120 << " rupees" << endl;

        if (burgerQty > 0)
            cout << "Burger X " << burgerQty << " : - " << burgerQty * 80 << " rupees" << endl;

        if (pizzaQty > 0)
            cout << "Pizza X " << pizzaQty << " : - " << pizzaQty * 150 << " rupees" << endl;

        cout << "Total : - " << total << " rupees\n" << endl;
    }
};

void daySummary(int totalCollection) {
    cout << "----------- Day Summary -----------\n";
    cout << "Total collection :- " << totalCollection << " rupees\n";
}

int main() {
    int customers, totalDayCollection = 0;

    cout << "Enter number of customers: ";
    cin >> customers;

    for (int i = 0; i < customers; ++i) {
        RestaurantBill rb;
        rb.takeOrder();
        totalDayCollection += rb.calculateBill();
        rb.printBill();
    }

    daySummary(totalDayCollection);

    return 0;
}

// OUTPUT :- 

// Enter number of customers: 1
// Enter customer name: keyur

// --- Menu ---
// 1. Pasta (Rs. 120)
// 2. Burger (Rs. 80)
// 3. Pizza (Rs. 150)
// 4. Finish Order
// Enter your choice: 1
// Enter quantity of Pasta: 1

// --- Menu ---
// 1. Pasta (Rs. 120)
// 2. Burger (Rs. 80)
// 3. Pizza (Rs. 150)
// 4. Finish Order
// Enter your choice: 2
// Enter quantity of Burger: 2

// --- Menu ---
// 1. Pasta (Rs. 120)
// 2. Burger (Rs. 80)
// 3. Pizza (Rs. 150)
// 4. Finish Order
// Enter your choice: 3
// Enter quantity of Pizza: 2

// --- Menu ---
// 1. Pasta (Rs. 120)
// 2. Burger (Rs. 80)
// 3. Pizza (Rs. 150)
// 4. Finish Order
// Enter your choice: 4
// Finishing order...

// Customer: keyur
// Pasta X 1 : - 120 rupees
// Burger X 2 : - 160 rupees
// Pizza X 2 : - 300 rupees
// Total : - 580 rupees

// ----------- Day Summary -----------
// Total collection :- 580 rupees
