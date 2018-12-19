#include <iostream>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <iterator> //for std::istream_iterator
#include <vector>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

typedef struct student
{
 string ID;//for student ID
 string fName;//for student first name
 string lName;//for student last name
 string level;//for level of student
 string hall;//for hall of residence of student
};

typedef struct course
{
 string cours_code; //course code
 string cours_name; //course name
 string credit; //credit for course
};

typedef struct staff
{
 string id;// for staff id
 string fName;//for student first name
 string lName;//for student last name
 string qualification;//for qualifications
 string exp;//for class experience
 string subj;//subject been taught
 string lec; //lecture per week
 string addrss; //address
 string cel_no; //phone number
};

typedef struct studentrecord
{
 string ID;//for student ID
  string fName;//for student first name
 string lName;//for student last name
 string level;//for level
 float acawrt, maths, prog, num, calc;
 char acagrd, mathgrd, progrd, numgrd, calcgrd;
 string acarem, mathrem, progrem, numrem, calcrem;
};

void newStudentRegistration();
void deleteStudentInform();
void updateStudentInform();

void deleteStaffInform();
void updateStaffInform();
void newStaffRegistration();

void newCourseRegistration();
void updateCourseInform();
void deleteCourseInform();

void addstudentrecord();
void Updatestudentrecord();
void deletestudentrecord();
void studentsrecordlist();
void display();



int main()
{
    int choice;
    for(;;)
    {
        system("cls");

            cout <<endl<<endl;
        cout << "\t\t\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ ";
        cout << "\n\n\t\t\t\tSCHOOL MANAGEMENT PROGRAM\n\n";
        cout << "\t\t\tBy ASAMOAH ISRAEL KENNETH BAMFO 10665404\n";
        cout << "\t\t\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ ";
        cout << "\n\n\t\t\t\t\tMAIN SCREEN\n\n";
            cout << "\t\t\t\t1. Student Information"<< endl;
            cout << "\t\t\t\t2. Staff Information"<< endl;
            cout << "\t\t\t\t3. Course Information"<< endl;
            cout << "\t\t\t\t4. Student Record"<< endl;
            cout << "\t\t\t\t5. Exit"<< endl;
            cout << "\t\t\t\tEnter your choice: ";
            cin>>choice;

            system("cls");

            switch(choice)
            {

                case 1:
                    system("cls");

                            int studentC;
                                       cout <<endl<<endl;
                            cout << "\t\t\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ ";
                            cout << "\n\n\t\t\tSTUDENT INFORMATION AND BIO DATA SECTION\n\n";
                            cout << "\t\t\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ " << endl << endl;
                            cout << "\t\t\t\t1. Add new entry"<< endl;
                            cout << "\t\t\t\t2. Update student information"<< endl;
                            cout << "\t\t\t\t3. Delete student information"<< endl;
                            cout << "\t\t\t\t4. Jump to menu"<< endl;
                            cout << "\t\t\t\tEnter your choice: ";
                            cin>>studentC;

                            system("cls");

                            switch(studentC)
                            {
                                case 1:
                                    newStudentRegistration();
                                    break;
                                case 2:
                                    updateStudentInform();
                                    break;
                                case 3:
                                    deleteStudentInform();
                                    break;

                                case 4:
                                {
                                    break;
                                }
                                }
                            continue;

                case 2:

                    system("cls");

                            int staffC;

                            cout <<endl<<endl;
                            cout << "\t\t\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ ";
                            cout << "\n\n\t\t\tSTAFF INFORMATION AND BIO DATA SECTION\n\n";
                            cout << "\t\t\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ " << endl << endl;
                            cout << "\t\t\t\t1. Add new entry"<< endl;
                            cout << "\t\t\t\t2. Update staff information"<< endl;
                            cout << "\t\t\t\t3. Delete staff information"<< endl;
                            cout << "\t\t\t\t4. Jump to menu"<< endl;
                            cout << "\t\t\t\tEnter your choice: ";
                            cin>>staffC;

                            system("cls");

                            switch(staffC)
                            {
                            case 1:
                                    newStaffRegistration();
                                    break;
                            case 2:
                                    updateStaffInform();
                                    break;
                            case 3:
                                    deleteStaffInform();
                                    break;

                            case 4:
                                {
                                    break;
                                }
                                }
                            continue;

                case 3:
                    system("cls");

                            int courseC;
                            cout <<endl<<endl;
                            cout << "\t\t\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ ";
                            cout << "\n\n\t\t\t\tCOURSE ENTRY SECTION\n\n";
                            cout << "\t\t\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ " << endl << endl;
                            cout << "\t\t\t\t1. Add course "<< endl;
                            cout << "\t\t\t\t2. Update course"<< endl;
                            cout << "\t\t\t\t3. Delete course"<< endl;
                            cout << "\t\t\t\t4. Jump to menu"<< endl;
                            cout << "\t\t\t\tEnter your choice: ";
                            cin>>courseC;

                            system("cls");

                            switch(courseC)
                            {
                            case 1:
                                    newCourseRegistration();
                                    break;
                            case 2:
                                    updateCourseInform();
                                    break;
                            case 3:
                                    deleteCourseInform();
                                    break;

                            case 4:
                                {
                                    break;
                                }
                                }
                            continue;

                     case 4:
                    system("cls");

                            int resultC;
                            cout <<endl<<endl;
                            cout << "\t\t\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ ";
                            cout << "\n\n\t\t\t\tSTUDENT RECORD ENTRY SECTION\n\n";
                            cout << "\t\t\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ " << endl << endl;
                            cout << "\t\t\t1. Add Record "<< endl;
                            cout << "\t\t\t2. Update Record"<< endl;
                            cout << "\t\t\t3. Delete Record"<< endl;
                            cout << "\t\t\t4. Student Record List"<< endl;
                            cout << "\t\t\t5. Student Record Display"<< endl;
                            cout << "\t\t\t6. Jump to menu"<< endl;
                            cout << "\t\t\tEnter your choice: ";

                            cin>>resultC;

                            system("cls");

                            switch(resultC)
                            {
                            case 1:
                                    addstudentrecord();
                                    break;
                            case 2:
                                    Updatestudentrecord();
                                    break;
                            case 3:
                                    deletestudentrecord();
                                    break;
                            case 4:
                                    studentsrecordlist();
                                    break;
                            case 5:
                                    display();
                                    break;
                            case 6:
                                {
                                    break;
                                }
                                }
                            continue;

                case 5:exit(0);
                        break;
                default:cout<<"wrong entry, please re-try";
            }
    }
    return 0;
}

