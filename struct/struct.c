#include <stdio.h>
#include <string.h>

struct Books{
  char title[50];
  char author[50];
  char subject[100];
  int book_id;
};

void printBook(struct Books book);
void addressOfPrintBook(struct Books *book);
int main(){
  struct Books Book1;
  struct Books Book2;

  strcpy(Book1.title, "C programming");
  strcpy(Book1.author, "Nuha ali");
  strcpy(Book1.subject, "c programming tutorial");
  Book1.book_id = 645907;

  printf("%s\n",Book1.title);
  printf("%s\n",Book1.author);
  printf("%s\n",Book1.subject);
  printf("%d\n",Book1.book_id);

  printBook(Book1);

  addressOfPrintBook(&Book1);

  return 0;

}

void printBook(struct Books book) {
  printf("%s\n", book.title);
  printf( "Book author : %s\n", book.author);
  printf( "Book subject : %s\n", book.subject);
  printf( "Book book_id : %d\n", book.book_id);
}

void addressOfPrintBook(struct Books *book){
  printf("Book title : %s\n", book->title);
  printf("Book Author : %s\n", book -> author);
  printf("Book subject : %s\n", book -> subject);
}

