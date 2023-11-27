//#include <iostream>
//#include <fstream>
//#include <iomanip>
//
//using namespace std;
//
//const int pos_width = 7;
//const int unit_width = 18;
//const int total_total_width = pos_width + unit_width*4;
//
//
//int main() {
//    cout << "Enter number of products: ";
//    int numProducts;
//    cin >> numProducts;
//
//    ofstream outFile("invoice.txt");
//
//    outFile << left << setw(pos_width) << "Pos." << " |";
//    outFile << right << setw(unit_width) << "Unit price" << " |" << setw(unit_width) << "Discount" << " |"
//        << setw(unit_width) << "Discounted price" << " |" << setw(unit_width) << "Quantity" << " |" << setw(unit_width+1) << "Total\n";
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
//        outFile << left << setw(pos_width) << i + 1 << " |";
//        outFile << right << setw(unit_width - 1) << fixed << setprecision(2) << price << "$ |"
//            << setw(unit_width - 1) << fixed << setprecision(2) << discount << "% |"
//            << setw(unit_width - 1) << fixed << setprecision(2) << discountedPrice << "$ |"
//            << setw(unit_width) << quantity << " |"
//            << setw(unit_width - 1) << fixed << setprecision(2) << discountedPrice * quantity << "$\n";
//    }
//
//    outFile << setw(total_total_width - 12) << "Total:" << setw(unit_width+2) << totalQuantity << " |"
//        << setw(unit_width - 1) << fixed << setprecision(2) << totalAmount << "$";
//
//    cout << "Saving invoice..." << endl;
//    outFile.close();
//    cout << "Invoice saved" << endl;
//}
