// STUDENT RECORD PROGRAM, MADE NY SHUBHAM, CLASS XII-F , KENDRIYA VIDYALAYA GOLE MARKET, NEW DELHI
#include<windows.h>
#include<conio.h>
#include<iostream>
#include<fstream>
#include<iomanip>
#include<string.h>
#include<ctime>
using namespace std;


//***************************************************************
//                   CLASS USED IN PROJECT
//****************************************************************
int ch(int);

class student
{
	int rollno;
	char name[50];
	int p_marks, c_marks, m_marks, e_marks, cs_marks;
	double per;
	char grade;
	void calculate();
	
	int fa1_maths=0;
	int fa2_maths=0;
	int fa3_maths=0;
	int fa4_maths=0;
	int sa1_maths=0;
	int sa2_maths=0;
	
	int fa1_sci=0;
	int fa2_sci=0;
	int fa3_sci=0;
	int fa4_sci=0;
	int sa1_sci=0;
	int sa2_sci=0;
	
	int fa1_eng=0;
	int fa2_eng=0;
	int fa3_eng=0;
	int fa4_eng=0;
	int sa1_eng=0;
	int sa2_eng=0;
	
	int fa1_sst=0;
	int fa2_sst=0;
	int fa3_sst=0;
	int fa4_sst=0;
	int sa1_sst=0;
	int sa2_sst=0;
	
	int fa1_hin=0;
	int fa2_hin=0;
	int fa3_hin=0;
	int fa4_hin=0;
	int sa1_hin=0;
	int sa2_hin=0;
	
	
	char c1;
	int f1;

	char c2;
	int f2;
	
	char c3;
	int f3;
	
	char c4;
	int f4; 
		
	public:
		
		
		void get_sa1()
		{
			cout<<"\nEnter marks for SA1 examination for the student;";
			cout<<"\nEnter marks for Mathematics (60):";
			cin>>sa1_maths;
			cout<<"\nEnter marks for Science (60):";
			cin>>sa1_sci;
			cout<<"\nEnter marks for English (60):";
			cin>>sa1_eng;
			cout<<"\nEnter marks for Hindi (60):";
			cin>>sa1_hin;
			cout<<"\nEnter marks for Social Science (60):";
			cin>>sa1_sst;
		}
		
		void get_sa2()
		{
			cout<<"\nEnter marks for SA2 examination for the student;";
			cout<<"\nEnter marks for Mathematics (60):";
			cin>>sa2_maths;
			cout<<"\nEnter marks for Science (60):";
			cin>>sa2_sci;
			cout<<"\nEnter marks for English (60):";
			cin>>sa2_eng;
			cout<<"\nEnter marks for Hindi (60):";
			cin>>sa2_hin;
			cout<<"\nEnter marks for Social Science (60):";
			cin>>sa2_sst;
		}
		
		void show_fa1()
		{
			cout<<"\nMarks secured by the student in FA1 examination:";
			cout<<"\nMarks secured in Mathematics:";
			cout<<fa1_maths;
			cout<<"\nMarks secured in Science:";
			cout<<fa1_sci;
			cout<<"\nMarks secured in English:";
			cout<<fa1_eng;
			cout<<"\nMarks secured in Hindi:";
			cout<<fa1_hin;
			cout<<"\nMarks secured in Social Studies:";
			cout<<fa1_sst;
			cout<<"\n\nTotal marks secured:"<<fa1_maths+fa1_sci+fa1_eng+fa1_hin+fa1_sst<<"/200";
			cout<<"\n\nHis/Her percentage is:"<<((fa1_maths+fa1_sci+fa1_eng+fa1_hin+fa1_sst)*100)/200<<"%";
		}
		
		void show_fa2()
		{
			cout<<"\nMarks secured by the student in FA1 examination:";
			cout<<"\nMarks secured in Mathematics:";
			cout<<fa2_maths;
			cout<<"\nMarks secured in Science:";
			cout<<fa2_sci;
			cout<<"\nMarks secured in English:";
			cout<<fa2_eng;
			cout<<"\nMarks secured in Hindi:";
			cout<<fa2_hin;
			cout<<"\nMarks secured in Social Studies:";
			cout<<fa2_sst;
			cout<<"\n\nTotal marks secured:"<<fa2_maths+fa2_sci+fa2_eng+fa2_hin+fa2_sst<<"/200";
			cout<<"\n\nHis/Her percentage is:"<<((fa2_maths+fa2_sci+fa2_eng+fa2_hin+fa2_sst)*100)/200<<"%";
		}
		
		void show_fa3()
		{
			cout<<"\nMarks secured by the student in FA1 examination:";
			cout<<"\nMarks secured in Mathematics:";
			cout<<fa3_maths;
			cout<<"\nMarks secured in Science:";
			cout<<fa3_sci;
			cout<<"\nMarks secured in English:";
			cout<<fa3_eng;
			cout<<"\nMarks secured in Hindi:";
			cout<<fa3_hin;
			cout<<"\nMarks secured in Social Studies:";
			cout<<fa3_sst;
			cout<<"\n\nTotal marks secured:"<<fa3_maths+fa3_sci+fa3_eng+fa3_hin+fa3_sst<<"/200";
			cout<<"\n\nHis/Her percentage is:"<<((fa3_maths+fa3_sci+fa3_eng+fa3_hin+fa3_sst)*100)/200<<"%";
		}
		
		void show_fa4()
		{
			cout<<"\nMarks secured by the student in FA4 examination:";
			cout<<"\nMarks secured in Mathematics:";
			cout<<fa4_maths;
			cout<<"\nMarks secured in Science:";
			cout<<fa4_sci;
			cout<<"\nMarks secured in English:";
			cout<<fa4_eng;
			cout<<"\nMarks secured in Hindi:";
			cout<<fa4_hin;
			cout<<"\nMarks secured in Social Studies:";
			cout<<fa4_sst;
			cout<<"\n\nTotal marks secured:"<<fa4_maths+fa4_sci+fa4_eng+fa4_hin+fa4_sst<<"/200";
			cout<<"\n\nHis/Her percentage is:"<<((fa4_maths+fa4_sci+fa4_eng+fa4_hin+fa4_sst)*100)/200<<"%";
		}
		
		void show_sa1()
		{
			cout<<"\nMarks secured by the student in SA1 examination:";
			cout<<"\nMarks secured in Mathematics:";
			cout<<sa1_maths;
			cout<<"\nMarks secured in Science:";
			cout<<sa1_sci;
			cout<<"\nMarks secured in English:";
			cout<<sa1_eng;
			cout<<"\nMarks secured in Hindi:";
			cout<<sa1_hin;
			cout<<"\nMarks secured in Social Studies:";
			cout<<sa1_sst;
			cout<<"\n\nTotal marks secured:"<<sa1_maths+sa1_sci+sa1_eng+sa1_hin+sa1_sst<<"/300";
			cout<<"\n\nHis/Her percentage is:"<<((sa1_maths+sa1_sci+sa1_eng+sa1_hin+sa1_sst)*100)/300<<"%";
		}
		
