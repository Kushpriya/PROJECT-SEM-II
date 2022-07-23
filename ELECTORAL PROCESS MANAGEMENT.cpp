#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

static int count=1000;
int p1=0,p2=0,p3=0,p4=0,p5=0,p6=0,p7=0,p8=0,p9=0,p10=0;
int id;
int pass;

class sel
{
	int s;
	char name[20], fname[20], mname[20], nat[10],pl[10];
	int dob,mob,yob;
	public:
    void choice();
   	void reg();
   	void log();
   	void gen();
   	void votec();
	void vote();
   	void tc();
};

void sel::choice()
{
  system("cls");
  cout<<"\n\n Enter a choice:-"<<endl;
  cout<<" 1. Register"<<endl;
  cout<<" 2. Vote"<<endl;
  cout<<" 3. Electrol Manager"<<endl;
  cout<<" 4. Escape to exit"<<endl;
  cout<<" choice(1-4):-";
  cin>>s;
  if(s==1)
  {
    reg();
  }
  else if(s==2)
  {
    log();
  }
  else if(s==3)
  {
    int elepass=1234, enelepass;
    char c;
    //clrscr();
    cout<<"\n Enter the password:-"<<endl;
    cin>>enelepass;
    if(elepass==enelepass)
    {
      cout<<"\n You have entered the correct password";
      c=getch();
      if(c==13)
      {
	votec();
      }
      else if(c==27)
      {
	exit(0);
      }
    }
    else
    {
      cout<<"\n You have entered incorrect password. try again";
    }
  }
  if(s==4)
  {
    exit(0);
  }
}

void sel::reg()
{
  char c,c1;
 // clrscr();
  system("cls"); 
  cout<<"\nEnter the details required...\n";
  cout<<"Enter Name:-";
  cin>>name;
  cout<<"Enter Father's Name:";
  cin>>fname;
  cout<<"Enter Mother's Name:";
  cin>>mname;
  cout<<"Enter Date of Birth:";
  cin>>dob;
  cout<<"Enter Month of Birth:";
  cin>>mob;
  cout<<"Enter Year of Birth:";
  cin>>yob;
  if(yob>=2004)
  {
    cout<<"\n You are not eligible for voting.";
    cout<<"\n Press escape to exit";
    c1=getch();
    if(c1==27)
    {
      exit(0);
    }
 }
  else
  {
    cout<<"Enter Natinality:";
    cin>>nat;
    cout<<"Enter Place:";
    cin>>pl;
    cout<<"\n You are eligible for voting..";
    cout<<"\n Press enter for generation\n";
    cout<<"Escape to exit\n";
    c=getch();
    if(c==13)
    {
    //  clrscr();
      count++;
      gen();
    }
    if(c==27)
    {
      exit(0);
    }
  }
}

void sel::gen()
{
  char c;
  id=count;
  pass=count+2;
  system("cls");
  cout<<"\n Your Id is:"<<id;
  cout<<"\n Your Password is :"<<pass;
  cout<<"\n\n  ...Please Note these for future references...";
  cout<<"\n  ...Press enter for logging in...\n";
  cout<<"  Escape to exit\n";
  c=getch();
  if(c==13)
  {
    log();
  }
  if(c==27)
  {
    exit(0);
  }
}

void sel::log()
{
  int identer, passenter;
  //clrscr();
  system("cls");
  cout<<"\n Enter your Id:-";
  cin>>identer;
  cout<<" Enter your Password:-";
  cin>>passenter;
  if((id==identer)&&(pass==passenter))
  {
    cout<<"\n You have entered correct details";
    vote();
  }
  else
  {
    cout<<"\n Your id or password is incorrect. please try again!!!!.....";
  }
}

void sel::vote()
{
  int opt;
  char c;
  cout<<"\n\n\n ----SELECT THE PARTY OF YOUR CHOICE----\n\n";
  cout<<"1. Communist Party of Nepal (Unified Marxist–Leninist) party \n\n";
  cout<<"2. Nepali Congress party \n\n";
  cout<<"3. Communist Party of Nepal (Maoist Centre) party \n\n";
  cout<<"4. CPN (Unified Socialist) party \n\n";
  cout<<"5. People’s Socialist Party \n\n";
  cout<<"6. Loktantrik Samajbadi Party \n\n";
  cout<<"7. Rastriya Prajatantra Party \n\n";
  cout<<"8. People's Progressive Party \n\n";
  cout<<"9. Rastriya Janamorcha party \n\n";
  cout<<"10. Nepal Majdoor Kisan Party \n";
  cout<<"CHOICE (1-10):-";
  cin>>opt;
  switch(opt)
  {
    case 1:
	   cout<<"\n The current representative is :KP SHARMA OLI";
	   p1++;
	   break;
	   
    case 2:
	   cout<<"\n The current representative is :SHER BAHADUR DEUBA";
	   p2++;
	   break;
	   
    case 3:
	   cout<<"\n The current representative is :PUSHPA KAMAL DAHAL";
	   p3++;
	   break;
	   
    case 4:
	   cout<<"\n The current representative is :MADHAV KUMAR NEPAL";
	   p4++;
	   break;
	   
    case 5:
	   cout<<"\n The current representative is :UPENDRA YADAV";
	   p5++;
	   break;
	   
    case 6:
	   cout<<"\n The current representative is :MAHANTHA THAKUR";
	   p6++;
	   break;
	   
    case 7:
	   cout<<"\n The current representative is :RAJENDRA PRASAD LINGDEN";
	   p7++;
	   break;
	   
	case 8:
	   cout<<"\n The current representative is :HRIDAYESH TRIPATHI";
	   p8++;
	   break;
	   
	case 9: 
	   cout<<"\n The current representative is :CHITRA BAHADUR K.C.";
	   p9++;
	   break;
	   
    case 10:
	   cout<<"\n The current representative is :NARANYAN MAN BIJUKCHHE";
	   p10++;
	   break;
	   
    default:
	   cout<<"\n Select a valid option";
	   break;
  }
  cout<<"\n\n\t\t\t  Thank you for voting(^.^)...";
  cout<<"\n\t\t\t  Press escape to log out";
  c=getch();
  if(c==27)
  {
    choice();
  }
  else
  {
    cout<<"\n Press valid key";
  }
  //clrscr();
}

