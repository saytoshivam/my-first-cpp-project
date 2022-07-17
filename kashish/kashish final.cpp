#include<iostream>
#include<fstream>
using namespace std;
void delet();
void delet()
 { string line, name; 
cout << "Please Enter the name of record you want to delete: ";
cin >> name;
 ifstream myfile;
 ofstream temp;
 myfile.open("team.txt");
  temp.open("temp.txt");
 while (getline(myfile, line))
  { if (line != name)
   temp << line << endl; } 
cout << "The record with the name " << name << " has been deleted if it exsisted" << endl;
myfile.close(); 
temp.close(); 
remove("team.txt");
rename("temp.txt", "team.txt");
 }
class team
{
	public:
	char ch;
	void team_name()
	{
		cout<<ch;
	}
}t;
class member
{
	public:
		
     	char mem;
		void team_mem()
		{
		cout<<mem;	
		} 
}m;

class playerx
{
	public:
		void player1()
{ 
cout<<"\nchennai super king";
ifstream fileInput; 
fileInput.open("chennai.txt");
int ad=0,cuLine,yet;
string line, search;
cout << "\nPlease enter the name of player to search:\n ";
cin >> search;
for (cuLine = 1; getline(fileInput, line); cuLine++) 
{
 if (line.find(search) != string::npos) 
{
 cout << "\n player found : " << endl;
 ad=1;
  }
 }
 if(ad==0)
{
 cout << "\nError! player is not in this team\n" << endl;
}}
void player2()
{ 
cout<<"\nrajasthan royals";
ifstream fileInput; 
fileInput.open("rajasthan.txt");
int ad=0,cuLine,yet;
string line, search;
cout << "\nPlease enter the name of player to search:\n ";
cin >> search;
for (cuLine = 1; getline(fileInput, line); cuLine++) 
{
 if (line.find(search) != string::npos) 
{
 cout << "\n player found : " << endl;
 ad=1;
  }
 }
 if(ad==0)
{
 cout << "\nError! player is not in this team\n" << endl;
}}
};
class playerz:public virtual playerx
{
	public:
		void player3()
{ 
cout<<"\nmumbai indians";
ifstream fileInput; 
fileInput.open("mumbai.txt");
int ad=0,cuLine,yet;
string line, search;
cout << "\nPlease enter the name of player to search:\n ";
cin >> search;
for (cuLine = 1; getline(fileInput, line); cuLine++) 
{
 if (line.find(search) != string::npos) 
{
 cout << "\n player found : " << endl;
 ad=1;
  }
 }
 if(ad==0)
{
 cout << "\nError! player is not in this team\n" << endl;
}}
void player4()
{ 
cout<<"\nbanglore";
ifstream fileInput; 
fileInput.open("banglore.txt");
int ad=0,cuLine,yet;
string line, search;
cout << "\nPlease enter the name of player to search: \n";
cin >> search;
for (cuLine = 1; getline(fileInput, line); cuLine++) 
{
 if (line.find(search) != string::npos) 
{
 cout << "\n player found : " << endl;
 ad=1;
  }
 }
 if(ad==0)
{
 cout << "\nError! player is not in this team\n" << endl;
}}

};
class playerq:public virtual playerx
{
	public:
		void player5()
{ 
cout<<"\nkings 11 punjab";
ifstream fileInput; 
fileInput.open("punjab.txt");
int ad=0,cuLine;
string line, search;
cout << "\nPlease enter the name of player to search:\n ";
cin >> search;
for (cuLine = 1; getline(fileInput, line); cuLine++) 
{
 if (line.find(search) != string::npos) 
{
 cout << "\n player found : " << endl;
 ad=1;
  }
 }
 if(ad==0)
{
 cout << "\nError! player is not in this team\n" << endl;
}}
void player6()
{ 
cout<<"\nhydrabaad sunrisers";
ifstream fileInput; 
fileInput.open("hyderabad.txt");
int ad=0,cuLine;
string line, search;
cout << "\nPlease enter the name of player to search:\n ";
cin >> search;
for (cuLine = 1; getline(fileInput, line); cuLine++) 
{
 if (line.find(search) != string::npos) 
{
 cout << "\n player found : " << endl;
 ad=1;
  }
 }
 if(ad==0)
{
 cout << "\nError! player is not in this team\n" << endl;
}}
};
class playero:public playerq,public playerz
{
	public:
		void player7()
{ 
cout<<"\nDELHI DARE DEVILS";
ifstream fileInput; 
fileInput.open("delhi.txt");
int ad=0,cuLine;
string line, search;
cout << "\nPlease enter the name of player to search:\n ";
cin >> search;
for (cuLine = 1; getline(fileInput, line); cuLine++) 
{
 if (line.find(search) != string::npos) 
{
 cout << "\n player found : " << endl;
 ad=1;
  }
 }
 if(ad==0)
{
 cout << "\nError! player is not in this team\n" << endl;
}}
void player8()
{ 
cout<<"\n kolkata";
ifstream fileInput; 
fileInput.open("kolkata.txt");
int ad=0,cuLine;
string line, search;
cout << "\nPlease enter the name of player to search:\n ";
cin >> search;
for (cuLine = 1; getline(fileInput, line); cuLine++) 
{
 if (line.find(search) != string::npos) 
{
 cout << "\n player found : " << endl;
 ad=1;
  }
 }
 if(ad==0)
{
 cout << "\nError! player is not in this team\n" << endl;
}}
	
};
int main()
{
	playero obj;
	system("color F4");
	char a,op;
do
{
	menu:
	cout<<"\n1.team name";
	cout<<"\n2.team players";
	cout<<"\n3.add team";
	cout<<"\n4.delete team";
	cout<<"\n5.search player";
	cout<<"\n6.schedule";
	cout<<"\n7.results";
	cout<<"\n8.exit";
	cout<<"\n\n Enter your option\n";
    cin>>op;
    switch(op) 
    {
    	case '1':
			{
			cout<<"\n\nname of the teams\n\n";
            ifstream team;
			team.open("team.txt",ios::in|ios::app);
	        team.seekg(0);
	       	while(!team.eof())
        	{
		     team.read((char *)&t,sizeof(t));
	         t.team_name();	
	        }
	        team.close();
            break;
			}
		case '2':
		    {
		    		system("color B4");
			cout<<"name of the players";
			play:
		    cout<<"\n which team players you want to see";
		    cout<<"\n enter the number\n";
		    int mem;
		    cin>>mem;
		    switch(mem)
		    {
		    	case 1:
		    		{
		    		ifstream csk;
			        csk.open("csk.txt",ios::in|ios::app);
			        csk.seekg(0,ios::beg);
	                while(!csk.eof())
                 	{
		             csk.read((char *)&m,sizeof(m));
	                 m.team_mem();	
	                }
		    		break;
		            }
		        case 2:
		    		{
		    		ifstream rcb;
			        rcb.open("rcb.txt",ios::in|ios::app);
			        rcb.seekg(0,ios::beg);
	                while(!rcb.eof())
                 	{
		             rcb.read((char *)&m,sizeof(m));
	                 m.team_mem();	
	                }
		    		break;
		            }
		        case 3:
		    		{
		    		ifstream kkr;
			        kkr.open("kkr.txt",ios::in|ios::app);
			        kkr.seekg(0,ios::beg);
	                while(!kkr.eof())
                 	{
		             kkr.read((char *)&m,sizeof(m));
	                 m.team_mem();	
	                }
		    		break;
		            }    
				case 4:
		    		{
		    		ifstream rr;
			        rr.open("rr.txt",ios::in|ios::app);
			        rr.seekg(0,ios::beg);
	                while(!rr.eof())
                 	{
		             rr.read((char *)&m,sizeof(m));
	                 m.team_mem();	
	                }
		    		break;
		            } 
				case 5:
		    		{
		    		ifstream kp;
			        kp.open("kp.txt",ios::in|ios::app);
			        kp.seekg(0,ios::beg);
	                while(!kp.eof())
                 	{
		             kp.read((char *)&m,sizeof(m));
	                 m.team_mem();	
	                }
		    		break;
		            }
				case 6:
		    		{
		    		ifstream mi;
			        mi.open("mi.txt",ios::in|ios::app);
			        mi.seekg(0,ios::beg);
	                while(!mi.eof())
                 	{
		             mi.read((char *)&m,sizeof(m));
	                 m.team_mem();	
	                }
		    		break;
		            }	
				case 7:
		    		{
		    		ifstream dd;
			        dd.open("dd.txt",ios::in|ios::app);
			        dd.seekg(0,ios::beg);
	                while(!dd.eof())
                 	{
		             dd.read((char *)&m,sizeof(m));
	                 m.team_mem();	
	                }
		    		break;
		            }
				case 8:
		    		{
		    		ifstream srh;
			        srh.open("srh.txt",ios::in|ios::app);
			        srh.seekg(0,ios::beg);
	                while(!srh.eof())
                 	{
		             srh.read((char *)&m,sizeof(m));
	                 m.team_mem();	
	                }
	                break;
		            }
	            case 9:
				    {
		    		ifstream member ;
			        member.open("new_mem.txt",ios::in|ios::app);
			        member.seekg(0,ios::beg);
	                while(!member.eof())
                 	{
		             member.read((char *)&m,sizeof(m));
	                 m.team_mem();	
	                }
					break;	
					}    
		    			
				default:
				    cout<<"\n enter the valid number";
					goto play;			   
			}
			break;
			}
			
		
			case '3':
			    {
			    		system("color 37");
			    	cout<<"\n you have choosen option 3 i.i.;\n add team";
			    	ofstream add;
			        add.open("team.txt",ios::out|ios::app);
			        char q;
			        cout<<"\n enter the team to be added and enter . to stop";
			        cin>>q;
			        while(q!='.')
			        {
			        	add.put(q);
			        	cin>>q;
			        
					}
	                add.close();
	                cout<<"\n enter the team players, give comma in between two players and enter . to stop";
	                ofstream member;
	                member.open("new_mem.txt",ios::out);
	                char newpl;
	                cin>>newpl;
	                while(newpl!='.')
	                {
	                	member.put(newpl);
	                	cin>>newpl;
					}
					member.close();
	                
                    break;
			    	
				}
			case '4':delet();break;	
			case '5':
				{
					system("cls");
					system("color B4");
					obj.player1();
					obj.player2();
					obj.player3();
					obj.player4();
					obj.player5();
					obj.player6();
					obj.player7();
					obj.player8();
					break;	
				}
			case '6':
				{
					system("cls");
					system("color A4");
					ifstream fin("schedule.txt");
					string dat;
					while(getline(fin,dat))
				{
					cout<<dat<<endl;
				}
					fin.close();
					break;	
				}
			case '7':
				{
					resultss:
						system("cls");
					system("color E0");
					int n;
					cout<<"\n 1.see results";
					cout<<"\n 2.add new results";
					cin>>n;
					switch(n)
					{
						case 1:
								
								int o;
								ifstream  fin;
								fin.open("points.txt", ios::app);
								string dat;
								while(getline(fin,dat))
								{
									cout<<dat<<endl;
								}
								fin.close();
								cout<<"\n press 1 to go for result menu";
								cin>>o;
								if(o==1)
								goto resultss;
								break;
					}
					
					case 2:
						{
								string team;
								int o,pld,won,lost,tied,nr,pts; 
								float netrr;
								string tname;
								ofstream fout("points.txt", ios::app);
								cout<<"\n enter team,pld,won,lost,tied,n/r,net rr,pts \n"<<endl;
								cin>>team>>pld>>won>>lost>>tied>>nr>>netrr>>pts;
								fout<<team<<"      "<<pld<<"      "<<won<<"      "<<lost<<"      "<<tied<<"      "<<nr<<"      "<<netrr<<"      "<<pts<<"\n";
								fout.close();
								cout<<"\n press 1 to go for result menu";
								cin>>o;
								if(o==1)
								goto resultss;
								break;
						}
						
						
				}
				break;
			  case '8':
			    {	
			    cout<<"\n exiting.......";
				return 0;	
			    break;
				}		
			default :
					while(true)
	{
		system("Color 1A");
		std::cout << "\t\t\t    ENTER VALID OPTION" << std::endl;
		system("Color 2B");
		std::cout << "\t\t\t    ENTER VALID OPTION" << std::endl;
		system("Color 3C");
		std::cout << "\t\t\t    ENTER VALID OPTION" << std::endl;
		system("Color 4D");
		std::cout << "\t\t\t    ENTER VALID OPTION" << std::endl;
		system("Color 5E");
		std::cout << "\t\t\t    ENTER VALID OPTION" << std::endl;
		system("Color 6F");
		std::cout << "\t\t\t    ENTER VALID OPTION" << std::endl;
		system("Color A1");
		std::cout << "\t\t\t    ENTER VALID OPTION" << std::endl;
		system("Color B2");
		std::cout << "\t\t\t    ENTER VALID OPTION" << std::endl;
		system("Color C3");
		std::cout << "\t\t\t    ENTER VALID OPTION" << std::endl;
		system("Color D4");
		std::cout << "\t\t\t    ENTER VALID OPTION" << std::endl;
		system("Color E5");
		std::cout << "\t\t\t    ENTER VALID OPTION" << std::endl;
		system("Color F6");
		std::cout << "\t\t\t    ENTER VALID OPTION" << std::endl;
	}
			    goto menu;	
				
	}
	
	cout<<"\n\n to open the main menu ..... press m : \n";
	cin>>a; 
}
while(a=='m'||a=='M');
}