		void show_sa2()
		{
			cout<<"\nMarks secured by the student in SA2 examination:";
			cout<<"\nMarks secured in Mathematics:";
			cout<<sa2_maths;
			cout<<"\nMarks secured in Science:";
			cout<<sa2_sci;
			cout<<"\nMarks secured in English:";
			cout<<sa2_eng;
			cout<<"\nMarks secured in Hindi:";
			cout<<sa2_hin;
			cout<<"\nMarks secured in Social Studies:";
			cout<<sa2_sst;
			cout<<"\n\nTotal marks secured:"<<sa2_maths+sa2_sci+sa2_eng+sa2_hin+sa2_sst<<"/200";
			cout<<"\n\nHis/Her percentage is:"<<((sa2_maths+sa2_sci+sa2_eng+sa2_hin+sa2_sst)*100)/200<<"%";
		}
		
		
		
		
		void get_marks(int a, char nm[], int n)
		{
			int s=0, m=0, o=0, p=0, q=0;
			strcpy(name, nm);
			rollno=n;
			cout<<"\n\n\t\tENTER MARKS FOR THE STUDENT (MAX. MARKS : 40)";
			cout<<"\n\n\tEnter marks for MATHS:";
			do
			{
				if(s>0)
				{
					cout<<"\n\tWrong input !! Try again...\n\n\tEnter Marks for MATHS:";
				}
				s++;
				if(a==1)
				{
					cin>>fa1_maths;
				}
				else if(a==2)
				{
					cin>>fa2_maths;
				}
				else if(a==3)
				{
					cin>>fa3_maths;
				}
				else if(a==4)
				{
					cin>>fa4_maths;
				}
				
		    }while(fa1_maths>40 || fa2_maths>40 || fa3_maths>40 || fa4_maths>40 );
		    cout<<"\n\t----------------------------------------------------------";
			cout<<"\n\tEnter marks for SCIENCE:";
			do
			{
				if(m>0)
				{
					cout<<"\n\tWrong input !! Try again...\n\n\tEnter Marks for SCIENCE:";
				}
				m++;
				if(a==1)
				{
					cin>>fa1_sci;
				}
				else if(a==2)
				{
					cin>>fa2_sci;
				}
				else if(a==3)
				{
					cin>>fa3_sci;
				}
				else if(a==4)
				{
					cin>>fa4_sci;
				}
			
		    }while(fa1_sci>40 || fa2_sci>40 || fa3_sci>40 || fa4_sci>40 );
		    cout<<"\n\t----------------------------------------------------------";
			cout<<"\n\tEnter marks for HINDI:";
			do
			{
				if(o>0)
				{
					cout<<"\n\tWrong input !! Try again...\n\n\tEnter Marks for HINDI:";
				}
				o++;
				if(a==1)
				{
					cin>>fa1_hin;
				}
				else if(a==2)
				{
					cin>>fa2_hin;
				}
				else if(a==3)
				{
					cin>>fa3_hin;
				}
				else if(a==4)
				{
					cin>>fa4_hin;
				}
			
		    }while(fa1_hin>40 || fa2_hin>40 || fa3_hin>40 || fa4_hin>40 );
		    cout<<"\n\t----------------------------------------------------------";
			cout<<"\n\tEnter marks for ENGLISH:";
			do
			{
				if(p>0)
				{
					cout<<"\n\tWrong input !! Try again...\n\n\tEnter Marks for ENGLISH:";
				}
				p++;
				if(a==1)
				{
					cin>>fa1_eng;
				}
				else if(a==2)
				{
					cin>>fa2_eng;
				}
				else if(a==3)
				{
					cin>>fa3_eng;
				}
				else if(a==4)
				{
					cin>>fa4_eng;
				}
			
		    }while(fa1_eng>40 || fa2_eng>40 || fa3_eng>40 || fa4_eng>40 );
		    cout<<"\n\t----------------------------------------------------------";
			cout<<"\n\tEnter marks for SOCIAL STUDIES:";
			do
			{
				if(q>0)
				{
					cout<<"\n\tWrong input !! Try again...\n\n\tEnter Marks for SOCIAL STUDIES:";
				}
				q++;
				if(a==1)
				{
					cin>>fa1_sst;
				}
				else if(a==2)
				{
					cin>>fa2_sst;
				}
				else if(a==3)
				{
					cin>>fa3_sst;
				}
				else if(a==4)
				{
					cin>>fa4_sst;
				}
			
		    }while(fa1_sst>40 || fa2_sst>40 || fa3_sst>40 || fa4_sst>40 );
		    
		    if(a==1)
		    {
		    	fa1_maths=(fa1_maths/40.0)*100;
				fa1_sci=(fa1_sci/40.0)*100;
				fa1_hin=(fa1_hin/40.0)*100;
				fa1_eng=(fa1_eng/40.0)*100;
				fa1_sst=(fa1_sst/40.0)*100;
		    }
			
			else if(a==2)
			{
				fa2_maths=(fa2_maths/40.0)*100;
				fa2_sci=(fa2_sci/40.0)*100;
				fa2_hin=(fa2_hin/40.0)*100;
				fa2_eng=(fa2_eng/40.0)*100;
				fa2_sst=(fa2_sst/40.0)*100;
			}
			
			else if(a==3)
			{
				fa3_maths=(fa3_maths/40.0)*100;
				fa3_sci=(fa3_sci/40.0)*100;
				fa3_hin=(fa3_hin/40.0)*100;
				fa3_eng=(fa3_eng/40.0)*100;
				fa3_sst=(fa3_sst/40.0)*100;
			}
			
			else if(a==4)
			{
				fa4_maths=(fa1_maths/40.0)*100;
				fa4_sci=(fa1_sci/40.0)*100;
				fa4_hin=(fa1_hin/40.0)*100;
				fa4_eng=(fa1_eng/40.0)*100;
				fa4_sst=(fa1_sst/40.0)*100;
			}			
			cal_cgpa(a);
		}
		
		void cal_cgpa(int e)
		{
			float cg[5];
			float marks[5];
			
			if(e==1)
			{
				marks[0]=fa1_maths;
				marks[1]=fa1_eng;
				marks[2]=fa1_sci;
				marks[3]=fa1_sst;
				marks[4]=fa1_hin;
			}
			
			else if(e==2)
			{
				marks[0]=fa2_maths;
				marks[1]=fa2_eng;
				marks[2]=fa2_sci;
				marks[3]=fa2_sst;
				marks[4]=fa2_hin;
			}
			
			else if(e==3)
			{
				marks[0]=fa3_maths;
				marks[1]=fa3_eng;
				marks[2]=fa3_sci;
				marks[3]=fa3_sst;
				marks[4]=fa3_hin;
			}
		
			else if(e==4)
			{
				marks[0]=fa4_maths;
				marks[1]=fa4_eng;
				marks[2]=fa4_sci;
				marks[3]=fa4_sst;
				marks[4]=fa4_hin;
			}
			
			for(int i=0; i<5; i++)
			{
				cg[i]=ch(marks[i]);
			}
				float cgpa=0.0;
				
				for(int i=0; i<5; i++)
				{
					cgpa+=cg[i];
				}
				
				
				cgpa=(cgpa/50)*100;
				
				if(cgpa>90 && cgpa!=90)
				{
					if(e==1)
					{
						c1='A'; f1=1;
					}
					else if(e==2)
					{
						c2='A'; f2=1;
					}
					else if(e==3)
					{
						c3='A'; f3=1;
					}
					else if(e==4)
					{
						c4='A'; f4=1;
					}
					
				}
				else if(cgpa>80 || cgpa==90)
				{
						if(e==1)
					{
						c1='A'; f1=2;
					}
					else if(e==2)
					{
						c2='A'; f2=2;
					}
					else if(e==3)
					{
						c3='A'; f3=2;
					}
					else if(e==4)
					{
						c4='A'; f4=2;
					}
				}
				else if(cgpa>70)
				{
						if(e==1)
					{
						c1='B'; f1=1;
					}
					else if(e==2)
					{
						c2='B'; f2=1;
					}
					else if(e==3)
					{
						c3='B'; f3=1;
					}
					else if(e==4)
					{
						c4='B'; f4=1;
					}
				}
				else if(cgpa>60)
				{
						if(e==1)
					{
						c1='B'; f1=2;
					}
					else if(e==2)
					{
						c2='B'; f2=2;
					}
					else if(e==3)
					{
						c3='B'; f3=2;
					}
					else if(e==4)
					{
						c4='B'; f4=2;
					}
				}
				else if(cgpa>50)
				{
						if(e==1)
					{
						c1='C'; f1=1;
					}
					else if(e==2)
					{
						c2='C'; f2=1;
					}
					else if(e==3)
					{
						c3='C'; f3=1;
					}
					else if(e==4)
					{
						c4='C'; f4=1;
					}
				}
				else if(cgpa>40)
				{
						if(e==1)
					{
						c1='C'; f1=2;
					}
					else if(e==2)
					{
						c2='C'; f2=2;
					}
					else if(e==3)
					{
						c3='C'; f3=2;
					}
					else if(e==4)
					{
						c4='C'; f4=2;
					}
				}
				else if(cgpa>30)
				{
						if(e==1)
					{
						c1='D'; 
					}
					else if(e==2)
					{
						c2='D'; 
					}
					else if(e==3)
					{
						c3='D'; 
					}
					else if(e==4)
					{
						c4='D'; 
					}
				}
				else if(cgpa>20)
				{
						if(e==1)
					{
						c1='E'; 
					}
					else if(e==2)
					{
						c2='E'; 
					}
					else if(e==3)
					{
						c3='E'; 
					}
					else if(e==4)
					{
						c4='E'; 
					}
				}
				
					if(e==1)
					{
						cout<<"\n CGPA:"<<c1<<f1;
					}
					else if(e==2)
					{
						cout<<"\nCGPA:"<<c2<<f2;
					}
					else if(e==3)
					{
						cout<<"\nCGPA:"<<c3<<f3;
					}
					else if(e==4)
					{
						cout<<"\nCGPA:"<<c4<<f4;
					}
			
		}
		
		void show_marks(int f) const
		{
			cout<<"\n\n\t----------------------------SCORE CARD---------------------------";
			cout<<"\n\n\tName of the Student:";
			puts(name);
			cout<<"\tRoll number of ";
			cout<<name<<":";
			cout<<rollno;
			
			if(f==1)
			{
				cout<<"\n\n\tMarks in Maths:"<<fa1_maths;
				cout<<"\n\tMarks in Science:"<<fa1_sci;
				cout<<"\n\tMarks in Hindi:"<<fa1_hin;
				cout<<"\n\tMarks in Social Studies:"<<fa1_sst;
				cout<<"\n\tMarks in English:"<<fa1_eng;
				cout<<"\n\n\t-----------------------------------------------------------------";
				cout<<"\n\t\tCGPA:"<<c1<<f1;
				cout<<"\n\t-----------------------------------------------------------------";
			}
			
			else if(f==2)
			{
				cout<<"\n\n\tMarks in Maths:"<<fa2_maths;
				cout<<"\n\tMarks in Science:"<<fa2_sci;
				cout<<"\n\tMarks in Hindi:"<<fa2_hin;
				cout<<"\n\tMarks in Social Studies:"<<fa2_sst;
				cout<<"\n\tMarks in English:"<<fa2_eng;
				cout<<"\n\n\t-----------------------------------------------------------------";
				cout<<"\n\t\tCGPA:"<<c2<<f2;
				cout<<"\n\t-----------------------------------------------------------------";
			}
			
			else if(f==3)
			{
				cout<<"\n\n\tMarks in Maths:"<<fa3_maths;
				cout<<"\n\tMarks in Science:"<<fa3_sci;
				cout<<"\n\tMarks in Hindi:"<<fa3_hin;
				cout<<"\n\tMarks in Social Studies:"<<fa3_sst;
				cout<<"\n\tMarks in English:"<<fa3_eng;
				cout<<"\n\n\t-----------------------------------------------------------------";
				cout<<"\n\t\tCGPA:"<<c3<<f3;
				cout<<"\n\t-----------------------------------------------------------------";
			}
			
			else if(f==4)
			{
				cout<<"\n\n\tMarks in Maths:"<<fa4_maths;
				cout<<"\n\tMarks in Science:"<<fa4_sci;
				cout<<"\n\tMarks in Hindi:"<<fa4_hin;
				cout<<"\n\tMarks in Social Studies:"<<fa4_sst;
				cout<<"\n\tMarks in English:"<<fa4_eng;
				cout<<"\n\n\t-----------------------------------------------------------------";
				cout<<"\n\t\tCGPA:"<<c4<<f4;
				cout<<"\n\t-----------------------------------------------------------------";
			}
		}
		