void newCourseRegistration()
{
    fstream outfile ("courseInfo.txt",ios::app);
    course c1;
    cout<<"Course code: ";
    cin>>c1.cours_code;
    cout<<"Course name: ";
    cin>>c1.cours_name;
    cout<<"Course credit: ";
    cin>>c1.credit;
    outfile<<c1.cours_code<<" "<<c1.cours_name<<" "<<c1.credit<<endl;
    cout<<"\n**Successfully Added**\n";
    outfile.close();
    return;
}

void updateCourseInform()
{
    string cours_code;
    cout << "\n Enter course code:\n";
    cin >> cours_code;

    course c1;
    fstream infile ("courseInfo.txt");
    fstream tempfile ("tempInfo.txt",ios::app);
    string line;

    while(std::getline(infile, line))
    {
        istringstream ss(line);
        std::istream_iterator<std::string> begin(ss), end;
        //putting all the tokens in the vector
        std::vector<std::string> arrayTokens(begin, end);

        vector<string>::iterator it;
        int i=0,flag=0;
        for(it = arrayTokens.begin(); it != arrayTokens.end(); it++)
        {
            if(i==0 && cours_code==*it)
            {
                flag=1;
            }
            else
                break;
            i++;
        }
        if(flag==1)
        {
            cout<<"Course name: ";
            cin>>c1.cours_name;
            cout<<"Course credit: ";
            cin>>c1.credit;
            tempfile<<cours_code<<" "<<c1.cours_name<<" "<<c1.credit<<endl;
            cout<<"\n**Successfully updated**\n";
        }
        else
        {
            tempfile<<line<<endl;
        }


    }
    infile.close();
    tempfile.close();
    remove("courseInfo.txt");
    rename("tempInfo.txt","courseInfo.txt");

}

