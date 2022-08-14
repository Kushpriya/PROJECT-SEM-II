#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

static int count=1000;
int p1=0;
int p2=0;
int p3=0;
int p4=0;
int p5=0;
int p6=0;
int p7=0;
int p8=0;
int p9=0;
int p10=0;
int p11=0;
int id;
int pass;

class sel
{
	
	int s;
	char name[20],lname[20], fname[20], mname[20], nat[10],pl[10] ,g[10];
	double c;
	int dob,mob,yob;
	public:
    void choice();
   	void reg();
   	void log();
   	void gen();
   	void votec();
	void vote();
   	void tc();
   	void know();
   	
};

void sel::choice()
{
	
  system("cls");
  cout<<"\t\t\t###########################################################################";
  cout<<"\n\t\t\t############                                                   ############";
  cout<<"\n\t\t\t############                Voting Machine                     ############";
  cout<<"\n\t\t\t############                                                   ############";
  cout<<"\n\t\t\t###########################################################################";
  cout<<"\n\n\t\t\t---------------------------------------------------------------------------\n";
  cout<<"\t\t\t\t\t\t  ENTER A CHOICE TO CONTINUE:-"<<endl;
  cout<<"\t\t\t---------------------------------------------------------------------------\n";
  cout<<"\t\t\t 1. Register"<<endl;
  cout<<"\t\t\t 2. Vote"<<endl;
  cout<<"\t\t\t 3. Electrol Manager"<<endl;
  cout<<"\t\t\t 4. Know Your Candidate"<<endl;
  cout<<"\t\t\t 5. Escape to exit"<<endl;
  cout<<"\t\t\t---------------------------------------------------------------------------\n";
  cout<<"\t\t\t Choice(1-5):-";
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
    system("cls");
    cout<<"\n\t\t\t Enter the password:-";
    cin>>enelepass;
    if(elepass==enelepass)
    {
      cout<<endl;
      cout<<"\t\t\t You have entered the correct password......";
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
      cout<<"\n\t\t\t You have entered incorrect password. Try again!!!....";
      c=getch();
    }
  }
  else if(s==4)
  {
  	know();
  }
  if(s==5)
  {
    exit(0);
  }
}

