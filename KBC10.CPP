#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<stdlib.h>
#include<dos.h>
int l,l1,l2,l3,f=4,l50=0,z=15,i3=0;
long d[15]={1000,2000,3000,5000,10000,20000,40000,80000,160000,320000,640000,1250000,2500000,5000000,10000000};
void correct();
void easy(int);
void med(int);
void diff(int);
int sure();
void wrong(char []);
void quit();
void lifeline(char);
void main()
{
int i,k,a,s,x[50],flag,rest=1,r2,r1,i1,i2,c=0,r,i0;
long rs;
up:
clrscr();
a=14;
rs=0;
for(i=1;i<=15;i++)
{
for(k=1;k<=5;k++)
{
if(i>z)
{
cout<<"  "<<(char)177;
cout<<(char)177<<" ";
break;
}
else
cout<<" ";
}
s=i+a;
if(i>6)
cout<<" ";
cout<<s;
if(i>=13)
{
if(i==13)
rs=4000;
rs-=1000;
cout<<" "<<(char)16<<" Rs. "<<rs;
}
else if(i<=11 && i>=4)
{
if(i==5)
rs=1280000;
rs/=2;
cout<<" "<<(char)16<<" Rs. "<<rs;
}
else
{
if(i==1)
rs=20000000;
rs/=2;
cout<<" "<<(char)16<<" Rs. "<<rs;
}
cout<<"\n";
a-=2;
}
cout<<"\nL : lifeline\tQ : quit\n\n";
if(rest==0)
goto down;
for(i=1;i<4;i++)
randomize();
for(i1=0;i1<=50;i1++)
{
r=rand()%17;
x[i1]=r;
}
for(i0=0;c<16;i0++)
{
flag=1;
for(i2=i0-1;i2>=0;i2--)
{
if(x[i0]==x[i2])
{
flag=0;
break;
}
}
if(flag==1)
{
x[c]=x[i0];
c++;
}
}
rest=0;
down:
r2=x[i3];
cout<<"Q"<<(16-z)<<" : For Rs. "<<d[15-z]<<"\n\n";
if(z<=5)
diff(r2);
else if(z<=10)
med(r2);
else
easy(r2);
if(z!=0)
goto up;
}
void easy(int r)
{
char x;
switch(r)
{
case 0:
cout<<"Which is the national game of INDIA ?";
cout<<"\n\n";
if(l50==1)
cout<<"           ";
else
cout<<"A : Cricket";
cout<<"\t\t";
cout<<"B : Hockey";
cout<<"\n";
if(l50==1)
cout<<"            ";
else
cout<<"C : Football";
cout<<"\t\t";
cout<<"D : Kabaddi";
cout<<"\n";
cout<<"Your answer : ";
x=getch();
if(x=='b' || x=='B')
{
if(sure()==1)
correct();
}
else if(x=='c' || x=='C' || x=='A' || x=='a' || x=='D' || x=='d')
{
if(sure()==1)
wrong("B : Hockey");
}
else if(x=='q' || x=='Q')
{
quit();
}
else if(x=='l' || x=='L')
{
if(f==0)
{
clrscr();
cout<<"\n\n\tYOU HAVE NO LIFELINES\n\n\tPress any key to go back...";
getch();
}
else
lifeline('B');
}
break;
case 1:
cout<<"In which year India got Indipendence ?";
cout<<"\n\n";
cout<<"A : 1947";
cout<<"\t\t";
if(l50==1)
cout<<"        ";
else
cout<<"B : 1948";
cout<<"\n";
if(l50==1)
cout<<"        ";
else
cout<<"C : 1949";
cout<<"\t\t";
cout<<"D : 1950";
cout<<"\n";
cout<<"Your answer : ";
x=getch();
if(x=='a' || x=='A')
{
if(sure()==1)
correct();
}
else if(x=='c' || x=='C' || x=='b' || x=='B' || x=='D' || x=='d')
{
if(sure()==1)
wrong("A : 1947");
}
else if(x=='q' || x=='Q')
{
quit();
}
else if(x=='l' || x=='L')
{
if(f==0)
{
clrscr();
cout<<"\n\n\tYOU HAVE NO LIFELINES\n\n\tPress any key to go back...";
getch();
}
else
lifeline('A');
}
break;
case 2:
cout<<"How many squares are there on a Chess board ?";
cout<<"\n\n";
if(l50==1)
cout<<"      ";
else
cout<<"A : 60";
cout<<"\t\t";
cout<<"B : 62";
cout<<"\n";
cout<<"C : 64";
cout<<"\t\t";
if(l50==1)
cout<<"      ";
else
cout<<"D : 66";
cout<<"\n";
cout<<"Your answer : ";
x=getch();
if(x=='c' || x=='C')
{
if(sure()==1)
correct();
}
else if(x=='a' || x=='A' || x=='b' || x=='B' || x=='D' || x=='d')
{
if(sure()==1)
wrong("C : 64");
}
else if(x=='q' || x=='Q')
{
quit();
}
else if(x=='l' || x=='L')
{
if(f==0)
{
clrscr();
cout<<"\n\n\tYOU HAVE NO LIFELINES\n\n\tPress any key to go back...";
getch();
}
else
lifeline('C');
}
break;
case 3:
cout<<"New Delhi is on the bank of which river ?";
cout<<"\n\n";
if(l50==1)
cout<<"        ";
else
cout<<"A : Beas";
cout<<"\t\t";
cout<<"B : Ganga";
cout<<"\n";
cout<<"C : Yamuna";
cout<<"\t\t";
if(l50==1)
cout<<"              ";
else
cout<<"D : Brahmputra";
cout<<"\n";
cout<<"Your answer : ";
x=getch();
if(x=='c' || x=='C')
{
if(sure()==1)
correct();
}
else if(x=='a' || x=='A' || x=='b' || x=='B' || x=='D' || x=='d')
{
if(sure()==1)
wrong("C : Yamuna");
}
else if(x=='q' || x=='Q')
{
quit();
}
else if(x=='l' || x=='L')
{
if(f==0)
{
clrscr();
cout<<"\n\n\tYOU HAVE NO LIFELINES\n\n\tPress any key to go back...";
getch();
}
else
lifeline('C');
}
break;
case 4:
cout<<"Which Indian city is also called Pink city ?";
cout<<"\n\n";
if(l50==1)
cout<<"      ";
else
cout<<"A : Ajmer";
cout<<"\t\t";
if(l50==1)
cout<<"           ";
else
cout<<"B : Kolkata";
cout<<"\n";
cout<<"C : Jodhpur";
cout<<"\t\t";
cout<<"D : Jaipur";
cout<<"\n";
cout<<"Your answer : ";
x=getch();
if(x=='d' || x=='D')
{
if(sure()==1)
correct();
}
else if(x=='a' || x=='A' || x=='b' || x=='B' || x=='C' || x=='c')
{
if(sure()==1)
wrong("D : Jaipur");
}
else if(x=='q' || x=='Q')
{
quit();
}
else if(x=='l' || x=='L')
{
if(f==0)
{
clrscr();
cout<<"\n\n\tYOU HAVE NO LIFELINES\n\n\tPress any key to go back...";
getch();
}
else
lifeline('D');
}
break;
case 5:
cout<<"How many colors are in Rainbow ?";
cout<<"\n\n";
if(l50==1)
cout<<"      ";
else
cout<<"A : 6";
cout<<"\t\t";
cout<<"B : 7";
cout<<"\n";
cout<<"C : 9";
cout<<"\t\t";
if(l50==1)
cout<<"      ";
else
cout<<"D : 11";
cout<<"\n";
cout<<"Your answer : ";
x=getch();
if(x=='b' || x=='B')
{
if(sure()==1)
correct();
}
else if(x=='a' || x=='A' || x=='c' || x=='C' || x=='D' || x=='d')
{
if(sure()==1)
wrong("B : 7");
}
else if(x=='q' || x=='Q')
{
quit();
}
else if(x=='l' || x=='L')
{
if(f==0)
{
clrscr();
cout<<"\n\n\tYOU HAVE NO LIFELINES\n\n\tPress any key to go back...";
getch();
}
else
lifeline('B');
}
break;
case 6:
cout<<"Which is the National Flower of India ?";
cout<<"\n\n";
if(l50==1)
cout<<"        ";
else
cout<<"A : Rose";
cout<<"\t\t";
cout<<"B : Lotus";
cout<<"\n";
cout<<"C : Lily";
cout<<"\t\t";
if(l50==1)
cout<<"             ";
else
cout<<"D : Sunflower";
cout<<"\n";
cout<<"Your answer : ";
x=getch();
if(x=='b' || x=='B')
{
if(sure()==1)
correct();
}
else if(x=='a' || x=='A' || x=='c' || x=='C' || x=='D' || x=='d')
{
if(sure()==1)
wrong("B : Lotus");
}
else if(x=='q' || x=='Q')
{
quit();
}
else if(x=='l' || x=='L')
{
if(f==0)
{
clrscr();
cout<<"\n\n\tYOU HAVE NO LIFELINES\n\n\tPress any key to go back...";
getch();
}
else
lifeline('B');
}
break;
case 7:
cout<<"Which is the National Animal of Australia ?";
cout<<"\n\n";
cout<<"A : Kangaroo";
cout<<"\t\t";
if(l50==1)
cout<<"         ";
else
cout<<"B : Tiger";
cout<<"\n";
cout<<"C : Kivi";
cout<<"\t\t";
if(l50==1)
cout<<"      ";
else
cout<<"D : Elephant";
cout<<"\n";
cout<<"Your answer : ";
x=getch();
if(x=='a' || x=='A')
{
if(sure()==1)
correct();
}
else if(x=='c' || x=='C' || x=='b' || x=='B' || x=='D' || x=='d')
{
if(sure()==1)
wrong("A : Kangaroo");
}
else if(x=='q' || x=='Q')
{
quit();
}
else if(x=='l' || x=='L')
{
if(f==0)
{
clrscr();
cout<<"\n\n\tYOU HAVE NO LIFELINES\n\n\tPress any key to go back...";
getch();
}
else
lifeline('A');
}
break;
case 8:
cout<<"Who was the First Prime Minister of India ?";
cout<<"\n\n";
if(l50==1)
cout<<"                 ";
else
cout<<"A : Indira Gandhi";
cout<<"\t\t";
cout<<"B : Dr. Rajander Parsad";
cout<<"\n";
cout<<"C : Jawahar Lal Nehru";
cout<<"\t\t";
if(l50==1)
cout<<"                ";
else
cout<<"D : Rajiv Gandhi";
cout<<"\n";
cout<<"Your answer : ";
x=getch();
if(x=='c' || x=='C')
{
if(sure()==1)
correct();
}
else if(x=='a' || x=='A' || x=='b' || x=='B' || x=='D' || x=='d')
{
if(sure()==1)
wrong("C : Jawahar Lal Nehru");
}
else if(x=='q' || x=='Q')
{
quit();
}
else if(x=='l' || x=='L')
{
if(f==0)
{
clrscr();
cout<<"\n\n\tYOU HAVE NO LIFELINES\n\n\tPress any key to go back...";
getch();
}
else
lifeline('C');
}
break;
case 9:
cout<<"How many months are of 30 days in a Year ?";
cout<<"\n\n";
cout<<"A : 4";
cout<<"\t\t";
if(l50==1)
cout<<"     ";
else
cout<<"B : 5";
cout<<"\n";
cout<<"C : 6";
cout<<"\t\t";
if(l50==1)
cout<<"     ";
else
cout<<"D : 8";
cout<<"\n";
cout<<"Your answer : ";
x=getch();
if(x=='a' || x=='A')
{
if(sure()==1)
correct();
}
else if(x=='c' || x=='C' || x=='b' || x=='B' || x=='D' || x=='d')
{
if(sure()==1)
wrong("A : 4");
}
else if(x=='q' || x=='Q')
{
quit();
}
else if(x=='l' || x=='L')
{
if(f==0)
{
clrscr();
cout<<"\n\n\tYOU HAVE NO LIFELINES\n\n\tPress any key to go back...";
getch();
}
else
lifeline('A');
}
break;
case 10:
cout<<"Which of the following is not a Social Networking website ?";
cout<<"\n\n";
if(l50==1)
cout<<"         ";
else
cout<<"A : Orkut";
cout<<"\t\t";
cout<<"B : Opera";
cout<<"\n";
cout<<"C : Facebook";
cout<<"\t\t";
if(l50==1)
cout<<"           ";
else
cout<<"D : Twitter";
cout<<"\n";
cout<<"Your answer : ";
x=getch();
if(x=='b' || x=='B')
{
if(sure()==1)
correct();
}
else if(x=='a' || x=='A' || x=='c' || x=='C' || x=='D' || x=='d')
{
if(sure()==1)
wrong("B : Opera");
}
else if(x=='q' || x=='Q')
{
quit();
}
else if(x=='l' || x=='L')
{
if(f==0)
{
clrscr();
cout<<"\n\n\tYOU HAVE NO LIFELINES\n\n\tPress any key to go back...";
getch();
}
else
lifeline('B');
}
break;
case 11:
cout<<"Which planet is called Red planet ?";
cout<<"\n\n";
if(l50==1)
cout<<"         ";
else
cout<<"A : Earth";
cout<<"\t\t";
cout<<"B : Jupiter";
cout<<"\n";
if(l50==1)
cout<<"         ";
else
cout<<"C : Venus";
cout<<"\t\t";
cout<<"D : Mars";
cout<<"\n";
cout<<"Your answer : ";
x=getch();
if(x=='d' || x=='D')
{
if(sure()==1)
correct();
}
else if(x=='a' || x=='A' || x=='b' || x=='B' || x=='c' || x=='C')
{
if(sure()==1)
wrong("D : Mars");
}
else if(x=='q' || x=='Q')
{
quit();
}
else if(x=='l' || x=='L')
{
if(f==0)
{
clrscr();
cout<<"\n\n\tYOU HAVE NO LIFELINES\n\n\tPress any key to go back...";
getch();
}
else
lifeline('D');
}
break;
case 12:
cout<<"Who is the Father of India ?";
cout<<"\n\n";
if(l50==1)
cout<<"                 ";
else
cout<<"A : Swami Dayanad";
cout<<"\t\t";
if(l50==1)
cout<<"                   ";
else
cout<<"B : Amitabh Bacchan";
cout<<"\n";
cout<<"C : Sachin Tendulkar";
cout<<"\t\t";
cout<<"D : Mahatma Gandhi";
cout<<"\n";
cout<<"Your answer : ";
x=getch();
if(x=='d' || x=='D')
{
if(sure()==1)
correct();
}
else if(x=='a' || x=='A' || x=='b' || x=='B' || x=='c' || x=='C')
{
if(sure()==1)
wrong("D : Mahatma Gandhi");
}
else if(x=='q' || x=='Q')
{
quit();
}
else if(x=='l' || x=='L')
{
if(f==0)
{
clrscr();
cout<<"\n\n\tYOU HAVE NO LIFELINES\n\n\tPress any key to go back...";
getch();
}
else
lifeline('D');
}
break;
case 13:
cout<<"What is the full form of CD ?";
cout<<"\n\n";
if(l50==1)
cout<<"                 ";
else
cout<<"A : Circular Disk";
cout<<"\t\t";
cout<<"B : Covered Disk";
cout<<"\n";
cout<<"C : Compact Disk";
cout<<"\t\t";
if(l50==1)
cout<<"              ";
else
cout<<"D : Crash Disk";
cout<<"\n";
cout<<"Your answer : ";
x=getch();
if(x=='c' || x=='C')
{
if(sure()==1)
correct();
}
else if(x=='a' || x=='A' || x=='b' || x=='B' || x=='D' || x=='d')
{
if(sure()==1)
wrong("C : Compact Disk");
}
else if(x=='q' || x=='Q')
{
quit();
}
else if(x=='l' || x=='L')
{
if(f==0)
{
clrscr();
cout<<"\n\n\tYOU HAVE NO LIFELINES\n\n\tPress any key to go back...";
getch();
}
else
lifeline('C');
}
break;
case 14:
cout<<"How many circles are there in Olympics flag ?";
cout<<"\n\n";
cout<<"A : 5";
cout<<"\t\t";
if(l50==1)
cout<<"     ";
else
cout<<"B : 6";
cout<<"\n";
cout<<"C : 7";
cout<<"\t\t";
if(l50==1)
cout<<"     ";
else
cout<<"D : 3";
cout<<"\n";
cout<<"Your answer : ";
x=getch();
if(x=='a' || x=='A')
{
if(sure()==1)
correct();
}
else if(x=='C' || x=='c' || x=='b' || x=='B' || x=='D' || x=='d')
{
if(sure()==1)
wrong("A : 5");
}
else if(x=='q' || x=='Q')
{
quit();
}
else if(x=='l' || x=='L')
{
if(f==0)
{
clrscr();
cout<<"\n\n\tYOU HAVE NO LIFELINES\n\n\tPress any key to go back...";
getch();
}
else
lifeline('A');
}
break;
case 15:
cout<<"Who won Gold medal for India in Olympics 2008 held in China ?";
cout<<"\n\n";
if(l50==1)
cout<<"                ";
else
cout<<"A : Gagan Narang";
cout<<"\t\t";
cout<<"B : Sushil Kumar";
cout<<"\n";
cout<<"C : Abhinav Bindra";
cout<<"\t\t";
if(l50==1)
cout<<"                ";
else
cout<<"D : Saina Nehwal";
cout<<"\n";
cout<<"Your answer : ";
x=getch();
if(x=='c' || x=='C')
{
if(sure()==1)
correct();
}
else if(x=='a' || x=='A' || x=='b' || x=='B' || x=='D' || x=='d')
{
if(sure()==1)
wrong("C : Abhinav Bindra");
}
else if(x=='q' || x=='Q')
{
quit();
}
else if(x=='l' || x=='L')
{
if(f==0)
{
clrscr();
cout<<"\n\n\tYOU HAVE NO LIFELINES\n\n\tPress any key to go back...";
getch();
}
else
lifeline('C');
}
break;
case 16:
cout<<"Which cricket player is also called Master Blaster ?";
cout<<"\n\n";
cout<<"A : Sachin Tendulkar";
cout<<"\t\t";
cout<<"B : Ricky Ponting";
cout<<"\n";
if(l50==1)
cout<<"              ";
else
cout<<"C : Brian Lara      ";
cout<<"\t\t";
if(l50==1)
cout<<"               ";
else
cout<<"D : Don Bradman";
cout<<"\n";
cout<<"Your answer : ";
x=getch();
if(x=='a' || x=='A')
{
if(sure()==1)
correct();
}
else if(x=='c' || x=='C' || x=='b' || x=='B' || x=='D' || x=='d')
{
if(sure()==1)
wrong("A : Sachin Tendulkar");
}
else if(x=='q' || x=='Q')
{
quit();
}
else if(x=='l' || x=='L')
{
if(f==0)
{
clrscr();
cout<<"\n\n\tYOU HAVE NO LIFELINES\n\n\tPress any key to go back...";
getch();
}
else
lifeline('A');
}
break;
}
}
void med(int r)
{
char x;
switch(r)
{
case 0:
cout<<"What is the Male Bee called ?";
cout<<"\n\n";
if(l50==1)
cout<<"             ";
else
cout<<"A : Moth     ";
cout<<"\t\t";
cout<<"B : Drone";
cout<<"\n";
if(l50==1)
cout<<"             ";
else
cout<<"C : Honey Bee";
cout<<"\t\t";
cout<<"D : Wasp";
cout<<"\n";
cout<<"Your answer : ";
x=getch();
if(x=='b' || x=='B')
{
if(sure()==1)
correct();
}
else if(x=='c' || x=='C' || x=='A' || x=='a' || x=='D' || x=='d')
{
if(sure()==1)
wrong("B : Drone");
}
else if(x=='q' || x=='Q')
{
quit();
}
else if(x=='l' || x=='L')
{
if(f==0)
{
clrscr();
cout<<"\n\n\tYOU HAVE NO LIFELINES\n\n\tPress any key to go back...";
getch();
}
else
lifeline('B');
}
break;
case 1:
cout<<"In which city the White House located ?";
cout<<"\n\n";
cout<<"A : Washington DC";
cout<<"\t\t";
if(l50==1)
cout<<"               ";
else
cout<<"B : Los Angeles";
cout<<"\n";
if(l50==1)
cout<<"            ";
else
cout<<"C : New York     ";
cout<<"\t\t";
cout<<"D : Bosten";
cout<<"\n";
cout<<"Your answer : ";
x=getch();
if(x=='a' || x=='A')
{
if(sure()==1)
correct();
}
else if(x=='c' || x=='C' || x=='b' || x=='B' || x=='D' || x=='d')
{
if(sure()==1)
wrong("A : Washington DC");
}
else if(x=='q' || x=='Q')
{
quit();
}
else if(x=='l' || x=='L')
{
if(f==0)
{
clrscr();
cout<<"\n\n\tYOU HAVE NO LIFELINES\n\n\tPress any key to go back...";
getch();
}
else
lifeline('A');
}
break;
case 2:
cout<<"In which year did the first war of Indian Independence begin ?";
cout<<"\n\n";
if(l50==1)
cout<<"        ";
else
cout<<"A : 1947";
cout<<"\t\t";
cout<<"B : 1853";
cout<<"\n";
cout<<"C : 1857";
cout<<"\t\t";
if(l50==1)
cout<<"        ";
else
cout<<"D : 1983";
cout<<"\n";
cout<<"Your answer : ";
x=getch();
if(x=='c' || x=='C')
{
if(sure()==1)
correct();
}
else if(x=='a' || x=='A' || x=='b' || x=='B' || x=='D' || x=='d')
{
if(sure()==1)
wrong("C : 1857");
}
else if(x=='q' || x=='Q')
{
quit();
}
else if(x=='l' || x=='L')
{
if(f==0)
{
clrscr();
cout<<"\n\n\tYOU HAVE NO LIFELINES\n\n\tPress any key to go back...";
getch();
}
else
lifeline('C');
}
break;
case 3:
cout<<"Vasco-De-Gama who came to india was from which country ?";
cout<<"\n\n";
if(l50==1)
cout<<"         ";
else
cout<<"A : Spain   ";
cout<<"\t\t";
cout<<"B : France";
cout<<"\n";
cout<<"C : Portugal";
cout<<"\t\t";
if(l50==1)
cout<<"           ";
else
cout<<"D : England";
cout<<"\n";
cout<<"Your answer : ";
x=getch();
if(x=='c' || x=='C')
{
if(sure()==1)
correct();
}
else if(x=='a' || x=='A' || x=='b' || x=='B' || x=='D' || x=='d')
{
if(sure()==1)
wrong("C : Portugal");
}
else if(x=='q' || x=='Q')
{
quit();
}
else if(x=='l' || x=='L')
{
if(f==0)
{
clrscr();
cout<<"\n\n\tYOU HAVE NO LIFELINES\n\n\tPress any key to go back...";
getch();
}
else
lifeline('C');
}
break;
case 4:
cout<<"Which country wins the highest Gold medals in Olympics 2008 held in China ?";
cout<<"\n\n";
if(l50==1)
cout<<"         ";
else
cout<<"A : Japan";
cout<<"\t\t";
if(l50==1)
cout<<"             ";
else
cout<<"B : Australia";
cout<<"\n";
cout<<"C : USA  ";
cout<<"\t\t";
cout<<"D : China";
cout<<"\n";
cout<<"Your answer : ";
x=getch();
if(x=='d' || x=='D')
{
if(sure()==1)
correct();
}
else if(x=='a' || x=='A' || x=='b' || x=='B' || x=='C' || x=='c')
{
if(sure()==1)
wrong("D : China");
}
else if(x=='q' || x=='Q')
{
quit();
}
else if(x=='l' || x=='L')
{
if(f==0)
{
clrscr();
cout<<"\n\n\tYOU HAVE NO LIFELINES\n\n\tPress any key to go back...";
getch();
}
else
lifeline('D');
}
break;
case 5:
cout<<"Which team wins the final of Ranji Trophy held in 2010 ?";
cout<<"\n\n";
if(l50==1)
cout<<"             ";
else
cout<<"A : Delhi    ";
cout<<"\t\t";
cout<<"B : Mumbai";
cout<<"\n";
cout<<"C : Karnataka";
cout<<"\t\t";
if(l50==1)
cout<<"                 ";
else
cout<<"D : Uttar Pradesh";
cout<<"\n";
cout<<"Your answer : ";
x=getch();
if(x=='b' || x=='B')
{
if(sure()==1)
correct();
}
else if(x=='a' || x=='A' || x=='c' || x=='C' || x=='D' || x=='d')
{
if(sure()==1)
wrong("B : Mumbai");
}
else if(x=='q' || x=='Q')
{
quit();
}
else if(x=='l' || x=='L')
{
if(f==0)
{
clrscr();
cout<<"\n\n\tYOU HAVE NO LIFELINES\n\n\tPress any key to go back...";
getch();
}
else
lifeline('B');
}
break;
case 6:
cout<<"Who wins the Australian Open 2010 men's category ?";
cout<<"\n\n";
if(l50==1)
cout<<"               ";
else
cout<<"A : Andy Murray  ";
cout<<"\t\t";
cout<<"B : Roger Federer";
cout<<"\n";
cout<<"C : Daniel Nester";
cout<<"\t\t";
if(l50==1)
cout<<"             ";
else
cout<<"D : Bob Bryan";
cout<<"\n";
cout<<"Your answer : ";
x=getch();
if(x=='b' || x=='B')
{
if(sure()==1)
correct();
}
else if(x=='a' || x=='A' || x=='c' || x=='C' || x=='D' || x=='d')
{
if(sure()==1)
wrong("B : Roger Federer");
}
else if(x=='q' || x=='Q')
{
quit();
}
else if(x=='l' || x=='L')
{
if(f==0)
{
clrscr();
cout<<"\n\n\tYOU HAVE NO LIFELINES\n\n\tPress any key to go back...";
getch();
}
else
lifeline('B');
}
break;
case 7:
cout<<"\"Jimena\" who has been crowned Miss Universe 2010 is from which country ?";
cout<<"\n\n";
cout<<"A : Mexico";
cout<<"\t\t";
if(l50==1)
cout<<"             ";
else
cout<<"B : Argentina";
cout<<"\n";
cout<<"C : Brazil";
cout<<"\t\t";
if(l50==1)
cout<<"      ";
else
cout<<"D : Chile";
cout<<"\n";
cout<<"Your answer : ";
x=getch();
if(x=='a' || x=='A')
{
if(sure()==1)
correct();
}
else if(x=='c' || x=='C' || x=='b' || x=='B' || x=='D' || x=='d')
{
if(sure()==1)
wrong("A : Mexico");
}
else if(x=='q' || x=='Q')
{
quit();
}
else if(x=='l' || x=='L')
{
if(f==0)
{
clrscr();
cout<<"\n\n\tYOU HAVE NO LIFELINES\n\n\tPress any key to go back...";
getch();
}
else
lifeline('A');
}
break;
case 8:
cout<<"Who was the winner of Hockey World cup 2010 ?";
cout<<"\n\n";
if(l50==1)
cout<<"           ";
else
cout<<"A : Britain  ";
cout<<"\t\t";
cout<<"B : New Zealand";
cout<<"\n";
cout<<"C : Australia";
cout<<"\t\t";
if(l50==1)
cout<<"                ";
else
cout<<"D : Germany";
cout<<"\n";
cout<<"Your answer : ";
x=getch();
if(x=='c' || x=='C')
{
if(sure()==1)
correct();
}
else if(x=='a' || x=='A' || x=='b' || x=='B' || x=='D' || x=='d')
{
if(sure()==1)
wrong("C : Australia");
}
else if(x=='q' || x=='Q')
{
quit();
}
else if(x=='l' || x=='L')
{
if(f==0)
{
clrscr();
cout<<"\n\n\tYOU HAVE NO LIFELINES\n\n\tPress any key to go back...";
getch();
}
else
lifeline('C');
}
break;
case 9:
cout<<"In Which Year, Rowlatt Act passed ?";
cout<<"\n\n";
cout<<"A : 1919";
cout<<"\t\t";
if(l50==1)
cout<<"        ";
else
cout<<"B : 1917";
cout<<"\n";
cout<<"C : 1950";
cout<<"\t\t";
if(l50==1)
cout<<"        ";
else
cout<<"D : 1902";
cout<<"\n";
cout<<"Your answer : ";
x=getch();
if(x=='a' || x=='A')
{
if(sure()==1)
correct();
}
else if(x=='c' || x=='C' || x=='b' || x=='B' || x=='D' || x=='d')
{
if(sure()==1)
wrong("A : 1919");
}
else if(x=='q' || x=='Q')
{
quit();
}
else if(x=='l' || x=='L')
{
if(f==0)
{
clrscr();
cout<<"\n\n\tYOU HAVE NO LIFELINES\n\n\tPress any key to go back...";
getch();
}
else
lifeline('A');
}
break;
case 10:
cout<<"Which river flows in Haryana ?";
cout<<"\n\n";
if(l50==1)
cout<<"          ";
else
cout<<"A : Chenab";
cout<<"\t\t";
cout<<"B : Ghaggar";
cout<<"\n";
cout<<"C : Ganga ";
cout<<"\t\t";
if(l50==1)
cout<<"        ";
else
cout<<"D : Ravi";
cout<<"\n";
cout<<"Your answer : ";
x=getch();
if(x=='b' || x=='B')
{
if(sure()==1)
correct();
}
else if(x=='a' || x=='A' || x=='c' || x=='C' || x=='D' || x=='d')
{
if(sure()==1)
wrong("B : Ghaggar");
}
else if(x=='q' || x=='Q')
{
quit();
}
else if(x=='l' || x=='L')
{
if(f==0)
{
clrscr();
cout<<"\n\n\tYOU HAVE NO LIFELINES\n\n\tPress any key to go back...";
getch();
}
else
lifeline('B');
}
break;
case 11:
cout<<"Which sport is associated with the Davis cup ?";
cout<<"\n\n";
if(l50==1)
cout<<"            ";
else
cout<<"A : Football";
cout<<"\t\t";
cout<<"B : Hockey";
cout<<"\n";
if(l50==1)
cout<<"           ";
else
cout<<"C : Cricket ";
cout<<"\t\t";
cout<<"D : Tennis";
cout<<"\n";
cout<<"Your answer : ";
x=getch();
if(x=='d' || x=='D')
{
if(sure()==1)
correct();
}
else if(x=='a' || x=='A' || x=='b' || x=='B' || x=='c' || x=='C')
{
if(sure()==1)
wrong("D : Tennis");
}
else if(x=='q' || x=='Q')
{
quit();
}
else if(x=='l' || x=='L')
{
if(f==0)
{
clrscr();
cout<<"\n\n\tYOU HAVE NO LIFELINES\n\n\tPress any key to go back...";
getch();
}
else
lifeline('D');
}
break;
case 12:
cout<<"Which state covers the largest area in India ?";
cout<<"\n\n";
if(l50==1)
cout<<"                 ";
else
cout<<"A : Utter Pradesh";
cout<<"\t\t";
if(l50==1)
cout<<"          ";
else
cout<<"B : Punjab";
cout<<"\n";
cout<<"C : West Bengal  ";
cout<<"\t\t";
cout<<"D : Rajasthan";
cout<<"\n";
cout<<"Your answer : ";
x=getch();
if(x=='d' || x=='D')
{
if(sure()==1)
correct();
}
else if(x=='a' || x=='A' || x=='b' || x=='B' || x=='c' || x=='C')
{
if(sure()==1)
wrong("D : Rajasthan");
}
else if(x=='q' || x=='Q')
{
quit();
}
else if(x=='l' || x=='L')
{
if(f==0)
{
clrscr();
cout<<"\n\n\tYOU HAVE NO LIFELINES\n\n\tPress any key to go back...";
getch();
}
else
lifeline('D');
}
break;
case 13:
cout<<"Who built the Buland Darwaza at Fatehpur Sikri ?";
cout<<"\n\n";
if(l50==1)
cout<<"         ";
else
cout<<"A : Babur";
cout<<"\t\t";
cout<<"B : Humayun";
cout<<"\n";
cout<<"C : Akbar";
cout<<"\t\t";
if(l50==1)
cout<<"              ";
else
cout<<"D : Shah Jahan";
cout<<"\n";
cout<<"Your answer : ";
x=getch();
if(x=='c' || x=='C')
{
if(sure()==1)
correct();
}
else if(x=='a' || x=='A' || x=='b' || x=='B' || x=='D' || x=='d')
{
if(sure()==1)
wrong("C : Akbar");
}
else if(x=='q' || x=='Q')
{
quit();
}
else if(x=='l' || x=='L')
{
if(f==0)
{
clrscr();
cout<<"\n\n\tYOU HAVE NO LIFELINES\n\n\tPress any key to go back...";
getch();
}
else
lifeline('C');
}
break;
case 14:
cout<<"Which of these is the lightest chemical element ?";
cout<<"\n\n";
cout<<"A : Helium";
cout<<"\t\t";
if(l50==1)
cout<<"          ";
else
cout<<"B : Hydrogen";
cout<<"\n";
cout<<"C : Oxygen";
cout<<"\t\t";
if(l50==1)
cout<<"            ";
else
cout<<"D : Nitrogen";
cout<<"\n";
cout<<"Your answer : ";
x=getch();
if(x=='a' || x=='A')
{
if(sure()==1)
correct();
}
else if(x=='C' || x=='c' || x=='b' || x=='B' || x=='D' || x=='d')
{
if(sure()==1)
wrong("A : Helium");
}
else if(x=='q' || x=='Q')
{
quit();
}
else if(x=='l' || x=='L')
{
if(f==0)
{
clrscr();
cout<<"\n\n\tYOU HAVE NO LIFELINES\n\n\tPress any key to go back...";
getch();
}
else
lifeline('A');
}
break;
case 15:
cout<<"Who Played the title role in the film \"Fiza\" ?";
cout<<"\n\n";
if(l50==1)
cout<<"                  ";
else
cout<<"A : Rani Mukherjee";
cout<<"\t\t";
cout<<"B : Kareena Kapoor";
cout<<"\n";
cout<<"C : Karishma Kapoor";
cout<<"\t\t";
if(l50==1)
cout<<"                ";
else
cout<<"D : Preity Zinta";
cout<<"\n";
cout<<"Your answer : ";
x=getch();
if(x=='c' || x=='C')
{
if(sure()==1)
correct();
}
else if(x=='a' || x=='A' || x=='b' || x=='B' || x=='D' || x=='d')
{
if(sure()==1)
wrong("C : Karishma Kapoor");
}
else if(x=='q' || x=='Q')
{
quit();
}
else if(x=='l' || x=='L')
{
if(f==0)
{
clrscr();
cout<<"\n\n\tYOU HAVE NO LIFELINES\n\n\tPress any key to go back...";
getch();
}
else
lifeline('C');
}
break;
case 16:
cout<<"Which of these is the oldest of the four vedas ?";
cout<<"\n\n";
cout<<"A : Rig Veda";
cout<<"\t\t";
cout<<"B : Atharva Veda";
cout<<"\n";
if(l50==1)
cout<<"             ";
else
cout<<"C : Sama Veda";
cout<<"\t\t";
if(l50==1)
cout<<"              ";
else
cout<<"D : Yajur Veda";
cout<<"\n";
cout<<"Your answer : ";
x=getch();
if(x=='a' || x=='A')
{
if(sure()==1)
correct();
}
else if(x=='c' || x=='C' || x=='b' || x=='B' || x=='D' || x=='d')
{
if(sure()==1)
wrong("A : Rig Veda");
}
else if(x=='q' || x=='Q')
{
quit();
}
else if(x=='l' || x=='L')
{
if(f==0)
{
clrscr();
cout<<"\n\n\tYOU HAVE NO LIFELINES\n\n\tPress any key to go back...";
getch();
}
else
lifeline('A');
}
break;
}
}
void diff(int r)
{
char x;
switch(r)
{
case 0:
cout<<"Which missile is surface-to-surface ballistic missile ?";
cout<<"\n\n";
if(l50==1)
cout<<"           ";
else
cout<<"A : Prithvi";
cout<<"\t\t";
cout<<"B : Agni";
cout<<"\n";
if(l50==1)
cout<<"           ";
else
cout<<"C : Trishul";
cout<<"\t\t";
cout<<"D : Nag";
cout<<"\n";
cout<<"Your answer : ";
x=getch();
if(x=='b' || x=='B')
{
if(sure()==1)
correct();
}
else if(x=='c' || x=='C' || x=='A' || x=='a' || x=='D' || x=='d')
{
if(sure()==1)
wrong("B : Agni");
}
else if(x=='q' || x=='Q')
{
quit();
}
else if(x=='l' || x=='L')
{
if(f==0)
{
clrscr();
cout<<"\n\n\tYOU HAVE NO LIFELINES\n\n\tPress any key to go back...";
getch();
}
else
lifeline('B');
}
break;
case 1:
cout<<"Which leader founded the Swaraj Party ?";
cout<<"\n\n";
cout<<"A : Motilal Nehru";
cout<<"\t\t";
if(l50==1)
cout<<"                       ";
else
cout<<"B : Bal Gangadhar Tilak";
cout<<"\n";
if(l50==1)
cout<<"                ";
else
cout<<"C : Bhagat Singh";
cout<<"\t\t";
cout<<"D : Mahatma Gandhi";
cout<<"\n";
cout<<"Your answer : ";
x=getch();
if(x=='a' || x=='A')
{
if(sure()==1)
correct();
}
else if(x=='c' || x=='C' || x=='b' || x=='B' || x=='D' || x=='d')
{
if(sure()==1)
wrong("A : Motilal Nehru");
}
else if(x=='q' || x=='Q')
{
quit();
}
else if(x=='l' || x=='L')
{
if(f==0)
{
clrscr();
cout<<"\n\n\tYOU HAVE NO LIFELINES\n\n\tPress any key to go back...";
getch();
}
else
lifeline('A');
}
break;
case 2:
cout<<"Which geographical area was not inhabited by the early Aryans ?";
cout<<"\n\n";
if(l50==1)
cout<<"              ";
else
cout<<"A : Punjab    ";
cout<<"\t\t";
cout<<"B : Eastern Afganistan";
cout<<"\n";
cout<<"C : Bluchistan";
cout<<"\t\t";
if(l50==1)
cout<<"      ";
else
cout<<"D : Westran Uttar Pradesh";
cout<<"\n";
cout<<"Your answer : ";
x=getch();
if(x=='c' || x=='C')
{
if(sure()==1)
correct();
}
else if(x=='a' || x=='A' || x=='b' || x=='B' || x=='D' || x=='d')
{
if(sure()==1)
wrong("C : Bluchistan");
}
else if(x=='q' || x=='Q')
{
quit();
}
else if(x=='l' || x=='L')
{
if(f==0)
{
clrscr();
cout<<"\n\n\tYOU HAVE NO LIFELINES\n\n\tPress any key to go back...";
getch();
}
else
lifeline('C');
}
break;
case 3:
cout<<"Which cup is associated with Golf ?";
cout<<"\n\n";
if(l50==1)
cout<<"              ";
else
cout<<"A : Uber cup  ";
cout<<"\t\t";
cout<<"B : Irani cup";
cout<<"\n";
cout<<"C : Walker cup";
cout<<"\t\t";
if(l50==1)
cout<<"              ";
else
cout<<"D : Swaything cup";
cout<<"\n";
cout<<"Your answer : ";
x=getch();
if(x=='c' || x=='C')
{
if(sure()==1)
correct();
}
else if(x=='a' || x=='A' || x=='b' || x=='B' || x=='D' || x=='d')
{
if(sure()==1)
wrong("C : Walker cup");
}
else if(x=='q' || x=='Q')
{
quit();
}
else if(x=='l' || x=='L')
{
if(f==0)
{
clrscr();
cout<<"\n\n\tYOU HAVE NO LIFELINES\n\n\tPress any key to go back...";
getch();
}
else
lifeline('C');
}
break;
case 4:
cout<<"In which space shuttle did Kalpana Chawla go into space ?";
cout<<"\n\n";
if(l50==1)
cout<<"             ";
else
cout<<"A : Discovery";
cout<<"\t\t";
if(l50==1)
cout<<"             ";
else
cout<<"B : Endeavour";
cout<<"\n";
cout<<"C : Atlantis";
cout<<"\t\t";
cout<<"D : Columbia";
cout<<"\n";
cout<<"Your answer : ";
x=getch();
if(x=='d' || x=='D')
{
if(sure()==1)
correct();
}
else if(x=='a' || x=='A' || x=='b' || x=='B' || x=='C' || x=='c')
{
if(sure()==1)
wrong("D : Columbia");
}
else if(x=='q' || x=='Q')
{
quit();
}
else if(x=='l' || x=='L')
{
if(f==0)
{
clrscr();
cout<<"\n\n\tYOU HAVE NO LIFELINES\n\n\tPress any key to go back...";
getch();
}
else
lifeline('D');
}
break;
case 5:
cout<<"What was the capital of Punjab bofore Chandighar ?";
cout<<"\n\n";
if(l50==1)
cout<<"          ";
else
cout<<"A : Ambala";
cout<<"\t\t";
cout<<"B : Shimla";
cout<<"\n";
cout<<"C : Amritsar";
cout<<"\t\t";
if(l50==1)
cout<<"           ";
else
cout<<"D : Patiala";
cout<<"\n";
cout<<"Your answer : ";
x=getch();
if(x=='b' || x=='B')
{
if(sure()==1)
correct();
}
else if(x=='a' || x=='A' || x=='c' || x=='C' || x=='D' || x=='d')
{
if(sure()==1)
wrong("B : Shimla");
}
else if(x=='q' || x=='Q')
{
quit();
}
else if(x=='l' || x=='L')
{
if(f==0)
{
clrscr();
cout<<"\n\n\tYOU HAVE NO LIFELINES\n\n\tPress any key to go back...";
getch();
}
else
lifeline('B');
}
break;
case 6:
cout<<"Which of these Prime Ministers was not born at Allahabad ?";
cout<<"\n\n";
if(l50==1)
cout<<"                 ";
else
cout<<"A : Indira Gandhi";
cout<<"\t\t";
cout<<"B : Lal Bahadur Shastri";
cout<<"\n";
cout<<"C : V.P. Singh   ";
cout<<"\t\t";
if(l50==1)
cout<<"             ";
else
cout<<"D : Jawaharlal Nehru";
cout<<"\n";
cout<<"Your answer : ";
x=getch();
if(x=='b' || x=='B')
{
if(sure()==1)
correct();
}
else if(x=='a' || x=='A' || x=='c' || x=='C' || x=='D' || x=='d')
{
if(sure()==1)
wrong("B : Lal Bahadur Shastri");
}
else if(x=='q' || x=='Q')
{
quit();
}
else if(x=='l' || x=='L')
{
if(f==0)
{
clrscr();
cout<<"\n\n\tYOU HAVE NO LIFELINES\n\n\tPress any key to go back...";
getch();
}
else
lifeline('B');
}
break;
case 7:
cout<<"Who was the first bowler to take 500 wickets in test cricket ?";
cout<<"\n\n";
cout<<"A : Courtney Walsh";
cout<<"\t\t";
if(l50==1)
cout<<"             ";
else
cout<<"B : Kapil Dev";
cout<<"\n";
cout<<"C : Richard Hadlee";
cout<<"\t\t";
if(l50==1)
cout<<"               ";
else
cout<<"D : Wasim Akram";
cout<<"\n";
cout<<"Your answer : ";
x=getch();
if(x=='a' || x=='A')
{
if(sure()==1)
correct();
}
else if(x=='c' || x=='C' || x=='b' || x=='B' || x=='D' || x=='d')
{
if(sure()==1)
wrong("A : Courtney Walsh");
}
else if(x=='q' || x=='Q')
{
quit();
}
else if(x=='l' || x=='L')
{
if(f==0)
{
clrscr();
cout<<"\n\n\tYOU HAVE NO LIFELINES\n\n\tPress any key to go back...";
getch();
}
else
lifeline('A');
}
break;
case 8:
cout<<"Who was the second man to set foot on Moon ?";
cout<<"\n\n";
if(l50==1)
cout<<"                ";
else
cout<<"A : John Glen   ";
cout<<"\t\t";
cout<<"B : Alan Shepard";
cout<<"\n";
cout<<"C : Edwin Aldrin";
cout<<"\t\t";
if(l50==1)
cout<<"                ";
else
cout<<"D : Chuck Yeager";
cout<<"\n";
cout<<"Your answer : ";
x=getch();
if(x=='c' || x=='C')
{
if(sure()==1)
correct();
}
else if(x=='a' || x=='A' || x=='b' || x=='B' || x=='D' || x=='d')
{
if(sure()==1)
wrong("C : Edwin Aldrin");
}
else if(x=='q' || x=='Q')
{
quit();
}
else if(x=='l' || x=='L')
{
if(f==0)
{
clrscr();
cout<<"\n\n\tYOU HAVE NO LIFELINES\n\n\tPress any key to go back...";
getch();
}
else
lifeline('C');
}
break;
case 9:
cout<<"Who was the last Hindu king to rule Delhi ?";
cout<<"\n\n";
cout<<"A : Hemu   ";
cout<<"\t\t";
if(l50==1)
cout<<"              ";
else
cout<<"B : Rana Sanga";
cout<<"\n";
cout<<"C : Shivaji";
cout<<"\t\t";
if(l50==1)
cout<<"               ";
else
cout<<"D : Rana Pratap";
cout<<"\n";
cout<<"Your answer : ";
x=getch();
if(x=='a' || x=='A')
{
if(sure()==1)
correct();
}
else if(x=='c' || x=='C' || x=='b' || x=='B' || x=='D' || x=='d')
{
if(sure()==1)
wrong("A : Hemu");
}
else if(x=='q' || x=='Q')
{
quit();
}
else if(x=='l' || x=='L')
{
if(f==0)
{
clrscr();
cout<<"\n\n\tYOU HAVE NO LIFELINES\n\n\tPress any key to go back...";
getch();
}
else
lifeline('A');
}
break;
case 10:
cout<<"From which language has the word \"Punjab\" been derived ?";
cout<<"\n\n";
if(l50==1)
cout<<"         ";
else
cout<<"A : Greek";
cout<<"\t\t";
cout<<"B : Persian";
cout<<"\n";
cout<<"C : Arabic";
cout<<"\t\t";
if(l50==1)
cout<<"            ";
else
cout<<"D : Sanskrit";
cout<<"\n";
cout<<"Your answer : ";
x=getch();
if(x=='b' || x=='B')
{
if(sure()==1)
correct();
}
else if(x=='a' || x=='A' || x=='c' || x=='C' || x=='D' || x=='d')
{
if(sure()==1)
wrong("B : Persian");
}
else if(x=='q' || x=='Q')
{
quit();
}
else if(x=='l' || x=='L')
{
if(f==0)
{
clrscr();
cout<<"\n\n\tYOU HAVE NO LIFELINES\n\n\tPress any key to go back...";
getch();
}
else
lifeline('B');
}
break;
case 11:
cout<<"Which of these is a train run by the Indian Railways ?";
cout<<"\n\n";
if(l50==1)
cout<<"                ";
else
cout<<"A : Royal Safari";
cout<<"\t\t";
cout<<"B : Royal Queen";
cout<<"\n";
if(l50==1)
cout<<"                ";
else
cout<<"C : Royal Palace";
cout<<"\t\t";
cout<<"D : Royal Orient";
cout<<"\n";
cout<<"Your answer : ";
x=getch();
if(x=='d' || x=='D')
{
if(sure()==1)
correct();
}
else if(x=='a' || x=='A' || x=='b' || x=='B' || x=='c' || x=='C')
{
if(sure()==1)
wrong("D : Royal Orient");
}
else if(x=='q' || x=='Q')
{
quit();
}
else if(x=='l' || x=='L')
{
if(f==0)
{
clrscr();
cout<<"\n\n\tYOU HAVE NO LIFELINES\n\n\tPress any key to go back...";
getch();
}
else
lifeline('D');
}
break;
case 12:
cout<<"Who is the first Indian to win the all England badminton championship ?";
cout<<"\n\n";
if(l50==1)
cout<<"               ";
else
cout<<"A : Rajiv Bagga ";
cout<<"\t\t";
if(l50==1)
cout<<"               ";
else
cout<<"B : Vimal Kumar";
cout<<"\n";
cout<<"C : Saina Nehwal";
cout<<"\t\t";
cout<<"D : Prakash Padukone";
cout<<"\n";
cout<<"Your answer : ";
x=getch();
if(x=='d' || x=='D')
{
if(sure()==1)
correct();
}
else if(x=='a' || x=='A' || x=='b' || x=='B' || x=='c' || x=='C')
{
if(sure()==1)
wrong("D : Prakash Padukone");
}
else if(x=='q' || x=='Q')
{
quit();
}
else if(x=='l' || x=='L')
{
if(f==0)
{
clrscr();
cout<<"\n\n\tYOU HAVE NO LIFELINES\n\n\tPress any key to go back...";
getch();
}
else
lifeline('D');
}
break;
case 13:
cout<<"Which of these is not an official language of the United Nations ?";
cout<<"\n\n";
if(l50==1)
cout<<"           ";
else
cout<<"A : Spanish";
cout<<"\t\t";
cout<<"B : French";
cout<<"\n";
cout<<"C : Italian";
cout<<"\t\t";
if(l50==1)
cout<<"           ";
else
cout<<"D : English";
cout<<"\n";
cout<<"Your answer : ";
x=getch();
if(x=='c' || x=='C')
{
if(sure()==1)
correct();
}
else if(x=='a' || x=='A' || x=='b' || x=='B' || x=='D' || x=='d')
{
if(sure()==1)
wrong("C : Italian");
}
else if(x=='q' || x=='Q')
{
quit();
}
else if(x=='l' || x=='L')
{
if(f==0)
{
clrscr();
cout<<"\n\n\tYOU HAVE NO LIFELINES\n\n\tPress any key to go back...";
getch();
}
else
lifeline('C');
}
break;
case 14:
cout<<"In Hindu mythology, whose son was Bali ?";
cout<<"\n\n";
cout<<"A : Indra";
cout<<"\t\t";
if(l50==1)
cout<<"            ";
else
cout<<"B : Jambavan";
cout<<"\n";
cout<<"C : Pavan";
cout<<"\t\t";
if(l50==1)
cout<<"         ";
else
cout<<"D : Shiva";
cout<<"\n";
cout<<"Your answer : ";
x=getch();
if(x=='a' || x=='A')
{
if(sure()==1)
correct();
}
else if(x=='C' || x=='c' || x=='b' || x=='B' || x=='D' || x=='d')
{
if(sure()==1)
wrong("A : Indra");
}
else if(x=='q' || x=='Q')
{
quit();
}
else if(x=='l' || x=='L')
{
if(f==0)
{
clrscr();
cout<<"\n\n\tYOU HAVE NO LIFELINES\n\n\tPress any key to go back...";
getch();
}
else
lifeline('A');
}
break;
case 15:
cout<<"Who wrote the song \"Aye Mere Vatan Ke Logon\" ?";
cout<<"\n\n";
if(l50==1)
cout<<"                  ";
else
cout<<"A : Hasrat Jaipuri";
cout<<"\t\t";
cout<<"B : Bankim Chandra";
cout<<"\n";
cout<<"C : Kavi Pradeep";
cout<<"\t\t";
if(l50==1)
cout<<"                   ";
else
cout<<"D : Sahir Ludhianvi";
cout<<"\n";
cout<<"Your answer : ";
x=getch();
if(x=='c' || x=='C')
{
if(sure()==1)
correct();
}
else if(x=='a' || x=='A' || x=='b' || x=='B' || x=='D' || x=='d')
{
if(sure()==1)
wrong("C : Kavi Pradeep");
}
else if(x=='q' || x=='Q')
{
quit();
}
else if(x=='l' || x=='L')
{
if(f==0)
{
clrscr();
cout<<"\n\n\tYOU HAVE NO LIFELINES\n\n\tPress any key to go back...";
getch();
}
else
lifeline('C');
}
break;
case 16:
cout<<"Which Indian river is also as Kalindi ?";
cout<<"\n\n";
cout<<"A : Yamuna";
cout<<"\t\t";
cout<<"B : Sarayu";
cout<<"\n";
if(l50==1)
cout<<"         ";
else
cout<<"C : Ganga";
cout<<"\t\t";
if(l50==1)
cout<<"            ";
else
cout<<"D : Godavari";
cout<<"\n";
cout<<"Your answer : ";
x=getch();
if(x=='a' || x=='A')
{
if(sure()==1)
correct();
}
else if(x=='c' || x=='C' || x=='b' || x=='B' || x=='D' || x=='d')
{
if(sure()==1)
wrong("A : Yamuna");
}
else if(x=='q' || x=='Q')
{
quit();
}
else if(x=='l' || x=='L')
{
if(f==0)
{
clrscr();
cout<<"\n\n\tYOU HAVE NO LIFELINES\n\n\tPress any key to go back...";
getch();
}
else
lifeline('A');
}
break;
}
}
void correct()
{
char ch;
clrscr();
l50=0;
cout<<"\n\n\t****************\n";
cout<<"\t*CORRECT ANSWER*\n";
cout<<"\t****************\n";
cout<<"\n\n\n\tYou win Rs. "<<d[15-z];
if(d[15-z]==10000)
{
cout<<"\n\n\tWell done! You completed first stage. \n\n\tNow you will get Rs.10000 at least. ";
sleep(2);
}
if(d[15-z]==320000)
{
cout<<"\n\n\tWell done! You completed second stage. \n\n\tNow you will get Rs.320000 at least. ";
sleep(2);
}
if(d[15-z]==10000000)
{
cout<<"\n\n\tCongratulations! You win highest amount.";
sleep(1);
cout<<"\n\n\t\"Game over\" Press \"E\" to exit...";
do
{
ch=getch();
}
while(ch!='E' && ch!='e');
exit(1);
}
sleep(1);
cout<<"\n\n\tPress \"C\" to continue...";
do
{
ch=getch();
}
while(ch!='c' && ch!='C');
z--;
i3++;
}
int sure()
{
char x;
s:
clrscr();
cout<<"\n\n\tAre you sure(Y or N) : ";
x=getche();
if(!(x=='y' || x=='Y' || x=='n' || x=='N'))
goto s;
if(x=='y' || x=='Y')
{
cout<<"\n\n\tOK computer! Please lock the answer.";
sleep(2);
return 1;
}
else
return 0;
}
void wrong(char s[])
{
char ch;
clrscr();
cout<<"\n\n\t****************\n";
cout<<"\t* WRONG ANSWER *\n";
cout<<"\t****************\n";
cout<<"\n\n\tOhh! its Wrong answer. Right answer is "<<s;
if(z>10)
{
cout<<"\n\n\tSORRY! you lost.";
cout<<"You won nothing.";
}
else if(z>5)
cout<<"\n\n\tBut you won Rs. 10000.";
else
cout<<"\n\n\tBut you won Rs. 320000.";
sleep(2);
cout<<"\n\n\tPress \"E\" to exit...";
do
{
ch=getch();
}while(ch!='e' && ch!='E');
exit(1);
}
void quit()
{
char y;
q:
clrscr();
cout<<"\n\n\tYou realy want to quit(Y or N) : ";
y=getche();
if(!(y=='Y' || y=='y' || y=='N' || y=='n'))
goto q;
if(y=='Y' || y=='y')
{
if(z==15)
cout<<"\n\n\n\n\tYou win nothing.";
else
cout<<"\n\n\n\n\tCongratulation you win Rs. "<<d[14-z];
cout<<"\n\n\tPress \"E\" to exit....";
do
{
y=getch();
}
while(y!='e' && y!='E');
exit(0);
}
}
void lifeline(char z)
{
char x;
int i,e,g[4];
life:
clrscr();
if(f==4)
l=l1=l2=l3=1;
cout<<"\n\n\tYou have "<<f<<" lifelines left.";
cout<<"\n\n\tWhich Lifiline you want to use :-";
if(l==1)
cout<<"\n\n\t1.  Audience Poll (Take help of audience)";
else
cout<<"\n\n";
if(l1==1)
cout<<"\n\n\t2.  Expert's choice (Take opinion of expert \"Sidharth Thukral\")";
else
cout<<"\n\n";
if(l2==1)
cout<<"\n\n\t3.  50-50 (Only two options)";
else
cout<<"\n\n";
if(l3==1)
cout<<"\n\n\t4.  Flip (Change your question with other question)";
else
cout<<"\n\n";
cout<<"\n\n\t5.  Back to your question screen";
cout<<"\n\n\tSelect any of the above options by pressing respective number : ";
x=getche();
if(x<'1' || x>'5')
goto life;
switch(x)
{
case '1':
if(l==1)
{
clrscr();
cout<<"\n\n\tAudience its your time to answer the question.";
sleep(3);
cout<<"\n\n\tYou have only 10 seconds.";
sleep(2);
cout<<"\n\n\tPick up your voting pads and vote your choice A,B,C or D";
sleep(3);
cout<<"\n\n\tYour time start now.";
sleep(2);
for(i=9;i>=0;i--)
{
clrscr();
cout<<"\n\n\t*****\n";
cout<<"\t* "<<i<<" *\n";
cout<<"\t*****";
sleep(1);
}
clrscr();
e=rand()%20+60;
for(i=0;i<4;i++)
g[i]=rand()%20;
cout<<"\n\n\tAudience answers :";
cout<<"\n\n\tA : ";
if(z=='A')
cout<<e;
else
cout<<g[0];
cout<<" %";
cout<<"\n\n\tB : ";
if(z=='B')
cout<<e;
else
cout<<g[1];
cout<<" %";
cout<<"\n\n\tC : ";
if(z=='C')
cout<<e;
else
cout<<g[2];
cout<<" %";
cout<<"\n\n\tD : ";
if(z=='D')
cout<<e;
else
cout<<g[3];
cout<<" %";
sleep(2);
cout<<"\n\n\n\tPress \"C\" to go back to question.....";
do
{
x=getch();
}
while(x!='c' && x!='C');
f--;
l=0;
}
else
goto life;
break;
case '2':
if(l1==1)
{
clrscr();
cout<<"\n\n\tYes Mr. Sidharth, our contestent want to take your help.";
sleep(3);
cout<<"\n\n\tSidharth : OK";
sleep(2);
cout<<"\n\n\tDo you know the answer ?";
sleep(2);
cout<<"\n\n\tSidharth : ahh! I think its "<<z;
sleep(2);
cout<<"\n\n\tAre you sure ?";
sleep(2);
cout<<"\n\n\tSidharth : Yes, I am very much sure.";
sleep(2);
cout<<"\n\n\tThank you Sidharth";
sleep(2);
cout<<"\n\n\n\tPress \"C\" to go back to question.....";
do
{
x=getch();
}
while(x!='c' && x!='C');
f--;
l1=0;
}
else
goto life;
break;
case '3':
if(l2==1)
{
clrscr();
cout<<"\n\n\tOK computer, please remove two wrong options.";
sleep(1);
cout<<".";
sleep(1);
cout<<".";
sleep(1);
cout<<".";
sleep(1);
cout<<".";
l50=1;
f--;
l2=0;
}
else
goto life;
break;
case '4':
if(l3==1)
{
clrscr();
cout<<"\n\n\tOK computer, please change the question.";
sleep(1);
cout<<".";
sleep(1);
cout<<".";
sleep(1);
cout<<".";
sleep(1);
cout<<".";
i3++;
f--;
l3=0;
l50=0;
}
else
goto life;
}
}