void deleteCourseInform()
{
    string cours_code;
    cout<<"\n Enter course code to delete:\n";
    cin>>cours_code;

    student s1;
    fstream infile ("courseInfo.txt");
    fstream tempfile ("tempInfo.txt",ios::app);
    string line;

    while(std::getline(infile, line))
    {
        istringstream ss(line);
        std::istream_iterator<std::string> begin(ss), end;
        //putting all the tokens in the vector
        std::vector<std::string> arrayTokens(begin, end);

        vector<string>::iterator it;
        int i=0,flag=0;
        for(it = arrayTokens.begin(); it != arrayTokens.end(); it++)
        {
            if(i==0 && cours_code==*it)
            {
                flag=1;
            }
            else
                break;
            i++;
        }
        if(flag!=1)
        {
            tempfile<<line<<endl;
        }
        else
        {
            cout<<"\n **Deleted successfully**\n";
        }


    }
    infile.close();
    tempfile.close();
    remove("courseInfo.txt");
    rename("tempInfo.txt","courseInfo.txt");



}

void newStudentRegistration()
{
    fstream outfile ("studentInfo.txt",ios::app);
    student s1;
    cout<<"Student ID: ";
    cin>>s1.ID;
    cout<<"First Name: ";
    cin>>s1.fName;
    cout<<"Last Name: ";
    cin>>s1.lName;
    cout<<"Level: ";
    cin>>s1.level;
    cout<<"Hall of residence: ";
    cin>>s1.hall;
    outfile<<s1.ID<<" "<<s1.fName<<" "<<s1.lName<<" "<<s1.level<<" "<<s1.hall<<endl;
    cout<<"\n**Successfully Added**\n";
    outfile.close();
    return;
}

void updateStudentInform()
{
    string ID;
    cout << "\n Enter student ID:\n";
    cin >> ID;

    student s1;
    fstream infile ("studentInfo.txt");
    fstream tempfile ("tempInfo.txt",ios::app);
    string line;

    while(std::getline(infile, line))
    {
        istringstream ss(line);
        std::istream_iterator<std::string> begin(ss), end;
        //putting all the tokens in the vector
        std::vector<std::string> arrayTokens(begin, end);

        vector<string>::iterator it;
        int i=0,flag=0;
        for(it = arrayTokens.begin(); it != arrayTokens.end(); it++)
        {
            if(i==0 && ID==*it)
            {
                flag=1;
            }
            else
                break;
            i++;
        }
        if(flag==1)
        {
            cout<<"First Name: ";
            cin>>s1.fName;
            cout<<"Last Name: ";
            cin>>s1.lName;
            cout<<"Level: ";
            cin>>s1.level;
            cout<<"Hall of residence: ";
            cin>>s1.hall;
            tempfile<<ID<<" "<<s1.fName<<" "<<s1.lName<<" "<<s1.level<<" "<<s1.hall<<endl;
            cout<<"\n**Successfully updated**\n";
        }
        else
        {
            tempfile<<line<<endl;
        }


    }
    infile.close();
    tempfile.close();
    remove("studentInfo.txt");
    rename("tempInfo.txt","studentInfo.txt");

}

void deleteStudentInform()
{
    string ID;
    cout<<"\n Enter student registration Id:\n";
    cin>>ID;

    student s1;
    fstream infile ("studentInfo.txt");
    fstream tempfile ("tempInfo.txt",ios::app);
    string line;

    while(std::getline(infile, line))
    {
        istringstream ss(line);
        std::istream_iterator<std::string> begin(ss), end;
        //putting all the tokens in the vector
        std::vector<std::string> arrayTokens(begin, end);

        vector<string>::iterator it;
        int i=0,flag=0;
        for(it = arrayTokens.begin(); it != arrayTokens.end(); it++)
        {
            if(i==0 && ID==*it)
            {
                flag=1;
            }
            else
                break;
            i++;
        }
        if(flag!=1)
        {
            tempfile<<line<<endl;
        }
        else
        {
            cout<<"\n **Deleted successfully**\n";
        }


    }
    infile.close();
    tempfile.close();
    remove("studentInfo.txt");
    rename("tempInfo.txt","studentInfo.txt");



}