void sel::votec()
{
  char c;
  //clrscr();
  cout<<"\n\n The Total count for COMMUNIST PARTY OF NEPAL(UML): "<<p1;
  cout<<"\n\n The Total count for  NEPALI CONGRESS PARTY:"<<p2;
  cout<<"\n\n The Total count for COMMUNIST PARTY OF NEPAL(MAOIST):"<<p3;
  cout<<"\n\n The Total count for CPN(UNIFIED SOCIALIST) PARTY:"<<p4;
  cout<<"\n\n The Total count for PEOPLE'S SOCIALIST PARTY:"<<p5;
  cout<<"\n\n The Total count for LOKTANTRIK SAMAJBADI PARTY:"<<p6;
  cout<<"\n\n The Total count for RASTRIYA PRAJATANTRA PARTY:"<<p7;
  cout<<"\n\n The Total count for PEOPLE'S PROGRESSIVE PARTY:"<<p8;
  cout<<"\n\n The Total count for RASTRIYA JANAMORCHA PARTY:"<<p9;
  cout<<"\n\n The Total count for NEPAL MAJDOOR KISAN PARTY:"<<p10;
  tc();
  cout<<"\n\n Press escape to exit";
  c=getch();
  if(c==27)
  {
    exit(0);
  }
  else
  {
    cout<<"\n Press valid key";
  }
}

void sel::tc()
{
  int tvc=0;
  int max=0,i;
  int maxi[10];
  maxi[0]=p1;
  maxi[1]=p2;
  maxi[2]=p3;
  maxi[3]=p4;
  maxi[4]=p5;
  maxi[5]=p6;
  maxi[6]=p7;
  maxi[7]=p8;
  maxi[8]=p9;
  maxi[9]=p10;
  for(i=0;i<10;i++)
  {
    tvc=tvc+maxi[i];
    if(maxi[i]>max)
    {
      max=maxi[i];
    }
  }
  cout<<"\n\n Total number of votes casted:-"<<tvc;
  cout<<"\n\n Maximum number of votes are:-"<<max;
  if(p1==max)
  {
    cout<<"\n\n COMMUNIST PARTY OF NEPAL(UML) HAS WON THE ELECTIONS";
  }
  else if(p2==max)
  {
    cout<<"\n\n NEPALI CONGRESS PARTY HAS WON THE ELECTIONS";
  }
  else if(p3==max)
  {
    cout<<"\n\n COMMUNIST PARTY OF NEPAL(MAOIST) HAS WON THE ELECTIONS";
  }
  else if(p4==max)
  {
    cout<<"\n\n CPN(UNIFIED SOCIALIST) PARTY HAS WON THE ELECTIONS";
  }
  else if(p5==max)
  {
    cout<<"\n\n PEOPLE'S SOCIALIST PARTY HAS WON THE ELECTIONS";
  }
  else if(p6==max)
  {
    cout<<"\n\n LOKTANTRIK SAMAJBADI PARTY HAS WON THE ELECTIONS";
  }
   else if(p7==max)
  {
    cout<<"\n RASTRIYA PRAJATANTRA PARTY HAS WON THE ELECTIONS";
  } 
  else if(p8==max)
  {
    cout<<"\n\n PEOPLE'S PROGRESSIVE PARTY HAS WON THE ELECTIONS";
  } 
  else if(p9==max)
  {
    cout<<"\n\n RASTRIYA JANAMORCHA PARTY HAS WON THE ELECTIONS";
  } 
  else if(p10==max)
  {
    cout<<"\n\n NEPAL MAJDOOR KISAN PARTY HAS WON THE ELECTIONS";
  }
  else
  {
    cout<<"\n\n NONE PARTY HAS WON THE ELECTIONS";
  }
}

int main()
{
  char c;
  int i;
 // clrscr();
  sel s[20];
  cout<<"\n";
  cout<<"\n\n\n\n\t\t\t\t---------------------------------------------------\n";
  cout<<"\t\t\t\t***************************************************\n";
  cout<<"\n";
  cout<<"\t\t\t\t\t    ELECTORAL MANAGEMENT SYSTEM\n";
  cout<<"\n";
  cout<<"\t\t\t\t---------------------------------------------------\n";
  cout<<"\t\t\t\t***************************************************\n";
  cout<<"\n";
  cout<<"\n\n\t\t\t\t Press enter to continue....\n";
  cout<<"\t\t\t\t Escape to exit...";
  c=getch();
  if(c==13)
  {
    for(i=0;i<20;i++)
    {
      s[i].choice();
    }
  }
  else if(c==27)
  {
    exit(0);
  }
  else
  {
    cout<<"\n Press a valid key";
    getch();
  }
}

