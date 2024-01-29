#include "Book.h"

Book::Book(string name, Author author, int genre, int year): name(name), Author(author), genre(genre), year(year){}
void setNameA(string name){
    this->name = name;
}
void Book::setGenre(int genre)
{
    this->genre = genre;
}
void Book::etYear(int year){
    this->year = year;
}
string Book::getNameA(string name) const{
    return this->name;
}
int Book::getGenre(int genre) const{

    return this->genre;
}
int Book::getYear(int genre) const{
return this->genre;
}