void newStaffRegistration()
{
    fstream outfile ("staffInfo.txt",ios::app);
    staff s1;
    cout<<"Staff ID: ";
    cin>>s1.id;
    cout<<"First Name: ";
    cin>>s1.fName;
    cout<<"Last Name: ";
    cin>>s1.lName;
    cout<<"Qualification: ";
    cin>>s1.qualification;
    cout<<"Experience: ";
    cin>>s1.exp;
    cout<<"Subject taught: ";
    cin>>s1.subj;
    cout<<"Lecture per week: ";
    cin>>s1.lec;
    cout<<"Address: ";
    cin>>s1.addrss;
    cout<<"Phone number: ";
    cin>>s1.cel_no;
    outfile<<s1.id<<" "<<s1.fName<<" "<<s1.lName<<" "<<s1.qualification<<" "<<s1.exp<<" "<<s1.subj <<" "<<s1.lec <<" "<< s1.addrss <<" " << s1.cel_no <<" "<<endl;
    cout<<"\n**Successfully Added**\n";
    outfile.close();
    return;
}

void updateStaffInform()
{
    string sId;
    cout<<"\n Enter staff Id:\n";
    cin>>sId;

    staff s1;
    fstream infile ("staffInfo.txt");
    fstream tempfile ("tempInfo.txt",ios::app);
    string line;

    while(std::getline(infile, line))
    {

        istringstream ss(line);
        std::istream_iterator<std::string> begin(ss), end;
        //putting all the tokens in the vector
        std::vector<std::string> arrayTokens(begin, end);

        vector<string>::iterator it;
        int i=0,flag=0;
        for(it = arrayTokens.begin(); it != arrayTokens.end(); it++)
        {
            if(i==0 && sId==*it)
            {
                flag=1;
            }
            else
                break;
            i++;
        }
        if(flag==1)
        {
            cout<<"First Name: ";
    cin>>s1.fName;
    cout<<"Last Name: ";
    cin>>s1.lName;
    cout<<"Qualification: ";
    cin>>s1.qualification;
    cout<<"Experience: ";
    cin>>s1.exp;
    cout<<"Subject taught: ";
    cin>>s1.subj;
    cout<<"Lecture per week: ";
    cin>>s1.lec;
    cout<<"Address: ";
    cin>>s1.addrss;
    cout<<"Phone number: ";
    cin>>s1.cel_no;
            tempfile<<sId<<" "<<s1.fName<<" "<<s1.lName<<" "<<s1.qualification<<" "<<s1.exp<<" "<<s1.subj <<" "<<s1.lec <<" "<< s1.addrss <<" " << s1.cel_no <<" "<<endl;
            cout<<"\n**Successfully updated**\n";

        }
        else
        {

            tempfile<<line<<endl;
        }
    }
    infile.close();
    tempfile.close();
    remove("staffInfo.txt");
    rename("tempInfo.txt","staffInfo.txt");

}
void deleteStaffInform()
{
        string sId;
    cout<<"\n Enter staff Id:\n";
    cin>>sId;

    staff s1;
    fstream infile ("staffInfo.txt");
    fstream tempfile ("tempInfo.txt",ios::app);
    string line;

    while(std::getline(infile, line))
    {

        istringstream ss(line);
        std::istream_iterator<std::string> begin(ss), end;
        //putting all the tokens in the vector
        std::vector<std::string> arrayTokens(begin, end);

        vector<string>::iterator it;
        int i=0,flag=0;
        for(it = arrayTokens.begin(); it != arrayTokens.end(); it++)
        {
            if(i==0 && sId==*it)
            {
                flag=1;
            }
            else
                break;
            i++;
        }
        if(flag!=1)
        {
            tempfile<<line<<endl;
        }
        else
        {
            cout<<"\n\n ** deleted successfully**\n";

        }
    }
    infile.close();
    tempfile.close();
    remove("staffInfo.txt");
    rename("tempInfo.txt","staffInfo.txt");

}

