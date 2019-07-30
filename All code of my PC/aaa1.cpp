//Students data project with file stream
#include<bits/stdc++.h>
#include<conio.h>
#include<process.h>
#include<stdio.h>

#include <iostream>
#include <fstream>
using namespace std;
class Student
{
     public:
 int rollno;
 char name[20];
 string Class;
 string Semester;
 string dept;
 int marks[20000][20];
 int credit[20000][20];
 string subject[20000][20];


 void getdata();
 void display();
 void subject_info(int,int);
 int subject_number;
// int getmarks() {return marks*;}
 int getno() {return rollno;}
 string getClass() {return Class;}
  string getSemester() {return Semester;}
 string grade(double );
  double GPA(double );
}s;
void Student::subject_info(int x, int y)
{
   int i=0;
 while(x--)
 {
 cout<<"Enter Subject Name "<<i+1<<": ";
cin>>s.subject[y][i];
 cout<<"Enter Marks    : ";
 cin>>s.marks[y][i];
  cout<<"Enter credits  : ";
 cin>>s.credit[y][i];
 i++;
 }

}
void Student::getdata()
{
 cout<<"Enter Roll No. : IT-";
 cin>>rollno;
 cout<<"Enter Name     : ";
 getchar();
 cin.getline(name,20);
// gets(name);
cout<<"Enter Dept    : ";
cin>> dept;

 cout<<"Enter Year    : ";
 cin>>Class;
  cout<<"Enter Semester    : ";
   cin>>Semester;
cout<<"number of subject    : ";
 cin>>subject_number;
 subject_info(subject_number,rollno);
}
string Student:: grade(double y)
{
	string grade="";
	if(y>=4.0) grade="A+";
 else if (y>=3.75) grade="A" ;
 else if (y>=3.5) grade="A-" ;
 else if (y>=3.25) grade="B+" ;
  else if (y>=3.0) grade="B" ;
   else if (y>=2.75) grade="C+" ;
    else if (y>=2.50 ) grade="C" ;
     else if (y>=2.25) grade="D" ;
      else if (y>=2.0) grade="E" ;
      else  grade="F";
      return grade;
}
double Student:: GPA(double y)
{
	double gpa=0.0;
	if(y>=80) gpa=4.0;
 else if (y>=75) gpa=3.75 ;
 else if (y>=70) gpa=3.5;
 else if (y>=65) gpa=3.25;
  else if (y>=60) gpa=3.0 ;
   else if (y>=55) gpa=2.75 ;
    else if (y>=50) gpa=2.50 ;
     else if (y>=45) gpa=2.25 ;
      else if (y>=40) gpa=2.0 ;
      else  gpa=0.0;
      return gpa;
}

void Student::display()
{
 cout<<"=================================================\n";
 cout<<"Name  : "<<s.name<<"\t ID: IT-"<<s.rollno<<"\tDept : "<<s.dept<<"\n";
 cout<<"Year    : "<<s.Class<<"\tSemseter : "<<s.Semester <<"\t Number course enrolled: "<<s.subject_number<<"\n";
  //ifstream fin("stud.dat",ios::in|ios::binary);
 //fin.read((char*)&s,sizeof(s));
// if(s.getno()==rollno)
  {
 double sm=0.0,sm1=0.0;
 for(int i=0;i<subject_number;i++)
 cout<<"course name "<<i+1<<" : "<<s.subject[rollno][i]<<"\tcredits : "<<s.credit[rollno][i]<<"\tMarks : "<<s.marks[rollno][i]<<"\tGrade : "<<s.grade(s.GPA(marks[rollno][i]))<<"\n",sm+=s.GPA(marks[rollno][i])*s.credit[rollno][i],sm1+=s.credit[rollno][i];

 cout<<"GPA: ";
 double y =sm/(double)sm1;
 cout<<(double)y<<"\tGrade : "<<s.grade(y)<<endl;

// cout<<"=================================================\n";
 }
 //fin.close();
}

//Prototyping of functions for menu
void menu();
void search();
void add();
void displayall();
void Classwise();
void Modify();
void Delete();
void options();
void Trash();
void SizeofFile();
int main()
{
 int n,rno,i;
 fstream fio("stud.dat",ios::in|ios::out|ios::binary);
 //clrscr();
 menu();
// fio.close();
 getch();
 return 0;
}

void options()
{
 cout<<"\n\t...MENU OF PROGRAM...\n";
 cout<<"\t0. EXIT....\n";
 cout<<"\t1. Add the record...\n";
 cout<<"\t2. Search the record...\n";
 cout<<"\t3. Display all records...\n";
 cout<<"\t4. Class wise records...\n";
 cout<<"\t5. Modify the Record...\n";
 cout<<"\t6. Delete the Record...\n";
 cout<<"\t7. View Deleted Records...\n";
 cout<<"\t8. View the Size of File...\n";
 cout<<"\nEnter Your Choice  : ";
}