		//function to calculate grades 
public:
	void getdata(char nm[], int n);		//function to accept data from user
	void showdata() const;	//function to show data on screen
	void show_tabular() const;
	int retrollno() const;
}; //class ends here

class attendance
{
	//double status=0;
	int atten;
	int rollNo;
	char name[50];
	char date[20];
	int stat;
	int tot_pre;
	int tot_abs;
	int countA;
	int countP;
public:
			int ret_atn()
		{
			return atten;
		}
	char a,	b,	c,	d,	e,	f, g;
//	void all_dis_atten() const;
	int checkRoll() const;
	void cal_atten();
	void getAttendance(char nm[], int n);  		//function to accept data from user
	void dis_atten() const;		//function to display data on screen
};

class login
{
	public:
		char name[30];
		int ID;
		int pass;
		

		void log_det() const;
		void regist();
		void log();
		void Agetdata();
		void Ugetdata();
		int checkID() const; 
		int checkPass() const;
};

class atn_count
{
	char name[30];
	int roll; 
	int admin;
	int pre;
	int abs;
	
	public:
		void atn_det(char arr[], int rll, int adm)
		{
			strcpy(name, arr);
			roll=rll;
			admin=adm;
			pre=0;
			abs=0;
		}
		
		int ret_roll()
		{
			return roll;
		}
		
		void wrt_det(int chk)
		{
			if(chk==1)
			{
				++pre;
			}
			else if(chk==0)
			{
				++abs;
			}
		}
};

class password
{
	char pass[30];
	
public:
	
	int checkpass(char ps[])
	{
		int a;
		a=strcmp(pass, ps);
		return a;
	}
	
	void write()
	{
		gets(pass);
		cin.ignore();
	}
	
	void show_name(char a[40] )
	{
		 strcpy(a, pass);
	}
}ps;


class stud_mem
{
	char name[30];
	int roll;
	int admin;
	
public:
	void show_name(char a[40] )
	{
		 strcpy(a, name);
	}
	
	int show_roll()
	{
		return roll;
	}
	
	void see(char arr[], int &rll, int &amd)
	{
		strcpy(arr, name);
		rll=roll;
		amd=admin;
	}
	
	void get_data()
	{
		system("cls");
		cout<<"\n\n\t-----------------------STUDENT DETAILS-----------------------";
		cin.ignore();
		cout<<"\nEnter name of the student:";
		gets(name);
		//cin.ignore();
		cout<<"\nEnter roll number of "<<name<<":";
		cin>>roll;
		cout<<"\nEnter Admission number of "<<name<<":";
		cin>>admin;
		cout<<"\n\n\t-----------------RECORD CREATED SUCCESSFULLY-----------------";
	}
	
	void show_data()
	{
		cout<<"\n\n\t-----------------------STUDENT DETAILS-----------------------";
		cout<<"\n\tName of the student:"<<setw(15)<<name;
		//puts(name);
		cout<<"\n\tRoll number of "<<name<<":";
		cout<<setw(12)<<roll;
		cout<<"\n\tAdmission number of "<<name<<":";
		cout<<setw(7)<<admin;
		
	}
};



struct redbook
{
	int rollNo;
	char name[50];
	char date[20];
	char remark[150];
	char termi[10];
}rb;


struct Personal_Info
{
	char name[45];
	char phone[15];
	char address[150];
	char email[50];
	
}C;

//***********************************************************************************************
//                                           FUNCTION 
//***********************************************************************************************

void process()
{
	cout<<"\n\n\t\tCONNECTING TO SERVER ";
		for(int i=0; i<500; i++)
	{
		for(int k=0; k<10000; k++);
	}

	for( int a=0; a<4; a++)
	{
		cout<<"\\";
			for(int i=0; i<500; i++)
		{
			for(int k=0; k<100000; k++);
		}
	}
	
	cout<<"\n\n\t\tENCRYPTING PASSOWORD AND ACCESSING MAIN SERVER";
		for(int i=0; i<500; i++)
	{
		for(int k=0; k<10000; k++);
	}

	for( int a=0; a<3; a++)
	{
		cout<<".";
			for(int i=0; i<500; i++)
		{
			for(int k=0; k<100000; k++);
		}
	}
	
	cout<<"\n\n\t\tDATA RECIEVED AND STARTING VERIFICATION";
		for(int i=0; i<500; i++)
	{
		for(int k=0; k<10000; k++);
	}

	for( int a=0; a<6; a++)
	{
		cout<<".";
			for(int i=0; i<500; i++)
		{
			for(int k=0; k<100000; k++);
		}
	}
}

void student::calculate()
{
	per=(p_marks+c_marks+m_marks+e_marks+cs_marks)/5.0;
	if(per>=60)
		grade='A';
	else if(per>=50)
		grade='B';
	else if(per>=33)
		grade='C';
	else
		grade='F';
}

void login::Agetdata()
{
	cout<<"\n\tEnter your name:";
	cin.ignore();
	cin.getline(name, 30);
	cout<<"\n\tEnter your desired ID (Numerical) :";
	cin>>ID;
	cout<<"\n\tEnter your password:";
	cin>>pass;
}

void login::Ugetdata()
{
	cout<<"\n\tEnter your name:";
	cin.ignore();
	cin.getline(name, 30);
	cout<<"\n\tEnter your desired ID (Numerical) :";
	cin>>ID;
	cout<<"\n\tEnter your password:";
	cin>>pass;
}

class calc_atten
{
	int roll;
	int atten;
	
public:
	void get_val(int r, int a)
	{
		roll=r;
		atten=a;
	}
	
	void show()
	{
		cout<<roll<<"\n"<<atten;
	}
	
	int ret_roll()
	{
		return roll;
	}
	
	int ret_atten()
	{
		return atten;
	}
};

int ch(int a)
{
				if(a>90)
				{
					return 10.0;
				}
				else if(a>80)
				{
					return 9.0;
				}
				else if(a>70)
				{
					return 8.0;
				}
				else if(a>60)
				{
					return 7.0;
				}
				else if(a>50)
				{
					return 6.0;
				}
				else if(a>40)
				{
					return 5.0;
				}
				else if(a>30)
				{
					return 4.0;
				}
				else if(a>20)
				{
					return 3.0;
				}
}

void attendance::getAttendance(char nm[], int m)
{
	strcpy(name, nm);
	rollNo=m;
	cin.ignore();
	cout<<"\nEnter date:";
	cin.getline(date, 50);
	cout<<"Enter whether the student is present or absent (1 - present, 0 - Absent):";
	cin>>atten;
	cal_atten();
	calc_atten at;
	ofstream outFile;
	outFile.open("D:\\shubham\\atten_c.dat", ios::binary|ios::app);
	at.get_val(m, atten);
	outFile.write(reinterpret_cast<char *> (&at), sizeof(calc_atten));
	outFile.close();
	cin.ignore();
}

void attendance::cal_atten()
{

	if(atten==1)
	{
		
		countP++;
		 a='P',	b='R',	c='E',	d='S',	e='E',	f='N', g='T';
	}
	else if(atten==0 )
	{
		countA++;
		 a='A',	b='B',	c='.',	d='S',	e='E',	f='N', g='T';
	}
	else
	{
		cout<<"Entered wrong choice....";
	}
}


void login::log_det() const
{
	
}



void attendance::dis_atten() const
{
	cout<<"\n\t      "<<date<<"                  "<<a<<b<<c<<d<<e<<f<<g;
}

void student::getdata(char nm[], int n)
{
	strcpy(name, nm);
	rollno=n;
	cout<<"\nEnter The marks in physics out of 100 : ";
	cin>>p_marks;
	cout<<"\nEnter The marks in chemistry out of 100 : ";
	cin>>c_marks;
	cout<<"\nEnter The marks in maths out of 100 : ";
	cin>>m_marks;
	cout<<"\nEnter The marks in english out of 100 : ";
	cin>>e_marks;
	cout<<"\nEnter The marks in computer science out of 100 : ";
	cin>>cs_marks;
	calculate();
}

void student::showdata() const
{
	cout<<"\nRoll number of student : "<<rollno;
	cout<<"\nName of student : "<<name;
	cout<<"\nMarks in Physics : "<<p_marks;
	cout<<"\nMarks in Chemistry : "<<c_marks;
	cout<<"\nMarks in Maths : "<<m_marks;
	cout<<"\nMarks in English : "<<e_marks;
	cout<<"\nMarks in Computer Science :"<<cs_marks;
	cout<<"\nPercentage of student is  :"<<per;
	cout<<"\nGrade of student is :"<<grade;
}

void student::show_tabular() const
{
	cout<<rollno<<setw(6)<<" "<<name<<setw(10)<<p_marks<<setw(4)<<c_marks<<setw(4)<<m_marks<<setw(4)
		<<e_marks<<setw(4)<<cs_marks<<setw(8)<<per<<setw(6)<<grade<<endl;
}

int  student::retrollno() const
{
	return rollno;
}

int attendance::checkRoll() const
{
	return rollNo;
}