void addstudentrecord()
{
    char inchoice;
    int i;
    studentrecord g;
    ofstream outputfile;
    ofstream outputfile2;

    cout<< "\n\n\t\t\tRECORD STUDENT GRADE"<<endl;
    cout<<"Student ID: ";cin>>g.ID;
    cout<<"First name: ";cin>>g.fName;
    cout<<"Last name: ";cin>>g.lName;
    cout<<"Level: ";cin >>g.level;
    cout<<"\n\n\n\t\t\tenter marks for "<<g.fName<<" "<<g.lName<<" " <<g.level << " ("<<g.ID<<")"<<endl;

    cout<<"\n\n\tenter Academic Writing mark: ";cin>>g.acawrt;
    if (g.acawrt >= 80) g.acagrd='A'; else if (g.acawrt>= 70) g.acagrd='B'; else if (g.acawrt>= 60) g.acagrd='C'; else if (g.acawrt>= 50) g.acagrd='D'; else if (g.acawrt>= 40) g.acagrd='E'; else g.acagrd='F';
    if (g.acawrt >= 80) g.acarem="EXCELLENT"; else if (g.acawrt>= 70) g.acarem="V.GOOD"; else if (g.acawrt>= 60) g.acarem="GOOD"; else if (g.acawrt>= 50) g.acarem="CREDIT"; else if (g.acawrt>= 40) g.acarem="PASS"; else g.acarem="FAIL";

    cout<<"\tenter Math mark: ";cin>>g.maths;
    if (g.maths >= 80) g.mathgrd='A'; else if (g.maths>= 70) g.mathgrd='B'; else if (g.maths>= 60) g.mathgrd='C'; else if (g.maths>= 50) g.mathgrd='D'; else if (g.maths>= 40) g.mathgrd='E'; else g.mathgrd='F';
    if (g.maths >= 80) g.mathrem="EXCELLENT"; else if (g.maths>= 70) g.mathrem="V.GOOD"; else if (g.maths>= 60) g.mathrem="GOOD"; else if (g.maths>= 50) g.mathrem="CREDIT"; else if (g.maths>= 40) g.mathrem="PASS"; else g.mathrem="FAIL";

    cout<<"\tenter Programming1 mark: ";cin>>g.prog;
    if (g.prog >= 80) g.progrd='A'; else if (g.prog>= 70) g.progrd='B'; else if (g.prog>= 60) g.progrd='C'; else if (g.prog>= 50) g.progrd='D'; else if (g.prog>= 40) g.progrd='E'; else g.progrd='F';
    if (g.prog >= 80) g.progrem="EXCELLENT"; else if (g.prog>= 70) g.progrem="V.GOOD"; else if (g.prog>= 60) g.progrem="GOOD"; else if (g.prog>= 50) g.progrem="CREDIT"; else if (g.prog>= 40) g.progrem="PASS"; else g.progrem="FAIL";

    cout<<"\tNumerical method mark: "; cin>>g.num;
    if (g.num >= 80) g.numgrd='A'; else if (g.num>= 70) g.numgrd='B'; else if (g.num>= 60) g.numgrd='C'; else if (g.num>= 50) g.numgrd='D'; else if (g.num>= 40) g.numgrd='E'; else g.numgrd='F';
    if (g.num >= 80) g.numrem="EXCELLENT"; else if (g.num>= 70) g.numrem="V.GOOD"; else if (g.num>= 60) g.numrem="GOOD"; else if (g.num>= 50) g.numrem="CREDIT"; else if (g.num>= 40) g.numrem="PASS"; else g.numrem="FAIL";

    cout<<"\tCalculus mark: "; cin>>g.calc;
    if (g.calc >= 80) g.calcgrd='A'; else if (g.calc>= 70) g.calcgrd='B'; else if (g.calc>= 60) g.calcgrd='C'; else if (g.calc>= 50) g.calcgrd='D'; else if (g.calc>= 40) g.calcgrd='E'; else g.calcgrd='F';
    if (g.calc >= 80) g.calcrem="EXCELLENT"; else if (g.calc>= 70) g.calcrem="V.GOOD"; else if (g.calc>= 60) g.calcrem="GOOD"; else if (g.calc>= 50) g.calcrem="CREDIT"; else if (g.calc>= 40) g.calcrem="PASS"; else g.calcrem="FAIL";

    //output to student record file.
    outputfile.open("record.txt",ios::app);
    outputfile<<g.ID<<" "<<g.fName<<" "<<g.lName<<" "<<g.level<<" "<<g.acagrd<<" "<<g.mathgrd<<" "<<g.progrd<<" "<<g.numgrd<<" "<<g.calcgrd<<endl<<endl;
    outputfile2.open("record2.txt",ios::app);
    outputfile2<<g.ID<<endl<<g.fName<<endl<<g.lName<<endl<<g.level<<endl<<setw(10)<<g.acawrt<<" "<<setw(10)<<g.acagrd<<" "<<setw(15)<<g.acarem<<endl<<setw(10)<<g.maths<<" "<<setw(10)<<g.mathgrd<<" "<<setw(15)<<g.mathrem<<endl<<setw(10)<<g.prog<<" "<<setw(10)<<g.progrd<<" "<<setw(15)<<g.progrem<<endl<<setw(10)<<g.num<<" "<<setw(10)<<g.numgrd<<" "<<setw(15)<<g.numrem<<endl<<setw(10)<<g.calc<<" "<<setw(10)<<g.calcgrd<<" "<<setw(15)<<g.calcrem<<endl<<endl;
    outputfile.close();
    outputfile2.close();
    cout<<"\n\n\t\t\tStudent grade has been Added!!!.\n";
    cout<<"\n\n\n\npress 'Y' to add another student or 'N' to finish: "; cin>>inchoice;


    return;
}

