#include <string>
#include <iostream>
#ifndef BOOK_H
#define BOOK_H

class Book{
    private:
        std::string title;
        std::string author;
        int year;

    public:

    

    Book(std::string title, std::string author, int year ){
        this->title = title;
        this->author = author;
        this->year = year;
    };

    void show() const{
        std::cout << "Info for the book:\n" << "Title: " << title << 
            std::endl << "Author: " << author << std::endl << "Year: " << year <<std::endl;
    }
};

#endif