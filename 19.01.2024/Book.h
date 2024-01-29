#ifndef BOOK_H
#define BOOK_H
#include "Author.cpp"
#include <bits/stdc++.h>
//vector<string> genre = {"classic", "children", "fantasy", "biographical", "romance"};
enum Genre { classic = 1,
             children = 2,
             fantasy = 3,
             biographical = 4,
             romance = 5
           };
void place(Genre g){
    switch(g){
        case classic: Book::setGenre(1);
        case children: Book::setGenre(2);
        case fantasy: Book::setGenre(3);
        case biographical: Book.setGenre(4);
        case romance: Book.setGenre(5);
    }
}
class Book
{
public:
    Book(string, Author, string* , int);
    void setNameA(string);
    void setGenre(int);
    void setYear(int);
    string getNameA(string) const;
    int getGenre(int) const;
    int getYear(int) const;


private:
    string name;
    Author author;
    int genre;
    int year;
    string str[5];
};

#endif // BOOK_H