int login::checkID() const
{
	return ID;
}

int login::checkPass() const
{
	return pass;
}

//***************************************************************
//                     	FUNCTIONS DECLARATIONS
//****************************************************************

void write_student();	//write the record in student.dat file
void display_all();	//read all records from student.dat file
void display_sp(int);	//accept rollno and read record from student.dat file
void modify_student(int);	//accept rollno and update record of student.dat file
void delete_student(int);	//accept rollno and delete selected records from student.dat file
void class_result();	//display all records in tabular format from student.dat file
void result();		//display result menu
void intro();		//display welcome screen
void entry_menu();
void write_atten();	//writes entry in atten.dat
void dis_atten();           //display attendance of all
void entry_atten();			//entry menu for attendance 
void show_atten();			
void display_atten(int);	//display a specific record from atten.dat file by passing a int roll number
void search_atten();		//search a specific record from atten.dat file
void redbook_entry();
void menu();
void saveContact();
void showDtls();
void login_menu();
void Aregist();
void Uregist();
void regist();
void admin_logi(int m, int n);
void user_logi(int m, int n);
void user_login_menu();
void admin_login_menu();
void dots(int x);
void write_attn();
void write_stu();
void display(); 
void search();  
void mod_stu(); 
void modify_students(int n, int a);
void display_all_marks(int a);
void enter_marks();
void write_marks(int a);
void menu();
void display();
void display_sps(int n, int a);
void delete_students(int a);
void CreateFolder(const char *path)
{
	if(!CreateDirectory(path, NULL))
	{
		return;
	}
}
//***************************************************************
//    	THE MAIN FUNCTION OF PROGRAM
//****************************************************************
void write_det()
{
	system("cls");
	char a;
	char arr[30];
	int amd;
	int rll;
	stud_mem d;
	atn_count b;
	ofstream out;
	ofstream ous;
	ous.open("D:\\shubham\\atten_count.dat", ios::binary | ios::app);
	out.open("D:\\shubham\\student_details.dat" , ios::binary | ios::app);
	d.get_data();
	d.see(arr, rll, amd);
	b.atn_det(arr, rll, amd);
	out.write(reinterpret_cast<char *> (&d), sizeof(stud_mem));
	ous.write(reinterpret_cast<char *> (&b), sizeof(atn_count));
	out.close();
	ous.close();
	cout<<"\n\nStudent Attendance record created.....";
	cin.ignore();
	cin.get();
}

void write_attn()
{
	int chk;
	int pos;
	atn_count b;
	char name[30];
	int rll;
	stud_mem d;
	ifstream in;
	in.open("D:\\shubham\\student_details.dat", ios::binary);
	if(!in)
	{
		cout<<"File could not be open !! Press any Key...";
		cin.ignore();
		cin.get();
		return;
	}
	bool flag=false;
	while(in.read(reinterpret_cast<char *> (&d), sizeof(stud_mem)))
	{
	
	system("cls");
	d.show_name(name);
	rll=d.show_roll();
	cout<<"\n\nEnter attendance for "<<name;
	char ask;
	attendance at;
	ofstream outFile;
	outFile.open("D:\\shubham\\atten.dat",ios::binary|ios::app);
	at.getAttendance(name, rll);
	outFile.write(reinterpret_cast<char *> (&at), sizeof(attendance));
	fstream ouc;
	ouc.open("D:\\shubham\\atten_count.dat", ios::binary | ios::in | ios::out);
	while(!ouc.eof())
	{
		pos=ouc.tellg();
		ouc.read((char *) &b, sizeof(b));
		if(b.ret_roll()==rll)
		{
			chk=at.ret_atn();
			b.wrt_det(chk);
			ouc.seekg(pos);
			ouc.write((char*) &b, sizeof(b));
			break;
		}
	}
	outFile.close();
    cout<<"\n\nStudent record Has Been Created ";
	cin.ignore();
	cin.get();
	cout<<"\nDo you want to enter a new record again...?? (Y- yes, N- no):";
	cin>>ask;
	}
	in.close();
	if(flag==false)
		cout<<"\n\nrecord not exist";
	cin.ignore();
	cin.get();
}



void read_det()
{
	char name[30];
	int rll;
	stud_mem d;
	ifstream in;
	in.open("D:\\shubham\\student_details.dat", ios::binary);
	if(!in)
	{
		cout<<"File could not be open !! Press any Key...";
		cin.ignore();
		cin.get();
		return;
	}
	bool flag=false;
	while(in.read(reinterpret_cast<char *> (&d), sizeof(stud_mem)))
	{
	
	system("cls");
	d.show_name(name);
	rll=d.show_roll();
	cout<<"\n\nWrite the marks for "<<name;
	char ask;
	student st;
	ofstream outFile;
	outFile.open("D:\\shubham\\student.dat",ios::binary|ios::app);
	st.getdata(name, rll);
	outFile.write(reinterpret_cast<char *> (&st), sizeof(student));
	outFile.close();
    cout<<"\n\nStudent record Has Been Created ";
	cin.ignore();
	cin.get();
	cout<<"\nDo you want to enter a new record again...?? (Y- yes, N- no):";
	cin>>ask;
	}
	in.close();
	if(flag==false)
		cout<<"\n\nrecord not exist";
	cin.ignore();
	cin.get();
}


void dots(int x)
{
	for( int a=0; a<x; a++)
	{
			cout<<".";
		for(int i=0; i<500; i++)
	{
		for(int k=0; k<100000; k++);
	}
	}
}

int main()
{
	CreateFolder("D:\\shubham");
	system("cls");
	cout<<"\n\n\n\t\t\t\t    WELCOME";
	cout<<"\n\n\tTHIS SOFTWARE IS DEVELOPED BY SHUBHAM AS A COMPUTER SCIENCE PROJECT";
	cout<<"\n\n\tTHIS SOFTWARE AIMS AT DIGITALISING THE PROCESS OF MARKS MANAGEMENT\n\t\t         AND ATTENDANCE CALCULATIONS\n\n\n\n\n\n\n";
	cout<<"\n\n\tPLEASE WAIT WHILE WE LOAD THE SOFTWARE FOR YOU...... \n\n\t  ";
	for( int a=0; a<62; a++)
	{
			cout<<"/";
		for(int i=0; i<500; i++)
	{
		for(int k=0; k<100000; k++);
	}
	}
	cout<<"\n\n\n\n\n";
	cin.ignore();
	int count1=0;
	
		ifstream in;
			in.open("D:\\shubham\\password.dat", ios::binary);
			while(in.read(reinterpret_cast<char *> (&ps), sizeof(password)))
			{
				count1++;
			}
			
			
			if(count1==0)
			{
				system("cls");
				cout<<"\n\n\n\tIT SEEMS THE PROGRAM IS RUNNING FOR THE FIRST TIME ON THIS MACHINE";
				cout<<"\n\n\tLET\'S CREATE A PASSWORD TO SECURE YOUR VALUABLE DATA";
				cout<<"\n\n\tENTER PASSWORD: ";
				ofstream on;
				on.open("D:\\shubham\\password.dat", ios::binary);
				ps.write();
				on.write(reinterpret_cast<char *> (&ps), sizeof(password));
			}
	char f[40];
	
	char e[40];
	int c=0;
	static int count=0;
	char ans='y';
	do
	{
		char d[40];
		int n=0;
		
		system("cls");
		if(count>=0 || count<=2)
		{
			cout<<"\n\n\n\t\t\t    LOGIN COUNT:"<<count+1;
		}
		cout<<"\n\n\n\t\t\tENTER SYSTEM PASSWORD:";
		string pass="";
		char ch;
		ch=_getch();
		c=0;
		while(ch!=13)
		{
			while(ch==8)
			{
				pass.clear();
				ch=_getch();
				if(ch==13)
				{
					break;
				}
			}
			d[c]=ch;
			c++;
			pass.push_back(ch);
			cout<<'*';
			ch=_getch();
		}
		for(int j=c; j<40; j++)
		{
			d[j]=NULL;
		}
		cout<<"\n\n\t\t\tCHECKING PASSWORD";
			for(int i=0; i<500; i++)
		{
			for(int k=0; k<100000; k++);
		}

		dots(6);
		ps.show_name(e);
		if(strcmp(d,e)==0)
		{
		
			cout<<"\n\n\t\t\tAccess granted....\n\n";
			char ch;
			intro();
			login_menu();
		}
		else
		{
			system("cls");
			cout<<"\n\n\n\n\n\n\n\n\n\n\t     ---------------WRONG PASSWORD ENTERED---------------";
			cin.ignore();
		}
		
		if(count==2)
		{
			system("cls");
			cout<<"\n\n\n\n\n\n\n\n\t         ---------------SESSION EXPIRED---------------";
			cout<<"\n\n\n\t        ---------------PROGRAM TERMINATED---------------\n\n\n\n\n\n\n\n";
			exit(0);
		}
		
		count++;
	}while(ans=='y' || ans=='Y');


}

