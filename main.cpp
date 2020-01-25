#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main (){

    const float ADULT_TICKET_PRICE = 6.0;
    const float CHILD_TICKET_PRICE = 3.0;
    const float BOX_OFFICE_PERCENTAGE = 0.2;


    cout << "Movie Title: "; 
    string movieTitle;
    getline(cin,movieTitle);

    cout << "# of Adult Tickets: ";
    int adultTickets;
    cin >> adultTickets;

    cout << "# of Child Tickets: ";
    int childTicket;
    cin >> childTicket;

    float grossProfit = (adultTickets * ADULT_TICKET_PRICE) + (childTicket * CHILD_TICKET_PRICE);

    float distributorProfit = grossProfit - (grossProfit * BOX_OFFICE_PERCENTAGE);

    float netBoxOfficeProfit = grossProfit * BOX_OFFICE_PERCENTAGE;


    cout << fixed << setprecision(2) << endl;
    cout << "Movie Title " << movieTitle << endl;
    cout << "Adult Tickets: " << adultTickets << endl;
    cout << "Child Tickets: " << childTicket << endl;
    cout << "Gross Box Office Profit: $" << grossProfit << endl;
    cout << "Amount Paid to Distributor: -$" << distributorProfit << endl;
    cout << "Net Box Office Profit: $" << netBoxOfficeProfit << endl;


    return 0;
}