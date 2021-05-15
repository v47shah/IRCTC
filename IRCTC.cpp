
#include<iostream.h>
#include<string.h>
#include<dos.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<process.h>
#include<fstream.h>
long int tktno2=0;
class detail
{
public:
long int tktno3,pnr;
detail()
{
tktno3=0;
pnr=0;
}
}
t;
void latest()
{
fstream f;
long int pnr;
f.open("detail.dat",ios::in|ios::binary);
while(f.read((char*)&t,sizeof(t)))
{
tktno2=t.tktno3;
pnr=t.pnr;
}
f.close();
}
void payment2()
{
clrscr();
long int cardno2,cvv2;
cout<<"Please enter your card number"<<endl;
cin>>cardno2;
clrscr();
cout<<"Enter cvv code"<<endl;
cin>>cvv2;
clrscr();
cout<<"transaction successful"<<endl;
delay(1000);
clrscr();
cout<<"Your desired food has been booked.Bon Appetit!"<<endl;
}
void payment(long int pnr)
{long int cardno,cvv;
clrscr();
cout<<"Please enter your card number"<<endl;
cin>>cardno;
clrscr();
cout<<"Please enter cvv code"<<endl;
cin>>cvv;
clrscr();
cout<<"                             Please wait";
int n=0,k=0;
while(n<=3)
{
 cout<<".";
 delay(700);
 n++;
 if(n==4&&k==0)
 {
  cout<<"\b\b\b\b    \b\b\b\b";
 k=1;n=0;
 }
}
for(int i=0;i<15;i++)
{
cout<<"\b";
}
for(i=0;i<15;i++)
{
cout<<" ";
}
for(i=0;i<15;i++)
{
cout<<"\b";
}
clrscr();
cout<<endl;
cout<<"Transaction Successful"<<endl;
latest();

cout<<"Your ticket number is:(Please note down your ticket number.)"<<++tktno2<<endl;
cout<<"Enter any key to continue"<<endl;
getch();
fstream f;
f.open("detail.dat",ios::app|ios::binary);
t.tktno3=tktno2;
t.pnr=pnr;
f.write((char*)&t,sizeof(t));
f.close();
}
void main()
{
clrscr();
int coach,rating,choice,d,m,y,tktno,price,ctktno;
long int pnr,a=0;
char yesno,ans,dish[50],cancelchoice,feedback;
ch:
clrscr();
int n=1;
cout<<"               ";
while(n<16)
{
 textcolor(n+BLINK);
 cputs("*");
 n++;
}
n--;
cout<<" ";
textcolor(YELLOW);
textbackground(BLUE);
cputs("WELCOME TO RAILWAY BOOKING");
textbackground(BLACK);
cout<<" ";
while(n>0)
{
 textcolor(n+BLINK);
 cputs("*");
 n--;
}textcolor(LIGHTGRAY);
cout<<endl;
cout<<endl;
cout<<"What do you desire to do?"<<endl;
cout<<"1.Ticket booking"<<endl;
cout<<"2.Cancellation  "<<endl;
cout<<"3.Rating        "<<endl;
cout<<"4.Food booking    "<<endl;
cout<<"5.Exit"<<endl;
cin>>choice;
clrscr();
switch(choice)
{case 1:
textcolor(GREEN);
cputs("Welcome to the booking portal\n");cout<<endl;
textcolor(LIGHTGRAY);
cputs("Enter the class in which you want to book");cout<<endl;
l:
cout<<"* 1-First class * 2-Second class * 3-Third class"<<endl;
cin>>coach;
clrscr();
if((coach==1)||(coach==2)||(coach==3))
{
cout<<"Great! Now enter your date of journey to see the trains available!"<<endl;
}
else
{
clrscr();
cout<<"Please enter a valid class."<<endl;
goto l;
}
cout<<"Enter the date"<<endl;
cin>>d;
clrscr();
cout<<"Enter the month"<<endl;
cin>>m;
clrscr();
cout<<"Enter the year"<<endl;
cin>>y;
clrscr();

  label:
 cout<<"Here is the list of all available trains for your entered date!"<<endl;
 cout<<"Pnr no.100109"<<"  "<<"Shatabdi  Express"<<"   "<<"Chennai to Banglore"<<"      "<<"18:30"<<endl;
 cout<<"Pnr no.100110"<<"  "<<"Tamilnadu Express"<<"   "<<"Chennai to Bangalore"<<"     "<<"07:00"<<endl;
 cout<<"Pnr no.100111"<<"  "<<"Rajdhani  Express"<<"   "<<"Chennai to Agra"<<"          "<<"10:30"<<endl;
 cout<<"Pnr no.100112"<<"  "<<"Pandian   Express"<<"   "<<"Chennai to Madurai"<<"       "<<"12:30"<<endl;
 cout<<"Pnr no.100113"<<"  "<<"Toronto   Express"<<"   "<<"Chennai to Coimbatore"<<"    "<<"01:00"<<endl;
 cout<<"Pnr no.100114"<<"  "<<"Kovai     Express"<<"   "<<"Chennai to Madurai"<<"       "<<"04:00"<<endl;

cout<<"Enter the pnr number of the train  you wish to book your seat(s) in!:";
cin>>pnr;
if((pnr==100109)||(pnr==100110)||(pnr==100111)||(pnr==100112)||(pnr==100113)||(pnr==100114))
{
clrscr();
ticket:
cout<<"Enter the number of tickets that you want to book!"<<endl;
cin>>tktno;
}
else {
clrscr();
textcolor(RED);
cputs("AWW! You have entered an invalid Pnr number.");cout<<endl;
cputs("Please enter a valid Pnr number");cout<<endl;
textcolor(LIGHTGRAY);
delay(2000);
clrscr();
goto label;
}
if(tktno>=10)
{
cout<<"Sorry! Not enough tickets are available."<<endl;
delay(2000);
clrscr();
goto ticket;
}
else cout<<"The price of the tickets are:";
if((pnr==100109)||(pnr==100111))
{
cout<<"Rs.1000 per ticket!"<<endl;
price=1000;
}
else
{
cout<<"Rs.650 per ticket!"<<endl;
price=650;
}
cout<<"Total Amount is="<<price*tktno<<endl;
cout<<"Do you want to proceed to payment?"<<" Y for yes, N for no";
cin>>yesno;
if(yesno=='y'||yesno=='Y')



payment(pnr);
else exit(1);
goto ch;
break;
case 2:int x=0;do
{
cout<<"Enter Pnr number"<<endl;
cin>>pnr;
clrscr();
if(pnr>=100109&&pnr<=100114)
{
cout<<"Are you sure that you want to proceed?"<<endl<<"Y for yes * N for no";

cin>>cancelchoice;
if(cancelchoice=='y'||cancelchoice=='Y')
{cout<<"Enter ticket number that you want to cancel"<<endl;
cin>>ctktno;
fstream f;
f.open("detail.dat",ios::in|ios::binary);
while(f.read((char*)&t,sizeof(t)))
{
if(t.tktno3==ctktno)
{
 if(t.pnr==pnr)
 {
cout<<"Cancellation successful!"<<endl;x=1;    }
break;
}
}
f.close();
if(x!=1)
{
textcolor(BLUE);
textbackground(GREEN);
cputs("I N V A L I D  T I C K E T  N U M B E R");cout<<endl;
textcolor(LIGHTGRAY);
textbackground(BLACK);
getch();
cout<<"Enter any key to continue"<<endl;
}
}
else
goto ch;
}
else
cout<<"Please enter a valid Pnr number!";}while(x==0);
goto ch;
break;
case 3:
rate:
cout<<"On a scale of 1-5 what would you give for our booking experience?"<<endl;
cin>>rating;
if(rating>5||rating<1)
{
cout<<"Please choose between the limit!!!"<<endl;
goto rate;
}
cout<<"On what aspects can we improve our booking experience?"<<endl;
cin>>feedback;
cout<<"Thank you for choosing our website for you booking needs!"<<endl;
cout<<" We will try to improve our services even more!"<<endl;
goto ch;
break;
case 4:
ab:
clrscr();
int k=0;
cout<<"Welcome to food booking portal"<<endl;
cout<<" Please enter valid ticket number to proceed further."<<endl;
cin>>tktno2;
fstream f;
f.open("detail.dat",ios::in|ios::binary);
while(f.read((char*)&t,sizeof(t)))
{
if(t.tktno3==tktno2)
{
pnr=t.pnr;

cout<<"Ticket number verified."<<endl;
delay(900);
clrscr();
cout<<"You are now booking food for train of pnr no:"<<pnr<<endl;
k=1;
break;
}
}
if(k==0)
{

cout<<"Please enter a valid ticket number"<<endl;                                                            //goto fxn needed
goto ab;
}
cout<<"MENU"<<endl;
cout<<"Dosa"<<"               "<<"15Rs"<<endl;
cout<<"Idli"<<"               "<<"10Rs"<<endl;
cout<<"Chappati"<<"           "<<"20Rs"<<endl;
cout<<"Pizza(veg)"<<"         "<<"30Rs"<<endl;
cout<<"FriedRice"<<"          "<<"25Rs"<<endl;
cout<<"Pongal"<<"             "<<"15Rs"<<endl;
cout<<"Please enter the name of the dish you wish to order"<<endl;
gets(dish);
clrscr();
cout<<"Do you wish to proceed for payment? Y or N"<<endl;
cin>>ans;
if(ans=='y'||ans=='Y')
{
payment2();
goto ch;   }
else
goto ch;
case 5:
exit(1);
}
getch();
} 