void user_login_menu()
{
	char ch;
	int rno, num;
	do
	{
		system("cls");
			time_t now = time(0);
			char* dt = ctime(&now);
		cout<<"\n\n\tYour Login Date and Time is : "<<dt;
		cout<<"\n\n      ****************************************************";
		cout<<setw(0)<<"\n     |"<<setw(53)<<"|"<<"\n     |\tMAIN MENU"<<setw(42)<<"|";
		cout<<setw(0)<<"\n     |"<<setw(53)<<"|"<<"\n     |\t01. RESULT MENU"<<setw(36)<<"|";
		cout<<setw(0)<<"\n     |"<<setw(53)<<"|"<<"\n     |\t02. ATTENDANCE MENU"<<setw(32)<<"|";
		cout<<setw(0)<<"\n     |"<<setw(53)<<"|"<<"\n     |\t03. STUDENT RESULT MENU"<<setw(28)<<"|";
		cout<<setw(0)<<"\n     |"<<setw(53)<<"|"<<"\n     |\t04. EXIT"<<setw(43)<<"|";
        cout<<setw(0)<<"\n     |"<<setw(53)<<"|"<<"\n     |\tPlease Select Your Option (1-4) "<<setw(19)<<"|";
		cout<<"\n      ****************************************************";
		cin>>ch;
		switch(ch)
		{
			case '1': display();
				break;
			case '2': search_atten();
				break;
			case '3':search(); break;
			case '4': exit(0);
                 break;
			default :cout<<"\a";
		}
    }while(ch!='5');
	
}




void admin_login_menu()
{
	char ch;
	do
	{
		system("cls");
		cout<<"\n\n      ****************************************************";
		cout<<setw(0)<<"\n     |"<<setw(53)<<"|"<<"\n     |\tMAIN MENU"<<setw(42)<<"|";
		cout<<setw(0)<<"\n     |"<<setw(53)<<"|"<<"\n     |\t01. RESULT MENU"<<setw(36)<<"|";
		cout<<setw(0)<<"\n     |"<<setw(53)<<"|"<<"\n     |\t02. ATTENDANCE MENU"<<setw(32)<<"|";
		cout<<setw(0)<<"\n     |"<<setw(53)<<"|"<<"\n     |\t03. ENTRY/EDIT MENU"<<setw(32)<<"|";
		cout<<setw(0)<<"\n     |"<<setw(53)<<"|"<<"\n     |\t04. EXIT"<<setw(43)<<"|";
        cout<<setw(0)<<"\n     |"<<setw(53)<<"|"<<"\n     |\tPlease Select Your Option (1-4) "<<setw(19)<<"|";
		cout<<"\n      ****************************************************";
		cin>>ch;
		switch(ch)
		{
			case '1': result();
				break;
			case '2': entry_atten();
				break;
			case '3':entry_menu();
				break;
			case '4': exit(0);
                 break;
			default :cout<<"\a";
		}
    }while(ch!='7');
	
}



void entry_atten()
{
	char ch;
	system("cls");
	cout<<"\n\n\n\tATTENDANCE MENU";
	cout<<"\n\n\t01. ENTER ATTENDANCE";
	cout<<"\n\n\t02. DISPLAY ATTENDANCE";
	cout<<"\n\n\tPlease Select Your Option(1-2) ";
	cin>>ch;
	switch(ch)
	{
		case '1': write_attn();
			break;
		case '2': search_atten();
			break;
		default: cout<<"\a"; entry_atten();
	}
}

void login_menu()
{
	char check[]="terminator";
	char pass[20];
	int id, password;
	char ch;
	system("cls");
	time_t now = time(0);
	char* dt = ctime(&now);
	cout<<"\n\n\t\t\tDate and Time:"<<dt;
	cout<<"\n\n\n\tLOGIN MENU";
	cout<<"\n\n\t01. ADMINISTRATOR LOGIN";
	cout<<"\n\n\t02. USER LOGIN";
	cout<<"\n\n\t03. REGISTER YOURSELF";
	cout<<"\n\n\tPlease Select Your Option(1-3) ";
	cin>>ch;
	switch(ch)
	{
		case '1': system("cls"); cout<<"\n\tEnter your ID:";
		cin>>id;
		cout<<"\n\tEnter your password:";
		cin>>password;
		 admin_logi(id, password) ;
			break;
		case '2': system("cls"); cout<<"\n\tEnter your ID:";
		cin>>id;
		cout<<"\n\tEnter your password:";
		cin>>password;
		user_logi(id, password) ;
			break; 
		case '3':system("cls");
				 cout<<"\n\n\n\n\n\t\t\tEnter System Password:";
				 
				 cin.get();
				 gets(pass);
				 if(strcmp(check, pass)==0)
				{
					process();
						cout<<"\n\n\t\tACCESSED GRANTED ";
						for(int i=0; i<500; i++)
						{
							for(int k=0; k<10000; k++);
						}

						for( int a=0; a<4; a++)
						{
						cout<<"\\";
								for(int i=0; i<500; i++)
							{
								for(int k=0; k<100000; k++);
							}
						}
						
						cout<<"\n\n\t\tLOADING";
						for(int i=0; i<500; i++)
						{
							for(int k=0; k<10000; k++);
						}

						dots(7);
					regist() ;
				}
				 else 
				 {
				 		process();
						cout<<"\n\n\t\tACCESSED DENIED ";
						for(int i=0; i<500; i++)
						{
							for(int k=0; k<10000; k++);
						}

						for( int a=0; a<4; a++)
						{
						cout<<"\\";
								for(int i=0; i<500; i++)
							{
								for(int k=0; k<100000; k++);
							}
						}
						
						cout<<"\n\n\t\tABORTING";
						for(int i=0; i<500; i++)
						{
							for(int k=0; k<10000; k++);
						}

						dots(7);
						
						for(int i=0; i<500; i++)
						{
							for(int k=0; k<10000; k++);
						}
						dots(7);
						
						login_menu();
				 }
			break;
		default: cout<<"\a"; login_menu();
	}
}

//*******************************************************************************************
//                 FUNCTION TO SEARCH A PARTICULAR RECORD IN ATTEN.DAT (ATTENDANCE PROGRAM)
//*******************************************************************************************


void regist()
{
	char ch;
	system("cls");
	time_t now = time(0);
	char* dt = ctime(&now);
	cout<<"\n\n\t\tDate and Time:"<<dt;
	cout<<"\n\n\n\tREGISTER MENU";
	cout<<"\n\n\t01. ADMINISTRATOR REGISTRATION";
	cout<<"\n\n\t02. USER REGISTRATION";
	cout<<"\n\n\tPlease Select Your Option(1-2) ";
	cin>>ch;
	switch(ch)
	{
		case '1':Aregist() ;
			break;
		case '2':Uregist() ;
			break; 
		default: cout<<"\a"; login_menu();
	}
}



void search_atten()
{
	int number=0;
	char ch;
	system("cls");
	cout<<"\n\n\n\tSEARCH ATTENDANCE";
	cout<<"\n\n\t01. DISPLAY ATTENDANCE OF ALL";
	cout<<"\n\n\t02. SEARCH ATTENDANCE BY ROLL NUMBER";
	cout<<"\n\n\tPlease Select Your Option(1-2): ";
	cin>>ch;
	switch(ch)
	{
		case '1': show_atten();
			break;
		case '2': cout<<"\n\n\tPlease Enter The roll number: "; cin>>number;
			display_atten(number);
			break;
		default: cout<<"\a"; search_atten();
	}
}

//*******************************************************************************************************
// FUNCTION TO SEARCH A PARTICULAR RECORD IN ATTEN.DAT THROUGH INPUTTING ROLL NUMBER (ATTENDANCE PROGRAM)
//*******************************************************************************************************

void user_logi(int m, int n)
{
	int check=0;
	system("cls");
	login lg;
	ifstream inFile;
	inFile.open("D:\\shubham\\Ulog.dat", ios::binary);
	if(!inFile)
	{
		cout<<"Login details not found !! Press any Key to continue...";
		cin.ignore();
		cin.get();
		return;
	}
	bool flag=false;
	while(inFile.read(reinterpret_cast<char *> (&lg), sizeof(login)))
	{
		if((lg.checkID()==m) && (lg.checkPass()==n))
		{
	  		 user_login_menu();
			 flag=true;
		}
		if(lg.checkID()==m)
		{
			check=1;
		}
	}
	inFile.close();
	if(flag==false)
	{
		if(check==1)
		{
			cout<<"\n\n\t\tCheck your password and try again";
		}
		else
		cout<<"\n\n\t\tWrong userID entered";
	}
		
	cout<<"\n\n\t\tStarting New session";
		for(int i=0; i<500; i++)
	{
		for(int k=0; k<100000; k++);
	}

	dots(10);
	
	cin.ignore();
	cin.get();
	login_menu();
	
	cin.ignore();
	cin.get();
}


void admin_logi(int m, int n)
{
	int check=0;
	system("cls");
	login lg;
	ifstream inFile;
	inFile.open("D:\\shubham\\Alog.dat", ios::binary);
	if(!inFile)
	{
		cout<<"Login details not found !! Press any Key to continue...";
		cin.ignore();
		cin.get();
		return;
	}
	bool flag=false;
	while(inFile.read(reinterpret_cast<char *> (&lg), sizeof(login)))
	{
		
		if(lg.checkID()==m)
		{
			check=1;
		}
		if((lg.checkID()==m) && (lg.checkPass()==n))
		{
			char a;
			int count=0;
			stud_mem st;
			ifstream in;
			in.open("D:\\shubham\\student_details.dat", ios::binary);
			while(in.read(reinterpret_cast<char *> (&st), sizeof(stud_mem)))
			{
				count++;
			}
			if(count==0)
			{
			do
				{
					system("cls");
					write_det();
					cout<<"\n\nEnter details for another student (Y-Yes/ N-No):";
					cin>>a;
				}while(a=='y' || a=='Y');
			}
			if(count!=0)
			{
				system("cls");
				cout<<"\n\n\t\tPROGRAM CONTAINS DETAILS OF "<<count<<" STUDENTS";
				cout<<"\n\n\t\tEnter details for other students ?";
				char ash;
				cin>>ash;
				char y;
				if(ash=='Y' || ash=='y')
				{
					do
					{
						system("cls");
						write_det();
						cout<<"\n\n\t\tEnter details for new entry ?";
						cin>>y;
					}while(y=='y' || y=='Y');
				}
	  		 admin_login_menu();
			 flag=true;
			}
	}
	inFile.close();
	if(flag==false)
	{
		if(check==1)
		{
			cout<<"\n\n\t\tCheck your password and try again";
		}
		else
		cout<<"\n\n\t\tWrong adminID entered";
	}
		
	cout<<"\n\n\t\tStarting New session";
		for(int i=0; i<5000; i++)
	{
		for(int k=0; k<100000; k++);
	}

	dots(6);
	
	cin.ignore();
	cin.get();
	
	login_menu();
	
	cin.ignore();
	cin.get();
}
}


