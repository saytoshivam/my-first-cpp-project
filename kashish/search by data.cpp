
#include<fstream> 
#include<conio.h>
#include<stdio.h>
#include<process.h>
#include<string.h>
#include<iomanip>
#include<iostream>


using namespace std;

class BOOK
{
public:
	char ID[6];
	char Content[50];
	char AUTHOR[20];
	char Book[20];
  
	void create_book()// create new BOOK
	{
		cout<<"\nNEW BOOK ENTRY...\n";
		cout<<"\nEnter The BOOK ID.";
		gets(ID);
		cout<<"\n\nEnter BOOK NAME ";
		gets(Content);
		cout<<"\n\nEnter The AUTHOR's Name ";
		gets(AUTHOR);
		cout<<"\n\nEnter The Source Book ";
		gets(Book);
		cout<<"\n\n\nBOOK Created..";
		getch();
	}

	
	
	void report()
	{cout<<ID<<setw(10)<<Content<<setw(30)<<AUTHOR<<setw(20)<<Book<<endl;} //setw--> set width

	void Copy(BOOK hd){ //  this function copies whole record
		strcpy(ID,(hd.ID)); //copy BOOK ki id
		strcpy(AUTHOR,(hd.AUTHOR)); // copy BOOK ka AUTHOR
		strcpy(Book,(hd.Book));
		strcpy(Content,(hd.Content));

	}

};         //class ends here

void SwapBOOK(BOOK &hd1, BOOK &hd2){ //swaps position of BOOK1 with BOOK2

	BOOK Temp;            

	Temp.Copy(hd1);  //BOOK1 ko temp main copy kiya
	hd1.Copy(hd2);   //BOOK2 ko BOOK1 main copy kiya (now BOOK2 has moved to the place of BOOK1)
	hd2.Copy(Temp);  //BOOK1 ko finalyy BOOK2 ki jaga per copy ker diya
}


//***************************************************************
//    	global declaration for stream object, object
//****************************************************************
fstream fp; // fstream provides an interface to read and write data from files as input/output streams.
ofstream ofp; // ofstream provides an interface to write data to files as output streams
BOOK hd[1000]; //array of 1000 BOOK
int countBOOK=0; // initially there are zero aBOOK in the program
int countbook=10;
void ReportAll(){ // this function outputs a
	system("cls");
	for(int i=0;i<countbook;i++){
		hd[i].report();

	}
	getche();
	
}


void writeAllBOOK()
{
	char ch;
	ofp.open("BOOK.dat",ios::trunc); // purani file (BOOK.dat) del ker k poora naya content overwrite ker do in new file
	//If the file opened for output operations already existed before, its previous content is deleted and replaced by the new one.
		system("cls");
		for(int i=0; i < countBOOK;i++){

			ofp.write((char*)&(hd[i]),sizeof(BOOK)); // hd[i] ko char samaj k write ker do BOOK
		
		}

		ofp.flush(); // abhi write ker do ... buffer istimal mat kero
    ofp.close();// close file
}

BOOK temp;

void LoadAllBOOK() 
{
	system("cls");
	fp.open("BOOK.dat",ios::in);// read file
	if(!fp) // if file doesnt opens
	{
		cout<<"ERROR!!! FILE COULD NOT BE OPEN ";
       		getch(); // character lo
			countBOOK =0;
       		return; // or waapis peechhay walay menu main chal do
     	}

	int i=0;
		while(fp.read((char*)&temp,sizeof(BOOK))) // file say  BOOK k siz ko as a string read ker raha hai and loading to  memory 
	{
		hd[i++].Copy( temp); // copying BOOK to main array
	}
		countBOOK=i; // jitni dafa ye kaam ho 'count BOOK' ko utni dafa increment day do
     	fp.close(); // close file
     	getch();
}

//***************************************************************
//    	SORT AND SEARCH BY AUTHOR (START)
//****************************************************************



void SortByAUTHOR() // bubble sort
{
	for(int i=0; i< countBOOK-1; i++){
		for(int j=0; j <countbook-1;>			if(strcmp(hd[j].AUTHOR,hd[j+1].AUTHOR)>0) 
				SwapBOOK(hd[j],hd[j+1]); // if above condition is satisfied, then call 'swapBOOK' function which is defined by us
		}
	}


}

//////////////////////////////////////////////////////////////////
void SearchBetweenIndex(int IndexA, int IndexB, char* AUTHOR)
{
	if(IndexA > IndexB){
		int temp;
		temp = IndexA;
		IndexA = IndexB;
		IndexB= temp;
	}

	for(int i = IndexA; i <= IndexB;i++){
		if(strcmp(hd[i].AUTHOR,AUTHOR)==0)
			hd[i].report();
	}

	getch();
}

/////////////////////////////////////////////////////////////////////

void ListByAUTHOR(char* AUTHOR){ //search by AUTHOR 	
	int PreviousIndex = 0; // first 

	int StartIndex =0 , EndIndex = countBOOK-1;
	
	int i=2;
	while(1==1){
		int CurrentIndex=(EndIndex+StartIndex)/2; //start searching from the mid position
		if(strcmp(hd[CurrentIndex].AUTHOR, AUTHOR) > 0){ 
			PreviousIndex = EndIndex;
			EndIndex = CurrentIndex;
		}else if(strcmp(hd[CurrentIndex].AUTHOR, AUTHOR) < 0){
			PreviousIndex = StartIndex;
			StartIndex = CurrentIndex;
		}else
			{
				SearchBetweenIndex(StartIndex, EndIndex, AUTHOR);
				break;
			}

		if(CurrentIndex == PreviousIndex)
			break;
	
		

	}

}


/////////////////////////////////////////////////////////////////////

void SortAndSearchByAUTHOR(){ // INPUT AUTHOR SEARCH CRITERIA
	system("cls");
	char str[50];
	cout << "Enter the Search Criteria for AUTHOR ";
	gets(str);
	SortByAUTHOR(); // CALL THIS FUNCTION
	ListByAUTHOR(str); // CALLL THIS FUNCTION

}

//***************************************************************
//    	SORT AND SEARCH BY AUTHOR ENDS
//****************************************************************


void main()
{
	char ch;
	LoadAllBOOK();
	do
	{
		system("cls");
		cout<<"\n\n\n\tMAIN MENU";
		cout<<"\n\n\t01. Create BOOK";
		cout<<"\n\n\t02. SORT And Search By AUTHOR";
		cout<<"\n\n\t03. lIST ALL ABOOK";
	  	cout<<"\n\n\t04. EXIT";
	  	cout<<"\n\n\tPlease Select Your Option (1-4) ";
	  	ch=getche();
	  	switch(ch)
	  	{
			case '1':system("cls");
				hd[countBOOK].create_book();
				countBOOK++;
			   	 break;
		  	case '2':
				SortAndSearchByAUTHOR();
			    	 break;
		    case '3':
				ReportAll();
				 break;
		  	case '4':
				writeAllBOOK();
				exit(0);
		  	default :cout<<"\a";
		}
    	}while(ch!='4');
}


