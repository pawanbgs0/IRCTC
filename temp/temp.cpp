#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int add(int a, int b)
{
    return a + b;
}

int main()
{
    // Read the input values from the HTML form
    string input1 = getenv("QUERY_STRING");
    int num1 = stoi(input1.substr(input1.find("num1=")+5, input1.find("&num2=")-(input1.find("num1=")+5)));
    int num2 = stoi(input1.substr(input1.find("&num2=")+6));

    // Calculate the sum using the add() function
    int sum = add(num1, num2);

    // Return the result to the HTML page
    cout << "Content-type:text/html\r\n\r\n";
    cout << "<html>\n";
    cout << "<head>\n";
    cout << "<title>Addition Result</title>\n";
    cout << "</head>\n";
    cout << "<body>\n";
    cout << "<h2>The sum of " << num1 << " and " << num2 << " is " << sum << ".</h2>\n";
    cout << "</body>\n";
    cout << "</html>\n";

    return 0;
}
