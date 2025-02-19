#include "book.h"

using namespace std;

int main (){
    Book book1 ("The Great Gatsby", "F. Scott Fitzgerald", 1925);
    Book book2 ("To Kill a Mockingbird", "Harper Lee", 1960);
    Book book3 ("1984", "George Orwell", 1949);
    Book book4 ("The Catcher in the Rye", "J.D. Salinger", 1951);
    Book book5 ("The Grapes of Wrath", "John Steinbeck", 1939);
    Book book6 ("Pod Igoto", "Ivan Vazov", 1888);
    Book book7 ("Tutun", "Dimitar Dimov", 1951);
    Book book8("Top misteriite ba vselenata", "Slavi Panayotov", 2020);
    Book book9("50 nai-golemite taini na vselenata", "Slavi Panayotov", 2020);
    
    book1.show();
    book2.show();
    book3.show();
    book4.show();
    book5.show();
    book6.show();
    book7.show();
    book8.show();
    book9.show();
    return 0;
}