void Updatestudentrecord()
{
    char inchoice;
    int i;
    for (i=0; inchoice!='n'&&inchoice!='N'; i++){
            if((inchoice=='y')||(inchoice=='Y')||(inchoice=='2')){
    cout<< "\n\n\t\t\tEDIT STUDENT"<<endl;
    string ID;
    cout<<"\n Enter the student's ID number: ";
    cin>>ID;

    studentrecord g;
    fstream intofile ("record.txt");
    fstream temporalfile ("temp8.txt",ios::app);
    string line;

    while(std::getline(intofile, line))
    {
        istringstream ss(line);
        std::istream_iterator<std::string> begin(ss), end;
        //putting all the tokens in the vector
        std::vector<std::string> arrayTokens(begin, end);

        vector<string>::iterator it;
        int i=0,flag=0;
        for(it = arrayTokens.begin(); it != arrayTokens.end(); it++)
        {
            if(i==0 && ID==*it)
            {
                flag=1;
            }
            else
                break;
            i++;
        }
        if(flag==1)
        {
    cout<<"First name: ";cin>>g.fName;
    cout<<"Last name: ";cin>>g.lName;
    cout<<"Level: "; cin >>g.level;
    cout<<"\n\n\n\t\t\tenter marks for "<<g.fName<<" "<<g.lName<< " " << g.level << " ("<<ID<<")"<<endl;

   cout<<"\n\n\tenter Academic Writing mark: ";cin>>g.acawrt;
    if (g.acawrt >= 80) g.acagrd='A'; else if (g.acawrt>= 70) g.acagrd='B'; else if (g.acawrt>= 60) g.acagrd='C'; else if (g.acawrt>= 50) g.acagrd='D'; else if (g.acawrt>= 40) g.acagrd='E'; else g.acagrd='F';
    if (g.acawrt >= 80) g.acarem="EXCELLENT"; else if (g.acawrt>= 70) g.acarem="V.GOOD"; else if (g.acawrt>= 60) g.acarem="GOOD"; else if (g.acawrt>= 50) g.acarem="CREDIT"; else if (g.acawrt>= 40) g.acarem="PASS"; else g.acarem="FAIL";

    cout<<"\tenter Math mark: ";cin>>g.maths;
    if (g.maths >= 80) g.mathgrd='A'; else if (g.maths>= 70) g.mathgrd='B'; else if (g.maths>= 60) g.mathgrd='C'; else if (g.maths>= 50) g.mathgrd='D'; else if (g.maths>= 40) g.mathgrd='E'; else g.mathgrd='F';
    if (g.maths >= 80) g.mathrem="EXCELLENT"; else if (g.maths>= 70) g.mathrem="V.GOOD"; else if (g.maths>= 60) g.mathrem="GOOD"; else if (g.maths>= 50) g.mathrem="CREDIT"; else if (g.maths>= 40) g.mathrem="PASS"; else g.mathrem="FAIL";

    cout<<"\tenter Programming1 mark: ";cin>>g.prog;
    if (g.prog >= 80) g.progrd='A'; else if (g.prog>= 70) g.progrd='B'; else if (g.prog>= 60) g.progrd='C'; else if (g.prog>= 50) g.progrd='D'; else if (g.prog>= 40) g.progrd='E'; else g.progrd='F';
    if (g.prog >= 80) g.progrem="EXCELLENT"; else if (g.prog>= 70) g.progrem="V.GOOD"; else if (g.prog>= 60) g.progrem="GOOD"; else if (g.prog>= 50) g.progrem="CREDIT"; else if (g.prog>= 40) g.progrem="PASS"; else g.progrem="FAIL";

    cout<<"\tNumerical method mark: "; cin>>g.num;
    if (g.num >= 80) g.numgrd='A'; else if (g.num>= 70) g.numgrd='B'; else if (g.num>= 60) g.numgrd='C'; else if (g.num>= 50) g.numgrd='D'; else if (g.num>= 40) g.numgrd='E'; else g.numgrd='F';
    if (g.num >= 80) g.numrem="EXCELLENT"; else if (g.num>= 70) g.numrem="V.GOOD"; else if (g.num>= 60) g.numrem="GOOD"; else if (g.num>= 50) g.numrem="CREDIT"; else if (g.num>= 40) g.numrem="PASS"; else g.numrem="FAIL";

    cout<<"\tCalculus mark: "; cin>>g.calc;
    if (g.calc >= 80) g.calcgrd='A'; else if (g.calc>= 70) g.calcgrd='B'; else if (g.calc>= 60) g.calcgrd='C'; else if (g.calc>= 50) g.calcgrd='D'; else if (g.calc>= 40) g.calcgrd='E'; else g.calcgrd='F';
    if (g.calc >= 80) g.calcrem="EXCELLENT"; else if (g.calc>= 70) g.calcrem="V.GOOD"; else if (g.calc>= 60) g.calcrem="GOOD"; else if (g.calc>= 50) g.calcrem="CREDIT"; else if (g.calc>= 40) g.calcrem="PASS"; else g.calcrem="FAIL";

    temporalfile<<ID<<" "<<g.fName<<" "<<g.lName<<" "<<g.level<<" "<<g.acagrd<<" "<<g.mathgrd<<" "<<g.progrd<<" "<<g.numgrd<<" "<<g.calcgrd<<endl;

            cout<<"\nstudent record has been successfully edited.\n";
        }
        else
        {
            temporalfile<<line<<endl;
        }


    }
    intofile.close();
    temporalfile.close();
    remove("record.txt");
    rename("temp8.txt","record.txt");
cout<<"\n\n\n\npress 'Y' to edit another student record or 'N' to finish: "; cin>>inchoice;
            }
    }
system("cls");
}