void menu()
{
 int ch;
 options();
 cin>>ch;
 while(ch)
 {
   switch(ch)
   {
  case 1: add(); break;
  case 2: search(); break;
  case 3: displayall(); break;
  case 4: Classwise(); break;
  case 5: Modify(); break;
  case 6: Delete(); break;
  case 7: Trash(); break;
  case 8: SizeofFile(); break;
  default: cout<<"Wrong Input please enter the correct value....";
   }
   system("pause");
   //clrscr();
   options();
   cin>>ch;
 }
}

void search()
{
 ifstream fin("stud.dat",ios::in|ios::binary);
 int rno,i=0;
 char found='n';
 cout<<"\nEnter Roll No. to be searched : IT-";
 cin>>rno;

 while(fin.read((char*)&s,sizeof(s)))
 {
  if(s.getno()==rno)
  {
   s.display();
   found='y';
  }
  i++;
 }
 if(found=='n') cout<<"\nThe Roll No. "<<rno<<" is not in the file...\n";
 fin.close();
}

//For Displaying the all data of the students.
void displayall()
{
 ifstream fin("stud.dat",ios::in|ios::binary);
 while(fin.read((char*)&s,sizeof(s)))
 {
  s.display();
 }
 fin.close();
// int x=gcount();
// cout<<"\n"<<x<<" Bytes read from file...\n";
}

//For adding the data into the file.
void add()
{
 char ch='y';
 ofstream fout("stud.dat",ios::out|ios::app|ios::binary);
 while(ch=='y'||ch=='Y')
 {
  s.getdata();
  fout.write((char*)&s,sizeof(s));
  cout<<"\nDo you want to add more : ";
  cin>>ch;
 }
 cout<<"\nData Appended and Transferred to file...\n";
 fout.close();
}

void Classwise()
{
 ifstream fin("stud.dat",ios::in|ios::binary);
 string std,sem;
 char found='n';
 cout<<"\nEnter the year to be searched : ";
 cin>>std;
 cout<<"\nEnter the Semester to be searched : ";
 cin>>sem;
 while(fin.read((char*)&s,sizeof(s)))
 {
  if(s.getClass()==std and s.getSemester()==sem)
  {
   s.display();
   found='y';
  }
 }
 if(found=='n') cout<<"\nThe Year "<<std<<" and the semester "<<sem<<"is not in the file...\n";
 fin.close();
}

void Modify()
{
 fstream fio("stud.dat",ios::in|ios::out|ios::binary);
 int rno;
 char found='n';
 fio.seekg(0);
 cout<<"\nEnter the Roll No. whose record is to be modified: IT-";
 cin>>rno;

 while(fio)
// while(fio.read((char*)&s,sizeof(s)))
 {
// fio.read((char*)&s,sizeof(s));
   int loc=fio.tellg();
   fio.read((char*)&s,sizeof(s));
//   fio.read((char*)&s,sizeof(s));
   if(s.getno()==rno)
   {
  s.getdata();
  found='y';
  fio.seekg(loc);
  fio.write((char*)&s,sizeof(s));
  cout<<"\nYour record of Roll No. "<<rno
      <<" has been updated....";
   }
 }
 if(found=='n') cout<<"\nThe Year "<<rno<<" is not in the file...\n";
 fio.close();
}

void Delete()
{
 int rno;
 char found='n';
 fstream fio("stud.dat",ios::in|ios::out|ios::binary|ios::app);
 ofstream fout("temp.dat",ios::out|ios::binary|ios::app);
 ofstream out("trash.dat",ios::out|ios::binary|ios::app);

 cout<<"\nEnter the Roll No. whose record is to be deleted: ";
 cin>>rno;

 while(fio.read((char*)&s,sizeof(s)))
 {
  if(s.getno()==rno)
  {
   out.write((char*)&s,sizeof(s));
   found='y';
  }
  else
  {
   fout.write((char*)&s,sizeof(s));
  }
 }
 if(found=='n') cout<<"\nThe Roll No."<<rno<<" is not in the file...\n";
 fio.close();
 fout.close();
 remove("stud.dat");
 rename("temp.dat","stud.dat");
}

void Trash()
{
 ifstream fin("trash.dat",ios::in|ios::binary);
// ofstream fout("stud.dat",ios::out|ios::binary|ios::app);
 while(fin.read((char*)&s,sizeof(s)))
 {
  s.display();
//  fout.write((char*)&s,sizeof(s));
 }
 fin.close();
// fout.close();
//Commented lines are for restoring the deleted files to stud.dat file.
}
void SizeofFile()
{
 fstream fio("stud.dat",ios::in|ios::out|ios::binary);
 int size;
 int begin,last;
 begin=fio.tellg();
 while(fio.read((char*)&s,sizeof(s)));
 last=fio.tellg();
 fio.close();
 cout<<"\nThe Size of Stud.dat file is : "<<(last-begin)<<" bytes...\n";
}

