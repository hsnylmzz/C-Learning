#include <iostream>
using namespace std;

class bookType
{
   public:
    void bookTake(string,string,string,string);
    void printBook() const;

   private:
     string w_name;
     string w_surname;
     string b_name;
     string b_type;
};
void bookType::bookTake(string book_name,string writer_name,string writer_surname,string book_type)
{
  w_name = writer_name;
  w_surname = writer_surname;
  b_name = book_name;
  b_type = book_type;
}
void bookType::printBook() const
{
  cout << "Kitabın Adı : " << b_name << endl;
  cout << "Yazarın Adı : " << w_name << endl;
  cout << "Yazarın Soyadı : " << w_surname << endl;
  cout << "Kitabın Türü : " << b_type << endl;
}
int main() {
  bookType b;
  b.bookTake("Suç ve Ceza","Fyodor","Dostoyevski","Roman");
  b.printBook();
}