void deletestudentrecord()
{
    char inchoice;
    int i;

    for (i=0; inchoice!='n'&&inchoice!='N'; i++){
            if((inchoice=='y')||(inchoice=='Y')||(inchoice=='3')){
    cout<< "\n\n\t\t\tDELETE STUDENT"<<endl;
    string ID;
    cout<<"Enter Id number: ";
    cin>>ID;

    student stu;
    fstream intofile ("record.txt");
    fstream temporalfile ("temp9.txt",ios::app);
    string line;

    while(std::getline(intofile, line))
    {
        istringstream ss(line);
        std::istream_iterator<std::string> begin(ss), end;
        //putting all the tokens in the vector
        std::vector<std::string> arrayTokens(begin, end);

        vector<string>::iterator it;
        int i=0,flag=0;
        for(it = arrayTokens.begin(); it != arrayTokens.end(); it++)
        {
            if(i==0 && ID==*it)
            {
                flag=1;
            }
            else
                break;
            i++;
        }
        if(flag!=1)
        {
            temporalfile<<line<<endl;
        }
        else
        {
            cout<<"\n Student record has been successfully deleted \n";
        }


    }
    intofile.close();
    temporalfile.close();
    remove("record.txt");
    rename("temp9.txt","record.txt");
cout<<"\n\n\n\npress 'Y' to delete another student record or 'N' to finish: "; cin>>inchoice;
            }
    }

system("cls");
}