void display_atten(int m)
{
	int countP=0;
	int countA=0;
	calc_atten ca;
	stud_mem sm;
	attendance at;
	
		ifstream ifFile;
		ifFile.open("D:\\shubham\\student_details.dat", ios::binary);
		if(!ifFile)
		{
			cout<<"File could not be opened !! Press any key...";
			cin.ignore();
			cin.get();
		return;
		}
		while(ifFile.read(reinterpret_cast<char *> (&sm), sizeof(stud_mem)))
		{
		
			if(sm.show_roll()==m)
			{
				sm.show_data();
			}
		}
		ifFile.close();
	
	ifstream iFile;
	iFile.open("D:\\shubham\\atten_c.dat", ios::binary);
	if(!iFile)
	{
		cout<<"File could not be open !! Press any Key...";
		cin.ignore();
		cin.get();
		return;
	}
	while(iFile.read(reinterpret_cast<char *> (&ca), sizeof(calc_atten)))
	{
		if(ca.ret_roll()==m)
		{
	  		 if(ca.ret_atten()==0)
	  		 {
	  		 	countA++;
	  		 }
	  		 else if(ca.ret_atten()==1)
	  		 {
	  		 	countP++;
	  		 }
		}
	}
	iFile.close();
	cout<<"\n\n      ****************************************************************";
	cout<<"\n\nTotal number of working days:"<<setw(5)<<countP+countA;
	cout<<"\nTotal number of days present:"<<setw(5)<<countP;
	cout<<"\nTotal number of days absent:"<<setw(6)<<countA;
	cout<<"\n\n";
	
	cout<<"\n\t -----------------------------------------------------";
	cout<<"\n\t|             DATE         |           STATUS         |";
	cout<<"\n\t|-----------------------------------------------------|";
	ifstream inFile;
	inFile.open("atten.dat", ios::binary);
	if(!inFile)
	{
		cout<<"File could not be open !! Press any Key...";
		cin.ignore();
		cin.get();
		return;
	}
	bool flag=false;
	while(inFile.read(reinterpret_cast<char *> (&at), sizeof(attendance)))
	{
		if(at.checkRoll()==m)
		{
	  		 at.dis_atten();
			 flag=true;
		}
	}
	inFile.close();
	
	
	
	if(flag==false)
	cout<<"\n\nrecord not exist";
	cin.ignore();
	cin.get();
}

//***************************************************************************************
//                   FUNCTION TO DIPLAY EVERY ENTRY IN ATTEN.DAT (ATTENDANCE PROGRAM)
//***************************************************************************************


void show_atten()
{
	int count=0;
	//int counter=0;
	calc_atten at;
	stud_mem ca;
	stud_mem st;
			ifstream in;
			in.open("D:\\shubham\\student_details.dat", ios::binary);
			while(in.read(reinterpret_cast<char *> (&st), sizeof(stud_mem)))
			{
				count++;
			}
			in.close();
	cout<<"\n\n\n\t\tDISPLAY ATTENDANCE OF ALL !!!\n\n";
	
	for(int i=1; i<=count; i++)
	{
		ifstream iFile;
		iFile.open("D:\\shubham\\student_details.dat", ios::binary);
		if(!iFile)
		{
			cout<<"File could not be opened !! Press any key...";
			cin.ignore();
			cin.get();
		return;
		}
		while(iFile.read(reinterpret_cast<char *> (&ca), sizeof(stud_mem)))
		{
		
			if(ca.show_roll()==i)
			{
				ca.show_data();
			}
		}
		iFile.close();
		
		ifstream inFile;
		inFile.open("D:\\shubham\\atten_c.dat", ios::binary);
	
		int countA=0;
		int countP=0;
	
		if(!inFile)
		{
			cout<<"File could not be opened !! Press any key...";
			cin.ignore();
			cin.get();
			return;
		}
		while(inFile.read(reinterpret_cast<char *> (&at), sizeof(calc_atten)))
		{
			if(at.ret_roll()==i)
			{
	  		 	if(at.ret_atten()==0)
	  		 	{
	  		 		countA++;
	  			}
	  		 	else if(at.ret_atten()==1)
	  			{
	  		 		countP++;
	  		 	}
			}
		}
		inFile.close();
		cout<<"\n\n\tTotal number of working days:"<<setw(5)<<countP+countA;
		cout<<"\n\tTotal number of days present:"<<setw(5)<<countP;
		cout<<"\n\tTotal number of days absent:"<<setw(6)<<countA;
		
		cout<<"\n\n\t-------------------------------------------------------------";
		cout<<"\\t-------------------------------------------------------------";
		
	}
	
	cin.ignore();
	cin.get();
}



//***************************************************************************************
//                     FUNCTION TO WRITE ANY ENTRY IN ATTEN.DAT (ATTENDANCE PROGRAM)
//***************************************************************************************

void Aregist()
{
	system("cls");
	char ask;
	login lg;
	ofstream outFile;
	outFile.open("D:\\shubham\\Alog.dat", ios::binary|ios::app);
	lg.Agetdata();
	outFile.write(reinterpret_cast<char *> (&lg), sizeof(login));
	outFile.close();
		cout<<"\n\nNew Registration successful.....";
		cin.ignore();
		cin.get();
	cout<<"\nNew Registration again...?? (Y- yes, N- no):";
	cin>>ask;
	switch(ask)
	{
	case 'y': Aregist(); break;
	
	case'Y': Aregist(); break;
	 	
	case'N': login_menu(); break;
	 		
	case'n':login_menu();
		break;
	}
}


void Uregist()
{
	system("cls");
	char ask;
	login lg;
	ofstream outFile;
	outFile.open("D:\\shubham\\Ulog.dat", ios::binary|ios::app);
	lg.Ugetdata();
	outFile.write(reinterpret_cast<char *> (&lg), sizeof(login));
	outFile.close();
		cout<<"\n\nNew Registration successful.....";
		cin.ignore();
		cin.get();
	cout<<"\nNew Registration again...?? (Y- yes, N- no):";
	cin>>ask;
	switch(ask)
	{
	case 'y': Uregist(); break;
	
	case'Y': Uregist(); break;
	 	
	case'N': login_menu(); break;
	 		
	case'n':login_menu();
		break;
	}
}


//*******************************************************************************
//    	FUNCTION TO READ ALL ENTRIES FROM STUDENT.DAT (STUDENT MARKING PROGRAM)
//*******************************************************************************

void display_all()
{
	student st;
	ifstream inFile;
	inFile.open("D:\\shubham\\student.dat",ios::binary);
	if(!inFile)
	{
		cout<<"File could not be open !! Press any Key...";
		cin.ignore();
		cin.get();
		return;
	}
	cout<<"\n\n\n\t\tDISPLAY ALL RECORD !!!\n\n";
	while(inFile.read(reinterpret_cast<char *> (&st), sizeof(student)))
	{
		st.showdata();
		cout<<"\n\n====================================\n";
	}
	inFile.close();
	cin.ignore();
	cin.get();
}

//*********************************************************************************
//    	FUNCTION TO READ SPECIFIC ENTRY FROM STUDENT.DAT (STUDENT MARKING PROGRAM)
//*********************************************************************************

void display_sp(int n)
{
	student st;
	ifstream inFile;
	inFile.open("D:\\shubham\\student.dat",ios::binary);
	if(!inFile)
	{
		cout<<"File could not be open !! Press any Key...";
		cin.ignore();
		cin.get();
		return;
	}
	bool flag=false;
	while(inFile.read(reinterpret_cast<char *> (&st), sizeof(student)))
	{
		if(st.retrollno()==n)
		{
	  		 st.showdata();
			 flag=true;
		}
	}
	inFile.close();
	if(flag==false)
		cout<<"\n\nrecord not exist";
	cin.ignore();
	cin.get();
}

//************************************************************************************
//    	FUNCTION TO MODIFY A PARTICULAR ENTRY IN STUDENT.DAT (STUDENT MARKING PROGRAM)
//************************************************************************************

void modify_student(int n)
{
	bool found=false;
	student st;
	fstream File;
	File.open("D:\\shubham\\student.dat",ios::binary|ios::in|ios::out);
	if(!File)
	{
		cout<<"File could not be open !! Press any Key...";
		cin.ignore();
		cin.get();
		return;
	}
    	while(!File.eof() && found==false)
	{

		File.read(reinterpret_cast<char *> (&st), sizeof(student));
		if(st.retrollno()==n)
		{
			st.showdata();
			cout<<"\n\nPlease Enter The New Details of student"<<endl;
			read_det();
		    	int pos=(-1)*static_cast<int>(sizeof(st));
		    	File.seekp(pos,ios::cur);
		    	File.write(reinterpret_cast<char *> (&st), sizeof(student));
		    	cout<<"\n\n\t Record Updated";
		    	found=true;
		}
	}
	File.close();
	if(found==false)
		cout<<"\n\n Record Not Found ";
	cin.ignore();
	cin.get();
}

