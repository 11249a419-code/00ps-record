#include <iostream>
using namespace std;
class Book
 {
private:
    string Title;
    string Author;
    int pages;

public:
    void setDetails(string t, string a, int p);
    void printDetails();
};
void Book::setDetails(string t, string a, int p) {
    Title = t;
    Author = a;
    pages = p;
}

void Book::printDetails() {
    cout << "Book Title: " << Title << endl;
    cin >> BookTitle;
    cout << "Author: " << Author << endl;
    cin >> Author;
    cout << "Number of Pages: " << pages << endl;
    cin >> pages;
};
int main(){
cin >> ("Book Title","Author","pages");
    Book Titlel.getData();
    Authorl.getData();
    pagesl.getData();
return 0;
}
