#include<iostream.h>
#include<conio.h>
void main()
{
struct book
{
char book_na[30];
char author[30];
int  vistior_id,b_id;
char visit_name[30];
int i;
}xx[10];
clrscr();
int i,n,count=0;
for(i=0;i<10;i++)
{
cout<<"\n enter the book_id";
cin>>b_id;
cout<<"\n enter the book name";
cin>>xx[i].book_na;
cout<<"\n enter the author name";
cin>>xx[i].author;
cout<<"\n enter the vistior_id";
cin>>xx[i].vistior_id;
cout<<"\n enter the visitor name";
cin>>xx[i].visit_name;
}
clrscr();
cout<<"\n which book you want to search  enter the book id";
cin>>n;
for(i=0;i<10;i++)
{
if(b_id==n)
count++;

}
cout<<"\n total no. of books searched"<<count;

getch();
}