void studentsrecordlist()
{
    ifstream outputfile("record.txt");
    string content,i;
    cout<<endl<<"\t\t\t\t\t\t\tALL STUDENT RECORDS \t\t\n\n\n";
    cout <<setw(15) <<"ID"<<setw(15)<<"FIRST_NAME"<<setw(15)<<"LAST_NAME"<<setw(15)<<"LEVEL"<<setw(20)<<"ACADEMIC_WRITING"<<setw(15)<<"MATHEMATICS"<<setw(15)<<"PROGRAMMING"<<setw(15)<<"NUMERICAL METHOD"<<setw(15)<<"CALCULUS"<<endl<<endl;
    string line;
    while(std::getline(outputfile, line))
    {
        istringstream ss(line);
        std::istream_iterator<std::string> begin(ss), end;

        //putting all the tokens in the vector
        std::vector<std::string> arrayTokens(begin, end);

        vector<string>::iterator it;

        for(it = arrayTokens.begin(); it != arrayTokens.end(); it++)
        {

                cout<<setw(15)<<*it;// prints d.

        }
        std::cout << '\n';

    }

cout<< "\n\n\n\nenter any key to continue to main menu: "; cin>>i;
system("cls");
}

void display()
{
int notfound=0,y=1,q,i;
string find, ID,fName,lName,level,acawriting,maths,prog,num,calc;
ifstream f2("record2.txt");
cout<<"Enter ID of student whose record you want to display: ";cin>>find;
cout<<endl;

for(q=0; (q<y)||(!f2.eof()); q++)
{
getline(f2,ID);
if (ID==find)
{
notfound=1;
cout<<setw(12)<<"ID: "<<ID<<endl;
getline(f2,fName);
cout<<setw(12)<<"First name: "<<fName<<endl;
getline(f2,lName);
cout<<setw(12)<<"Last name: "<<lName<<endl;
getline(f2,level);
cout<<setw(12)<<"Level: "<<level<<endl<<endl;
cout<<"\t\t\t\tCOURSES\n\n";
cout<<setw(20)<<"COURSE "<<setw(12)<<"MARK "<<setw(12)<<"GRADE "<<setw(17)<<"REMARK "<<endl<<endl;
getline(f2,acawriting);
cout<<setw(20)<<"Academic Writing: "<<acawriting<<endl;
getline(f2,maths);
cout<<setw(20)<<"Mathematics: "<<maths<<endl;
getline(f2,prog);
cout<<setw(20)<<"Programming1: "<<prog<<endl;
getline(f2,num);
cout<<setw(20)<<"Statistics: "<<num<<endl;
getline(f2,calc);
cout<<setw(20)<<"Culture: "<<calc<<endl;
}
}
if(notfound==0){cout<<"No Record Found"<<endl;}
f2.close();
cout<< "\n\n\n\nenter any key to continue to main menu: "; cin>>i;

}