//***********************************************************************************************************
//    FUNCTION TO DELETE A SPECIFIC ENTRY FROM STUDENT.DAT BY PASSING A ROLL NUMBER (STUDENT MARKING PROGRAM)
//************************************************************************************************************

void delete_student(int n)
{
	student st;
	ifstream inFile;
	inFile.open("D:\\shubham\\student.dat",ios::binary);
	if(!inFile)
	{
		cout<<"File could not be open !! Press any Key...";
		cin.ignore();
		cin.get();
		return;
	}
	ofstream outFile;
	outFile.open("D:\\shubham\\Temp.dat",ios::out);
	inFile.seekg(0,ios::beg);
	while(inFile.read(reinterpret_cast<char *> (&st), sizeof(student)))
	{
		if(st.retrollno()!=n)
		{
			outFile.write(reinterpret_cast<char *> (&st), sizeof(student));
		}
	}
	outFile.close();
	inFile.close();
	remove("D:\\shubham\\student.dat");
	rename("D:\\shubham\\Temp.dat","D:\\shubham\\student.dat");
	cout<<"\n\n\tRecord Deleted ..";
	cin.ignore();
	cin.get();
}

//**************************************************************************
//    	FUNCTION TO DISPLAY MARKS OF ALL STUDENTS (STUDENT MARKING PROGRAM)
//**************************************************************************

void class_result()
{
	student st;
	ifstream inFile;
	inFile.open("D:\\shubham\\student.dat",ios::binary);
	if(!inFile)
	{
		cout<<"File could not be open !! Press any Key...";
		cin.ignore();
		cin.get();
		return;
	}
	cout<<"\n\n\t\tALL STUDENTS RESULT \n\n";
	cout<<"==========================================================\n";
	cout<<"R.No       Name        P   C   M   E   CS   %age   Grade"<<endl;
	cout<<"==========================================================\n";
	while(inFile.read(reinterpret_cast<char *> (&st), sizeof(student)))
	{
		st.show_tabular();
	}
	cin.ignore();
	cin.get();
	inFile.close();
}

//****************************************************************
//    	FUNCTION TO DISPLAY ENTRY MENU OF STUDENT MARKING PROGRAM
//****************************************************************

void result()
{
	char ch;
	int rno;
	system("cls");
	cout<<"\n\n\n\tRESULT MENU";
	cout<<"\n\n\n\t1. Class Result";
	cout<<"\n\n\t2. Student Report Card";
	cout<<"\n\n\t3. Back to Main Menu";
	cout<<"\n\n\n\tEnter Choice (1/2/3)? ";
	cin>>ch;
	system("cls");
	switch(ch)
	{
	case '1' :	display(); break;
	case '2' :	search(); break;
	case '3' :	break;
	default:	cout<<"\a";
	}
}

//***************************************************************
//    	INTRODUCTION FUNCTION
//****************************************************************

void intro()
{
	
system("cls");
	
	cout<<"\n\n\t\tLOADING APPLICATION";
		for(int i=0; i<500; i++)
	{
		for(int k=0; k<10000; k++);
	}


	dots(7);

	cout<<"\n\n\t\tPROCESS INITIATED";
		for(int i=0; i<500; i++)
	{
		for(int k=0; k<100000; k++);
	}

	for( int a=0; a<6; a++)
	{
			cout<<"\\";
		for(int i=0; i<500; i++)
	{
		for(int k=0; k<100000; k++);
	}
	}




cout<<"\n\n\t\tENTER SYSTEM PASSWORD";
		for(int i=0; i<500; i++)
	{
		for(int k=0; k<100000; k++);
	}
	cout<<"\t";
	for( int a=0; a<6; a++)
	{
			cout<<"*";
		for(int i=0; i<500; i++)
	{
		for(int k=0; k<100000; k++);
	}
	}



cout<<"\n\n\t\tLOGIN SUCCESSFULL";
		for(int i=0; i<500; i++)
	{
		for(int k=0; k<100000; k++);
	}

	dots(6);



cout<<"\n\n\t\tLINKING TO APPLICATION DATABASE SERVER";
		for(int i=0; i<500; i++)
	{
		for(int k=0; k<10000; k++);
	}


	dots(4);
	
	
	cout<<"\n\n\t\tWAITING FOR RESPONSE\\\\\\ ";
		for(int i=0; i<500; i++)
	{
		for(int k=0; k<10000; k++);
	}

	dots(4);

cout<<"\n\n\t\tSUCCESS....";
		for(int i=0; i<500; i++)
	{
		for(int k=0; k<100000; k++);
	}

	dots(6);
	
	cout<<"\n\n\t\tSTARTING APPLICATION ....";
		for(int i=0; i<500; i++)
	{
		for(int k=0; k<100000; k++);
	}

	dots(6);



		for( int a=0; a<=100; a++)
	{
		system("cls");
			cout<<"\n\n\n\n\n\n\t\t\t\tProgram loaded " <<a<<"%";
			
		for(int i=0; i<200; i++)
	{
		for(int k=0; k<10; k++);
	}
	}


}

//***************************************************************
//    	ENTRY / EDIT MENU FUNCTION
//****************************************************************

void entry_menu()
{
	char ch;
	int num;
	system("cls");
	cout<<"\n\n\n\tENTRY MENU";
	cout<<"\n\n\t1.CREATE STUDENT RECORD";
	cout<<"\n\n\t2.DISPLAY ALL STUDENTS RECORDS";
	cout<<"\n\n\t3.SEARCH STUDENT RECORD ";
	cout<<"\n\n\t4.MODIFY STUDENT RECORD";
	cout<<"\n\n\t5.DELETE STUDENT RECORD";
	cout<<"\n\n\t6.BACK TO MAIN MENU";
	cout<<"\n\n\tPlease Enter Your Choice (1-6) ";
	cin>>ch;
	system("cls");
	switch(ch)
	{
	case '1':	write_stu(); break;
	case '2':	display();   break;
	case '3':	search();    break;
	case '4':	mod_stu();   break;
	case '5':	cout<<"\n\n\tPlease Enter The roll number "; cin>>num;
			delete_students(num);break;
	case '6':	break;
	default:	cout<<"\a"; entry_menu();
	}
}

void del_stu()
{
	char ch;
	int num;
	system("cls");
	cout<<"\n\n\n\tSTUDENT RECORD DELETE MENU";
	cout<<"\n\n\t1.FORMATIVE ASSESSMENT 1";
	cout<<"\n\n\t2.FORMATIVE ASSESSMENT 2";
	cout<<"\n\n\t3.FORMATIVE ASSESSMENT 3";
	cout<<"\n\n\t4.FORMATIVE ASSESSMENT 4";
	//cout<<"\n\n\t5.SUMMATIVE ASSESSMENT 1";
//	cout<<"\n\n\t6.SUMMATIVE ASSESSMENT 2";
	cout<<"\n\n\t5.RETURN BACK TO STUDENT MENU";
	cout<<"\n\n\tPlease Enter Your Choice (1-5) ";
	cin>>ch;
	system("cls");
	switch(ch)
	{
		case '1':	cout<<"\n\n\tPlease Enter The roll number "; cin>>num;
						modify_students(num, 1); break;
		case '2':	cout<<"\n\n\tPlease Enter The roll number "; cin>>num; 
						modify_students(num, 2); break;
		case '3':	cout<<"\n\n\tPlease Enter The roll number "; cin>>num;
						modify_students(num, 3); break;
		case '4':	cout<<"\n\n\tPlease Enter The roll number "; cin>>num;
						modify_students(num, 4); break;
	//	case '5':	cout<<"\n\n\tPlease Enter The roll number "; cin>>num;
	//				break;
	//	case '6':	cout<<"\n\n\tPlease Enter The roll number "; cin>>num;
	//				break;
		case '5':	entry_menu(); break;
		default:	cout<<"\a"; mod_stu();
	}
}


void delete_students(int n)
{
	student st;
	ifstream inFile;
	inFile.open("D:\\shubham\\marks.dat",ios::binary);
	if(!inFile)
	{
		cout<<"File could not be open !! Press any Key...";
		cin.ignore();
		cin.get();
		return;
	}
	ofstream outFile;
	outFile.open("D:\\shubham\\Temp.dat",ios::out);
	inFile.seekg(0,ios::beg);
	while(inFile.read(reinterpret_cast<char *> (&st), sizeof(student)))
	{
		if(st.retrollno()!=n)
		{
			outFile.write(reinterpret_cast<char *> (&st), sizeof(student));
		}
	}
	outFile.close();
	inFile.close();
	remove("D:\\shubham\\marks.dat");
	rename("D:\\shubham\\Temp.dat","D:\\shubham\\marks.dat");
	cout<<"\n\n\tRecord Deleted ..";
	cin.ignore();
	cin.get();
}

