//#include <iostream>
//#include <fstream>
//#include <iomanip>
//
//using namespace std;
//
//int main() {
//    cout << "Enter number of products: ";
//    int numProducts;
//    cin >> numProducts;
//
//    ofstream outFile("invoice.txt");
//
//    outFile << setw(5) << "Pos.  |" << setw(20) << "Unit price |" << setw(20) << "Discount |" 
//        << setw(20) << "Discounted price |" << setw(20) << "Quantity |" << setw(23) << "Total\n";
//
//    double totalQuantity = 0;
//    double totalAmount = 0;
//
//    for (int i = 0; i < numProducts; ++i) {
//        double price, discount;
//        int quantity;
//
//        cout << "(price, discount, quantity) " << i + 1 << ") ";
//        cin >> price >> discount >> quantity;
//
//        double discountedPrice = price - (price * discount / 100);
//        totalQuantity += quantity;
//        totalAmount += discountedPrice * quantity;
//
//        outFile << i + 1 << setw(6) << "|" << setw(17) << fixed << setprecision(2) << price << "$ |"
//            << setw(17) << fixed << setprecision(2) << discount << "% |"
//            << setw(17) << fixed << setprecision(2) << discountedPrice << "$ |"
//            << setw(19) << quantity << "|"
//            << setw(21) << fixed << setprecision(2) << discountedPrice * quantity << "$\n";
//    }
//
//    outFile << setw(66) << "Total:" << setw(20) << totalQuantity << "|"
//        << setw(21) << fixed << setprecision(2) << totalAmount << "$";
//
//    cout << "Saving invoice..." << endl;
//    cout << "Invoice saved" << endl;
//
//    outFile.close();
//}