void sel::reg()
{
	
  char c,c1;
 // clrscr();
  system("cls"); 
  cout<<"\t\t\t*=========================================================================*";
  cout<<"\n\t\t\t*===========                                                   ===========*";
  cout<<"\n\t\t\t*===========                Voting Machine                     ===========*";
  cout<<"\n\t\t\t*===========                                                   ===========*";
  cout<<"\n\t\t\t*=========================================================================*";
  cout<<"\n\n\t\t\t---------------------------------------------------------------------------\n";
  cout<<"\t\t\t\t\t\t   VOTER DETAILS:-"<<endl;
  cout<<"\t\t\t---------------------------------------------------------------------------\n";
  cout<<"\t\t\t\tEnter the details required...\n";
  cout<<"\t\t\t\tEnter First Name:-";
  cin>>name;
  fflush(stdin);
  cout<<"\t\t\t\tEnter last Name:-";
  cin>>lname;
  fflush(stdin);
  cout<<"\t\t\t\tEnter Father's Name:-";
  cin>>fname;
  fflush(stdin);
  cout<<"\t\t\t\tEnter Mother's Name:-";
  cin>>mname;
  fflush(stdin);
  cout<<"\t\t\t\tEnter Day of Birth:-";
  cin>>dob;
  cout<<"\t\t\t\tEnter Month of Birth:-";
  cin>>mob;
  cout<<"\t\t\t\tEnter Year of Birth:-";
  cin>>yob;
  if(yob>=2004)
  {
    cout<<"\n\t\t\t    Sorry!!!......You are not eligible for Voting.";
    cout<<"\n\t\t\t    Press escape to exit";
    c1=getch();
    if(c1==27)
    {
      exit(0);
    }
 }
  else
  {
    cout<<"\t\t\t\tEnter Nationality:-";
    cin>>nat;
    fflush(stdin);
    cout<<"\t\t\t\tEnter Your Address:-";
    cin>>pl;
    fflush(stdin);
    cout<<"\t\t\t\tEnter Your Citizenship No.:-";
    cin>>c;
    fflush(stdin);
    cout<<"\t\t\t\tEnter Gender:";
    cin>>g;
    fflush(stdin);
    cout<<"\t\t\t---------------------------------------------------------------------------\n";
    cout<<"\n\t\t\t      You are eligible for voting..";
    cout<<"\n\t\t\t      Press enter for generation\n";
    cout<<"\t\t\t        Escape to exit\n";
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
  cout<<"\t\t\t-----------------------------------------";
  cout<<"\n\t\t\t Your Id is:"<<id;
  cout<<"\n\t\t\t Your Password is :"<<pass;
  cout<<"\n\t\t\t------------------------------------------\n";
  cout<<"\n\n\t\t  ...Please Note these for future references...";
  cout<<"\n\t\t  ...Press enter for logging in...\n";
  cout<<"\t\t\t  Escape to exit\n";
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
  char c;
  //clrscr();
  system("cls");
  cout<<"\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
  cout<<"\n\t\t\t Enter your Id:-";
  cin>>identer;
  cout<<"\t\t\t Enter your Password:-";
  cin>>passenter;
  cout<<"\n\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
  if((id==identer)&&(pass==passenter))
  {
  	cout<<endl;
    cout<<"\t\t\t You have entered correct details.......";
    c=getch();
    vote();
  }
  else
  {
  	cout<<endl;
    cout<<"\t\t\t Your id or password is incorrect. please try again!!!!.....";
    c=getch();
  }
}

void sel::vote()
{
	
  int opt;
  char c;
  system("cls");
  cout<<"\t\t\t###########################################################################";
  cout<<"\n\t\t\t############                                                   ############";
  cout<<"\n\t\t\t############                Voting Machine                     ############";
  cout<<"\n\t\t\t############                                                   ############";
  cout<<"\n\t\t\t###########################################################################";
  cout<<"\n\n\t\t\t---------------------------------------------------------------------------\n";
  cout<<"\t\t\t\t\t\t   CASTING THE VOTE:-"<<endl;
  cout<<"\t\t\t---------------------------------------------------------------------------\n";
  flag:
  cout<<"\n\n\n ----SELECT THE PARTY OF YOUR CHOICE----\n\n";
  cout<<"1. Communist Party of Nepal (Unified Marxist–Leninist) party \n";
  cout<<"2. Nepali Congress party \n";
  cout<<"3. Communist Party of Nepal (Maoist Centre) party \n";
  cout<<"4. CPN (Unified Socialist) party \n";
  cout<<"5. People’s Socialist Party \n";
  cout<<"6. Loktantrik Samajbadi Party \n";
  cout<<"7. Rastriya Prajatantra Party \n";
  cout<<"8. People's Progressive Party \n";
  cout<<"9. Rastriya Janamorcha party \n";
  cout<<"10. Nepal Majdoor Kisan Party \n";
  cout<<"11. Nepal Independent Party\n";
  cout<<"--------------------------------------------------------------------------------------------------------------\n";
  cout<<"CHOICE (1-11):-";
  cin>>opt;
  switch(opt)
  {
  	
    case 1:
    {
        cout<<"\n\t\t\t The current representative is :KP SHARMA OLI";
	    p1++;
		cout<<"\n\t\t\t ----------------------------------------------\n";
	    break;
    }
       
    case 2:
    {
	    cout<<"\n\t\t\t The current representative is :SHER BAHADUR DEUBA";
	    p2++;
	    cout<<"\n\t\t\t --------------------------------------------------\n";
	    break;
    }
        
    case 3:
    {
	    cout<<"\n\t\t\t The current representative is :PUSHPA KAMAL DAHAL";
	    p3++;
	    cout<<"\n\t\t\t --------------------------------------------------\n";
	    break;
	}
		
    case 4:
    {
	    cout<<"\n\t\t\t The current representative is :MADHAV KUMAR NEPAL";
	    p4++;
	    cout<<"\n\t\t\t -------------------------------------------------\n";
	    break;
	}

    case 5:
   	{
	    cout<<"\n\t\t\t The current representative is :UPENDRA YADAV";
	    p5++;
	    cout<<"\n\t\t\t ----------------------------------------------\n";
	    break;
    }
	   
    case 6:
   	{
	    cout<<"\n\t\t\t The current representative is :MAHANTHA THAKUR";
	    p6++;
	    cout<<"\n\t\t\t ----------------------------------------------\n";
	    break;
	}
	
    case 7:
   	{
	    cout<<"\n\t\t\t The current representative is :RAJENDRA PRASAD LINGDEN";
	    p7++;
	    cout<<"\n\t\t\t -------------------------------------------------------\n";
	    break;
	}

	case 8:
	{
	    cout<<"\n\t\t\t The current representative is :HRIDAYESH TRIPATHI";
	    p8++;
	    cout<<"\n\t\t\t --------------------------------------------------\n";
	    break;
	}
	
	case 9: 
	{
	    cout<<"\n\t\t\t The current representative is :CHITRA BAHADUR K.C.";
	    p9++;
	    cout<<"\n\t\t\t --------------------------------------------------\n";
	    break;
    }
    
    case 10:
    {			
	    cout<<"\n\t\t\t The current representative is :NARANYAN MAN BIJUKCHHE";
	    p10++;
	    cout<<"\n\t\t\t ----------------------------------------------------\n";
	    break;
    }
    
	case 11:
	{
	    cout<<"\n\t\t\t The current representative is :RAVI LAMICHHANE";
	    p11++;
	    cout<<"\n\t\t\t -----------------------------------------------\n";
	    break;
    }
    
    default:
    {
	    cout<<"\n Select a valid option\n";
	    goto flag;
	    break;
    }
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
  system("cls");
  cout<<"\t\t\t**************************************************************************";
  cout<<"\n\t\t\t************                                                   ************";
  cout<<"\n\t\t\t************                Voting Machine                     ************";
  cout<<"\n\t\t\t************                                                   ************";
  cout<<"\n\t\t\t***************************************************************************";
  cout<<"\n\n\t\t\t---------------------------------------------------------------------------\n";
  cout<<"\t\t\t\t\t\t   VOTE COUNT:-"<<endl;
  cout<<"\t\t\t---------------------------------------------------------------------------\n";
  cout<<"\n\t\t\t The Total count for COMMUNIST PARTY OF NEPAL(UML):- "<<p1;
  cout<<"\n\t\t\t The Total count for  NEPALI CONGRESS PARTY:-"<<p2;
  cout<<"\n\t\t\t The Total count for COMMUNIST PARTY OF NEPAL(MAOIST):-"<<p3;
  cout<<"\n\t\t\t The Total count for CPN(UNIFIED SOCIALIST) PARTY:-"<<p4;
  cout<<"\n\t\t\t The Total count for PEOPLE'S SOCIALIST PARTY:-"<<p5;
  cout<<"\n\t\t\t The Total count for LOKTANTRIK SAMAJBADI PARTY:-"<<p6;
  cout<<"\n\t\t\t The Total count for RASTRIYA PRAJATANTRA PARTY:-"<<p7;
  cout<<"\n\t\t\t The Total count for PEOPLE'S PROGRESSIVE PARTY:-"<<p8;
  cout<<"\n\t\t\t The Total count for RASTRIYA JANAMORCHA PARTY:-"<<p9;
  cout<<"\n\t\t\t The Total count for NEPAL MAJDOOR KISAN PARTY:-"<<p10;
  cout<<"\n\t\t\t The Total count for NEPAL INDEPENDENT PARTY:-"<<p11;
  cout<<"\n\t\t\t---------------------------------------------------------------------------\n";
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
  maxi[10]=p11;
  
  for(i=0;i<11;i++)
  {
  	
    tvc=tvc+maxi[i];
    if(maxi[i]>max)
    {
    	
      max=maxi[i];
      
    }
    
  }
  cout<<"\n\n\t\t\t Total number of votes casted:-"<<tvc;
  cout<<"\n\n\t\t\t Maximum number of votes are:-"<<max;
  cout<<"\n\t\t\t---------------------------------------------------------------------------\n";
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
  else if(p11==max)
  {
  	cout<<"\n\n NEPAL INDEPENDENT PARTY HAS WON THE ELECTIONS";
  }
  else
  {
    cout<<"\n\n NONE PARTY HAS WON THE ELECTIONS";
  }
}

void sel::know()
{

	int details;
    char c;
    system("cls");
    cout<<"\t\t\t###########################################################################";
    cout<<"\n\t\t\t############                                                   ############";
    cout<<"\n\t\t\t############                Voting Machine                     ############";
	cout<<"\n\t\t\t############                                                   ############";
	cout<<"\n\t\t\t###########################################################################";
	cout<<"\n\n\t\t\t---------------------------------------------------------------------------\n";
	cout<<"\t\t\t\t\t\t   LIST OF CANDIDATE:-"<<endl;
	cout<<"\t\t\t---------------------------------------------------------------------------\n";
	label:
	cout<<"\n\n ----CHOOSE ANY CANDIDATE TO KNOW THEIR DETAILS----\n\n";
	cout<<"1. KP SHARMA OLI \n";
	cout<<"2. SHER BAHADUR DEUBA \n";
	cout<<"3. PUSHPA KAMAL DAHAL\n";
	cout<<"4. MADHAV KUMAR NEPAL \n";
	cout<<"5. UPENDRA YADAV \n";
	cout<<"6. MAHANTHA THAKUR  \n";
	cout<<"7. RAJENDRA PRASAD LINGDEN \n";
	cout<<"8. HRIDAYESH TRIPATHI\n";
	cout<<"9. CHITRA BAHADUR K.C. \n";
	cout<<"10.NARANYAN MAN BIJUKCHHE\n";
	cout<<"11.RAVI LAMICHHANE \n";
	cout<<"---------------------------------------------------------------------------------------------------------\n";
	cout<<"CHOICE (1-11):-";
	c=getch();
	cin>>details;
	system("cls");
    switch(details)
    {
  	
    case 1:
    {
        cout<<"\n\t\t\t\t KP SHARMA OLI";
        cout<<"\n\t\t\t\t=================";
        cout<<"\n\t Khadga Prasad Sharma Oli is a Nepalese politician and former Prime Minister of Nepal.";
        cout<<"\n He strengthened relations with China as an alternative to Nepal's traditional close trade ties with India ";
		cout<<"\n and updated the map of Nepal by constitutional amendment including territories disputed with India,";
		cout<<"\n for which he has received some domestic praise and a reputation as a nationalist.";
		cout<<"\n Oli began his political career in 1966 in opposition to the partyless Panchayat system in place at the time.";
		cout<<"\n\n\t\t Thank you!!!...PLease vote for COMMUNIST PARTY OF NEPAL(UML).";
	    break;
    }
    
    case 2:
    {
        cout<<"\n\t\t\t\t SHER BAHADUR DEUBA";
        cout<<"\n\t\t\t\t ===================";
		cout<<"\n Sher Bahadur Deuba is a Nepali legislator filling in as the top state leader of Nepal"; 
		cout<<"\n since 13 July 2021.He has additionally been filling in as the leader of the Nepali Congress ";
		cout<<"\n beginning around 2016.Deuba has recently served four terms as the state head (1995-1997, ";
		cout<<"\n 2001-2002, 2004-2005, and 2017-2018) and is the Member of Parliament for";
		cout<<"\n the parliamentary supporters of Dadeldhura 1."; 
		cout<<"\n\n\t\t Thank you!!!...PLease vote for NEPALI CONGRESS PARTY.";
	    break;
    }
    
    case 3:
    {
        cout<<"\n\t\t\t\t PUSHPA KAMAL DAHAL";
        cout<<"\n\t\t\t\t ===================";
        cout<<"\n Pushpa Kamal Dahal likewise well known as Prachanda signifying 'wild', is a Nepalese legislator";
	    cout<<"\n who filled in as Prime Minister of Nepal from 2008 to 2009 and again from 2016 to 2017.";
	    cout<<"\n Dahal was the head of the Communist Party of Nepal (Maoist) during the country's affable conflict";  
		cout<<"\n and resulting harmony process and the first Nepalese constituent gathering. In the 2008 decisions,";
	    cout<<"\n CPN(M) arose as the biggest party, and Dahal became Prime Minister in August of that year.";
	    cout<<"\n\n\t\t Thank you!!!...PLease vote for COMMUNIST PARTY OF NEPAL(MAOIST).";
	    break;
    }
    
    case 4:
    {
    	cout<<"\n\t\t\t\t MADHAV KUMAR NEPAL";
        cout<<"\n\t\t\t\t ===================";
        cout<<"\n Madhav Kumar Nepal is a Nepalese legislator and previous Prime Minister of Nepal.";
	    cout<<"\n He filled in as Prime Minister of Nepal from 25 May 2009 to 6 February 2011 for almost two years.";
	    cout<<"\n He turned into the 34th Prime Minister of Nepal on 25 May 2009 after his ancestor Prachanda ";
		cout<<"\n surrendered over a contention with the president over the excusal of the military's head of staff.";
		cout<<"\n\n\t\t Thank you!!!...PLease vote for CPN(UNIFIED SOCIALIST) PARTY.";
	    break;
    }
    
    case 5:
    {
    	cout<<"\n\t\t\t\t UPENDRA YADAV";
        cout<<"\n\t\t\t\t================";
        cout<<"\n Upendra Yadav is a Nepalese politician who has served as the chairman of the People's";
	    cout<<"\n Socialist Party, Nepal since 2020.He has been the Member of Parliament for Saptari 2 since 2017.";
	    cout<<"\n He served as the Deputy Prime Minister of Nepal under the government of KP Sharma Oli";
		cout<<"\n from 2018 to 2020 and is one of the closest leader to Oli.";
	    cout<<"\n\n\t\t Thank you!!!...PLease vote for PEOPLE'S SOCIALIST PARTY.";
	    break;
    }
    
    case 6:
    {
        cout<<"\n\t\t\t\t  MAHANTHA THAKUR";
        cout<<"\n\t\t\t\t==================";
        cout<<"\n Mahantha Thakur is the president of the new party. Mahantha Thakur is a";
	    cout<<"\n Nepalese politician and president of Loktantrik Samajbadi Party Nepal, as well as"; 
    	cout<<"\n the former treasurer of Nepali Congress Party. He has served Minister in various ministries"; 
	    cout<<"\n including Ministry Of Science and Technology while in Nepali Congress. ";
	    cout<<"\n\n\t\t Thank you!!!...PLease vote for LOKTANTRIK SAMAJBADI PARTY.";
	    break;
    }
    
    case 7:
    {
        cout<<"\n\t\t\t\t RAJENDRA PRASAD LINGDEN";
        cout<<"\n\t\t\t\t=========================";
        cout<<"\n Rajendra Prasad Lingden is a Nepali legislator, having a place with"; 
		cout<<"\n the Rastriya Prajatantra Party, at present filling in as the individual from ";
		cout<<"\n the first Federal Parliament of Nepal. In the 2017 Nepalese general political race,";
	    cout<<"\n he was chosen from the Jhapa 3 body electorate, getting 44614 (56.52%)votes.It was";
		cout<<"\n shaped by previous state leaders Surya Bahadur Thapa and Lokendra Bahadur Chand,";
	    cout<<"\n who served two terms each as state head since the finish of the Rastriya Panchayat.";
	    cout<<"\n\n\t\t Thank you!!!...PLease vote for RASTRIYA PRAJATANTRA PARTY.";
	    break;
    }
    
    case 8:
    {
        cout<<"\n\t\t\t\t HRIDAYESH TRIPATHI";
        cout<<"\n\t\t\t\t=====================";
        cout<<"\n Hridayesh Tripathi is a Nepalese politician, belonging to the"; 
		cout<<"\n People's Progressive Party. He's also the current chairman of the party. ";
		cout<<"\n A former Minister of Health and Population Tripathi was worked several terms"; 
		cout<<"\n as minister under the government of Nepali Congress and CPN (UML).";
		cout<<"\n\n\t\t Thank you!!!...PLease vote for PEOPLE'S PROGRESSIVE PARTY.";
	    break;
    }
    
    case 9:
    {
        cout<<"\n\t\t\t\t  CHITRA BAHADUR K.C.";
        cout<<"\n\t\t\t\t======================";
        cout<<"\n Former Deputy Prime Minister, Chitra Bahdur KC is the chairman of the party."; 
		cout<<"\n Chitra Bahadur K.C.is a Nepalese politician and Former Deputy Prime Minister and Minister"; 
		cout<<"\n of Poverty Alleviation Of Nepal. He is current chairman of the Rashtriya Jana Morcha";
		cout<<"\n\n\t\t Thank you!!!...PLease vote for  RASTRIYA JANAMORCHA PARTY.";
	    break;
    }
    
    case 10:
    {
        cout<<"\n\t\t\t\t NARANYAN MAN BIJUKCHHE";
        cout<<"\n\t\t\t\t========================";
        cout<<"\n Narayan Man Bijukchhe is a Nepalese politician.";
        cout<<"\n He became a communist sympathizer after seeing the relief work of Communist Party"; 
		cout<<"\n of Nepal cadres during floods in Rautahat around 1954. Around 1956 he joined the Students Federation"; 
		cout<<"\n and became a Communist Party member the following year.  ";
		cout<<"\n\n\t\t Thank you!!!...PLease vote for  NEPAL MAJDOOR KISAN PARTY.";
	    break;
    }
    
    case 11:
    {
        cout<<"\n\t\t\t\t RAVI LAMICHHANE";
        cout<<"\n\t\t\t\t==================";
        cout<<"\n Former media personality Ravi Lamichhane has opened a new political party - ";
		cout<<"\n the National Independent Party. Lamichhane announced the National Independent Party ";
		cout<<"\n amidst an event organized at the City Hall today.Lamichhane also demanded provisions for"; 
		cout<<"\n a directly elected Prime Minister and chief ministers. Before announcing the party, he said that"; 
		cout<<"\n he has joined politics not to change the system but to change the situation of the people";
		cout<<"\n\n\t\t Thank you!!!...PLease vote for NEPAL INDEPENDENT PARTY.";
	    break;
    }
    
    default:
    {
	    cout<<"\n Select a valid option\n";
	    goto label;
	    break;
    }
    
  }
  cout<<"\n\n\t\t\t  Press escape to log out";
  c=getch();
}

int main()
{
	
  char c;
  int i;
 // clrscr();
  sel s[20];
  cout<<"\n";
  cout<<"\n\t\t================================================================================================";
  cout<<"\n\n\n\n\t\t\t\t---------------------------------------------------\n";
  cout<<"\t\t\t\t***************************************************\n";
  cout<<"\n";
  cout<<"\t\t\t\t\t\t   WELCOME \n\n";
  cout<<"\t\t\t\t\t\t     TO \n\n";
  cout<<"\t\t\t\t\t\t   ELECTORAL \n\n";
  cout<<"\t\t\t\t\t\t   MANAGEMENT \n\n";
  cout<<"\t\t\t\t\t\t    SYSTEM \n";
  cout<<"\n";
  cout<<"\t\t\t\t---------------------------------------------------\n";
  cout<<"\t\t\t\t***************************************************\n";
  cout<<"\n";
  cout<<"\n\n\t\t\t\t Press enter to continue....\n";
  cout<<"\t\t\t\t Escape to exit...";
  cout<<"\n\n\n\n\t\t================================================================================================";
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
  	
    cout<<"\n Press a valid key\n";
    getch();
    
  }
  
}