void mod_stu()
{
	char ch;
	int num;
	system("cls");
	cout<<"\n\n\n\tSTUDENT RECORD MODIFY MENU";
	cout<<"\n\n\t1.FORMATIVE ASSESSMENT 1";
	cout<<"\n\n\t2.FORMATIVE ASSESSMENT 2";
	cout<<"\n\n\t3.FORMATIVE ASSESSMENT 3";
	cout<<"\n\n\t4.FORMATIVE ASSESSMENT 4";
	//cout<<"\n\n\t5.SUMMATIVE ASSESSMENT 1";
//	cout<<"\n\n\t6.SUMMATIVE ASSESSMENT 2";
	cout<<"\n\n\t5.RETURN BACK TO STUDENT MENU";
	cout<<"\n\n\tPlease Enter Your Choice (1-5) ";
	cin>>ch;
	system("cls");
	switch(ch)
	{
		case '1':	cout<<"\n\n\tPlease Enter The roll number "; cin>>num;
						modify_students(num, 1); break;
		case '2':	cout<<"\n\n\tPlease Enter The roll number "; cin>>num; 
						modify_students(num, 2); break;
		case '3':	cout<<"\n\n\tPlease Enter The roll number "; cin>>num;
						modify_students(num, 3); break;
		case '4':	cout<<"\n\n\tPlease Enter The roll number "; cin>>num;
						modify_students(num, 4); break;
	//	case '5':	cout<<"\n\n\tPlease Enter The roll number "; cin>>num;
	//				break;
	//	case '6':	cout<<"\n\n\tPlease Enter The roll number "; cin>>num;
	//				break;
		case '5':	entry_menu(); break;
		default:	cout<<"\a"; mod_stu();
	}
	
}




void write_marks_one(int a, int s)
{
	char name[30];
	int rll;
	stud_mem d;
	ifstream in;
	in.open("D:\\shubham\\student_details.dat", ios::binary);
	if(!in)
	{
		cout<<"File could not be open !! Press any Key...";
		cin.ignore();
		cin.get();
		return;
	}
	bool flag=false;
	while(in.read(reinterpret_cast<char *> (&d), sizeof(stud_mem)))
	{
		if(s==d.show_roll())
		{
			system("cls");
			d.show_name(name);
			rll=d.show_roll();
			cout<<"\n\nWrite marks for "<<name;
			char ask;
			student st;
			ofstream outFile;
			outFile.open("D:\\shubham\\marks.dat",ios::binary|ios::app);
			st.get_marks(a, name, rll);
			outFile.write(reinterpret_cast<char *> (&st), sizeof(student));
			outFile.close();
		    cout<<"\n\nStudent record Has Been Created ";
			cin.ignore();
			cin.get();
		}

	}
	in.close();
	if(flag==false)
		cout<<"\n\nrecord not exist";
	cin.ignore();
	cin.get();
	
}





void modify_students(int n, int a)
{
	long pos;
	int r;
	bool found=false;
	student st;
	fstream File;
	File.open("D:\\shubham\\marks.dat",ios::binary|ios::in|ios::out);
	if(!File)
	{
		cout<<"File could not be open !! Press any Key...";
		cin.ignore();
		cin.get();
		return;
	}
    	while(!File.eof() && found==false)
	{

		File.read(reinterpret_cast<char *> (&st), sizeof(student));
		if(st.retrollno()==n)
		{
			pos=File.tellg();
			File.read((char*) &st, sizeof(student));
			{
				if(r=st.retrollno())
				{
					write_marks_one(a,r);
				}
				File.seekg(pos);
				File.write((char*)&st, sizeof(student));
				found=true;
				break;
			}
		}
	}
	File.close();
	if(found==false)
		cout<<"\n\n Record Not Found ";
	cin.ignore();
	cin.get();
}

void search()
{
	char ch;
	int num;
	system("cls");
	cout<<"\n\n\n\tSTUDENT RECORD SEARCH MENU";
	cout<<"\n\n\t1.FORMATIVE ASSESSMENT 1";
	cout<<"\n\n\t2.FORMATIVE ASSESSMENT 2";
	cout<<"\n\n\t3.FORMATIVE ASSESSMENT 3";
	cout<<"\n\n\t4.FORMATIVE ASSESSMENT 4";
//	cout<<"\n\n\t5.SUMMATIVE ASSESSMENT 1";
//	cout<<"\n\n\t6.SUMMATIVE ASSESSMENT 2";
	cout<<"\n\n\t5.RETURN BACK TO STUDENT MENU";
	cout<<"\n\n\tPlease Enter Your Choice (1-5) ";
	cin>>ch;
	system("cls");
	switch(ch)
	{
	case '1':	cout<<"\n\n\tPlease Enter The roll number "; cin>>num;
				display_sps(num, 1); break;
	case '2':	cout<<"\n\n\tPlease Enter The roll number "; cin>>num; 
				display_sps(num, 2); break;
	case '3':	cout<<"\n\n\tPlease Enter The roll number "; cin>>num;
				display_sps(num, 3); break;
	case '4':	cout<<"\n\n\tPlease Enter The roll number "; cin>>num;
				display_sps(num, 4);;break;
//	case '5':	cout<<"\n\n\tPlease Enter The roll number "; cin>>num;
//				break;
//	case '6':	cout<<"\n\n\tPlease Enter The roll number "; cin>>num;
//				break;
	case '5':	entry_menu(); break;
	default:	cout<<"\a"; search();
	}
}



void write_stu()
{
	char ch;
	int num;
	system("cls");
	cout<<"\n\n\n\tMARKS ENTRY MENU";
	cout<<"\n\n\t1.FORMATIVE ASSESSMENT 1";
	cout<<"\n\n\t2.FORMATIVE ASSESSMENT 2";
	cout<<"\n\n\t3.FORMATIVE ASSESSMENT 3";
	cout<<"\n\n\t4.FORMATIVE ASSESSMENT 4";
//	cout<<"\n\n\t5.SUMMATIVE ASSESSMENT 1";
//	cout<<"\n\n\t6.SUMMATIVE ASSESSMENT 2";
	cout<<"\n\n\t5.RETURN BACK TO STUDENT MENU";
	cout<<"\n\n\tPlease Enter Your Choice (1-5) ";
	cin>>ch;
	system("cls");
	switch(ch)
	{
		case '1':	write_marks(1);
					break;
		case '2':	write_marks(2);
					break;
		case '3':	write_marks(3);
					break;
		case '4':	write_marks(4);
					break;
		//case '5':	
		//			break;
	//	case '6':	
	//				break;
		case '5':	entry_menu(); break;
		default:	cout<<"\a"; write_stu();
	}
}



void display()
{
	char ch;
	int c=0;
	system("cls");
	cout<<"\n\n\t---------------------------MARKS DISPLAY MENU---------------------------";
		cout<<"\n\n\t1.FORMATIVE ASSESSMENT 1";
		cout<<"\n\n\t2.FORMATIVE ASSESSMENT 2";
		cout<<"\n\n\t3.FORMATIVE ASSESSMENT 3";
		cout<<"\n\n\t4.FORMATIVE ASSESSMENT 4";
	//	cout<<"\n\n\t5.SUMMATIVE ASSESSMENT 1";
		//cout<<"\n\n\t6.SUMMATIVE ASSESSMENT 2";
		cout<<"\n\n\t5.RETURN BACK TO STUDENT MENU";
		cout<<"\n\n\tPlease Enter Your Choice (1-5) ";
		cin>>ch;
		system("cls");
		switch(ch)
		{
			case '1': display_all_marks(1);
					break;
			case '2': display_all_marks(2);
					break;
			case '3': display_all_marks(3);
					break;
			case '4': display_all_marks(4);
					break;
			//case '5': 
				//	break;
			//case '6':	
			//		break;
			case '5':	entry_menu(); break;
			default:	cout<<"\a"; display();
		}
}

void write_marks(int a)
{
	char name[30];
	int rll;
	stud_mem d;
	ifstream in;
	in.open("D:\\shubham\\student_details.dat", ios::binary);
	if(!in)
	{
		cout<<"File could not be open !! Press any Key...";
		cin.ignore();
		cin.get();
		return;
	}
	bool flag=false;
	while(in.read(reinterpret_cast<char *> (&d), sizeof(stud_mem)))
	{
	
	system("cls");
	d.show_name(name);
	rll=d.show_roll();
	cout<<"\n\nWrite marks for "<<name;
	char ask;
	student st;
	ofstream outFile;
	outFile.open("D:\\shubham\\marks.dat",ios::binary|ios::app);
	st.get_marks(a, name, rll);
	outFile.write(reinterpret_cast<char *> (&st), sizeof(student));
	outFile.close();
    cout<<"\n\nStudent record Has Been Created ";
	cin.ignore();
	cin.get();
	}
	in.close();
	if(flag==false)
		cout<<"\n\nrecord not exist";
	cin.ignore();
	cin.get();
	
}

void display_all_marks(int a) 
{
	
	student st;
	ifstream inFile;
	inFile.open("D:\\shubham\\marks.dat",ios::binary);
	if(!inFile)
	{
		cout<<"File could not be open !! Press any Key...";
		cin.ignore();
		cin.get();
		return;
	}
	bool flag=false;
	while(inFile.read(reinterpret_cast<char *> (&st), sizeof(student)))
	{
	  		 st.show_marks(a);
			 flag=true;
	}
	inFile.close();
	if(flag==false)
		cout<<"\n\nrecord not exist";
	cin.ignore();
	cin.get();
}


void display_sps(int n, int a)
{
	
	student st;
	ifstream inFile;
	inFile.open("D:\\shubham\\marks.dat",ios::binary);
	if(!inFile)
	{
		cout<<"File could not be open !! Press any Key...";
		cin.ignore();
		cin.get();
		return;
	}
	bool flag=false;
	while(inFile.read(reinterpret_cast<char *> (&st), sizeof(student)))
	{
		if(st.retrollno()==n)
		{
	  		 st.show_marks(a);
			 flag=true;
		}
	}
	inFile.close();
	if(flag==false)
		cout<<"\n\nrecord not exist";
	cin.ignore();
	cin.get();
}








//***************************************************************
//    			END OF PROJECT *************** THANK YOU
//***************************************************************
