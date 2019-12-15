
#include<prj1.h>
#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdio.h>
#include<string.h>
#include<process.h>

int ch;
void main();
void chuser();
class btap
{
	public:
	void tranam()
	{
		char trname[15];
		cout<<"\n Enter The Passsenger Train Name:";
		cin>>trname;
		ofstream out("file.txt",ios::app);
		out<<"\n The Passager Address is "<<trname;
		out.close();
	}
	void adhar()
	{

		char adhno[15];
		cout<<"\n Enter The Passenger Adhar No :";
		cin>>adhno;
		ofstream out("file.txt",ios::app);
		out<<"\n The Passager Adhar Number is "<<adhno;
		out.close();
	}

};
int admin()
{

	char  id[10],pass[8], temp[18];
	cout<<"\n Enter Ur Id :";
	cin>>id;
	cout<<"\n Enter Ur  Password:";
	cin>>pass;
	ifstream obj("adminid.txt");
	char ch;
	int j=0,a=1;
	while((ch=obj.get())!=EOF)
	{
		if(ch==id[j])
		{
			a++;
		}

		 j++;
	}
	obj.close();
	j=0;
	ifstream obj1("pass.txt");
	while((ch=obj1.get())!=EOF)
	{
		if(ch==pass[j])
		{
			a++;
		}

		j++;
	}
	if(a==18)
	{
		cout<<"\n Id Password Is Match ";
		return 1;
	}
	else
		return 0;



}
void pnr()
{
	char pnr[8];
	cout<<"\n Enter Pnr No:";
	cin>>pnr;
	ofstream out("file.txt",ios::app);
	out<<"\n The Passager Pnr  Number is "<<pnr;
	out.close();
	ofstream pr("pnr.txt");
	pr<<pnr;
	pr.close();
}

void name()
{
	char name[25];
	cout<<"\n Enter The Pasasanger Name :";
	cin>>name;
	ofstream out("file.txt",ios::out);
	out<<"\n The Passager Name is "<<name;
	out.close();
}
void add()
{
	char add[30];
	cout<<"\n Enter The Passsenger Address:";
	cin>>add;
	ofstream out("file.txt",ios::app);
	out<<"\n The Passager Address is "<<add;
	out.close();
}
void trainenq()
{

		clrscr();
		ifstream obj;
		char a;
		obj.open("trainenq.txt");
		while((a=obj.get())!=EOF)
		{
			cout<<a;
		}
		obj.close();
		getch();
		main();
}
void mobno()
{
	char mobno[10];
	cout<<"\n Enter The Passenger Mobile No :";
	cin>>mobno;
	ofstream out("file.txt",ios::app);
	out<<"\n The Passager Mobile  Number is "<<mobno;
	out.close();

}
void trno()
{
	char trno[6];
	cout<<"\n Enter The Passenger Train No :";
	cin>>trno;
	ofstream out("file.txt",ios::app);
	out<<"\n The Passager Train  Number is "<<trno;
	out.close();
}
choice()
{
	char a;
	cout<<"\n1.Book Ticket\n2.Train Enqury\n3.Ticket Pricing\n4.Exit";
	cout<<"\n Enter Ur Choice :";
	cin>>ch;
	switch(ch)
	{
		case 1:
			textcolor(35);
			cprintf("\n Welcome To Ticket Booking Service ");
			return 1;
		case 4:
			exit(1);
			break;
		case 2:
			trainenq();
			break;
		case 3:
			ifstream obj;
			char a;
			obj.open("ticketpr.txt");
			while((a=obj.get())!=EOF)
			{
				cout<<a;
			}
			obj.close();
			break;
			default:
				cout<<"\n This Option Not Avilible  Sorry ";




	}
	//exit(1);
	return 0;

}
user()
{
	char  id[13],pass[8];
	cout<<"\n Enter Ur UserId :";
	cin>>id;
	cout<<"\n Enter Ur  Password:";
	cin>>pass;
	ifstream obj("userid.txt");
	char ch;
	int j=0,a=1;
	while((ch=obj.get())!=EOF)
	{
		if(ch==id[j])
		{
			a++;
		}

		 j++;
	}
	obj.close();
	j=0;
	ifstream obj1("userpass.txt");
	while((ch=obj1.get())!=EOF)
	{
		if(ch==pass[j])
		{
			a++;
		}

		j++;
	}
	if(a==22)
	{
		cout<<"\n Id Password Is Match ";
		return 1;
	}
	clrscr();
	if(a!=22||a!=21)
	{
		cout<<"\n Password & Id Is Wrong";
		getch();
		exit(1);
	}

}
void pnrstatus()
{
  char pnr[8];
  cout<<"\n Enter The Pnr Number  And See Ur Status:";
  cin>>pnr;
  int j=0,a=1;
  ifstream obj1("pnr.txt");
  while((ch=obj1.get())!=EOF)
  {
	if(ch==pnr[j])
	{
	  a++;
	}

	j++;
  }
  if(a==8||a==9)
  {

		clrscr();
		ifstream obj;
		char a;
		obj.open("file.txt");
		while((a=obj.get())!=EOF)
		{
			cout<<a;
		}
		obj.close();
		cout<<"\n U Want Exit Yes/No :";
		char s;
		cin>>s;
		if(s=='Y')
		main();
		else
		chuser();
  }
}
void chuser()
{
     clrscr();
     cout<<"\n1.Train Enqury\n2.Pnr Status\n3.TicketCancellation\n4.Exit";
     cout<<"\n Enter Ur Choice:";
     cin>>ch;
     switch(ch)
     {
	case 1:
		clrscr();
		trainenq();
	case 2:
	       clrscr();
	       pnrstatus();
	case 4:
	      exit(1);
	case 3:
		clrscr();
		ofstream obj("file.txt",ios::out);
		obj<<"\0";
		cout<<"\n Ticket Is Cancelled";
		obj.close();
		getch();

     }
}
void main()
{

	btap obj;
	char  adno[12];
	clrscr();
	gotoxy(25,2);
	textcolor(25);
	cprintf(" Railway Reservation Systeam..");
	gotoxy(50,4);
	textcolor(35);
	cprintf(" Developed By Devendra_Wayakole");
	cout<<"\n1.Admin \n2.User \n3.Train Enqury"<<endl;
	cout<<"\nEnter  Ur Choice :";
	cin>>ch;
	int ret;
	switch(ch)
	{
		case 1:
		       ret=admin();
		       if(ret==1)
		       {
				cout<<"\n Sucssefuly Login";
				cout<<"\n---------------------------------------------";
				clrscr();
				ret=choice();
				if(ret==1)
				{
					name();
					add();
					obj.tranam();
					mobno();
					obj.adhar();
					trno();
					pnr();
				}

		       }
			break;
		case 3:
		trainenq();
		break;
		case 2:
			textcolor(35);
			cprintf("\n WELCOME USER");
			ret=user();
			if(ret==1)
			chuser();
		case 4:
			exit(1);



	}
	getch();
}