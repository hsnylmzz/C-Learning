#include <iostream>
using namespace std;

class Book{
   public:
     Book(string,string,int);
     void setBookName(string);
     void setAuthor(string);
     void setCost(int);
     string getBookName();
     string getAuthor();
     int getCost();

   private:
     string book_name;
     string author;
     int book_cost;
};
Book::Book(string n,string a,int c)
{
  book_name = n;
  author = a;
  book_cost = c;
}
void Book::setBookName(string b)
{
  book_name = b;
}
void Book::setAuthor(string a)
{
  author = a;
}
void Book::setCost(int c)
{
  book_cost = c;
}
string Book::getBookName()
{
  return book_name;
}
string Book::getAuthor()
{
  return author;
}
int Book::getCost()
{
  return book_cost;
}
int main() {
  Book book("Kuyucaklı Yusuf","Sebahattin Ali",6);
  string kitap_adi,yazar;
  int ucret = book.getCost();
  kitap_adi = book.getBookName();
  yazar = book.getAuthor();

  cout << "Kitabın Adı : " << kitap_adi << endl;
  cout << "Yazarı : " << yazar << endl;
  cout << "Kitabın Ucreti : " << ucret << endl;
}