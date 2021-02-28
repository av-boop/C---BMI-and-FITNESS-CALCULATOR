#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <conio.h>         //HEADER FILES
#include <windows.h>
#include <string>
#include <fstream>


using namespace std;
class calculator{
    float w,h,r,result,bmi;
    int o,idno,q,s;
    char name[50];
public:
    void getdata();
    void conversionchart();
    void main();
    void diet();
    void help();
    void exercise();


                                   //FUNCTIONS USED
   void searchbook();

   int storebookdata();
   void viewbooks();
   void showdata()


   {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
       cout<< "\n\nNAME IS--------> "<<name;
       cout<< "\nBMI IS-----------> "<<result<<endl;
       cout<< "\n\nFOR MAIN MENU---------->PRESS[1]";
       cout<< "\nTO QUIT------------------>PRESS[2]";
       cout<< "\n\nENTER YOUR OPTION HERE:";
       cin>>q;
       switch(q)
       {
       case 1:
        main();
        break;
       case 2:
           system("cls");
        cout<< "THANKS FOR USING AVIMO19 FITNESS CALCULATOR";
        cout<< "\nVISIT AGAIN,GOOD DAY!";
        exit(0);
        default:
        cout<< "INVALID OPTION SELECTED";


       }

   }










};

void calculator::main()
{
       int o;
       calculator c;
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
     system("cls");
  cout<<"************************************"<<endl;


  cout<<"WELCOME TO AVIMO19 FITNESS CALCULATOR"<<endl;

  cout<<"************************************"<<endl<<endl;

     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);

  cout<< "CALCULATE BMI-------------------->PRESS[1]"<<endl;

  cout<< "VIEW DIET------------------------>PRESS[2]"<<endl;
  cout<< "VIEW EXERCISE-------------------->PRESS[3]"<<endl;
  cout<< "TO VIEW LAST RECORD-------------->PRESS[4]"<<endl;
  cout<< "TO EXIT-------------------------->PRESS[5]"<<endl;
  cout<< "HELP----------------------------->PRESS[6]"<<endl;
  cout<< "ENTER YOUR OPTION HERE----------->";
  cin>>o;
  switch(o)
  {
  case 1:
      c.getdata();
      break;



  case 2:
    diet();
    break;
  case 3:
    exercise();
    break;
  case 4:
    searchbook();
    break;
  case 5:
       system("cls");
    cout<< "THANKS FOR USING AVIMO19 FITNESS CALCULATOR";
    cout<< "\nVISIT AGAIN,GOOD DAY!";


      break;

  case 6:
      help();

    break;






      default:
      cout<< "INVALID OPTION SELECTED";

  }









}

void calculator::getdata()
{

     calculator c;
     int o;
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
     system("cls");
        cout<< "***********************"<<endl;
        cout<< "CALCULATE YOUR BMI HERE"<<endl;
        cout<< "***********************"<<endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
        cout<< "CREATE YOUR UNIQUE ID----------> ";
        cin>>idno;

        cout << "ENTER YOUR NAME----------------> ";
        cin.ignore();
        cin.getline(name,49);

        cout<< "ENTER YOUR WEIGHT(in kg)-------> ";
        cin>>w;
        cout<< "ENTER YOUR HEIGHT(in metre)---->";
        cin>>h;

        system("cls");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
        cout<< "HELLO MR./MRS."<<name<<endl<<endl;
        r=h*h;
        result=w/r;

        cout<< "YOUR BMI IS: "<<result<<endl<<endl;
        cin.ignore();
        if(result>0 && result<18.5)
        {
            cout << "ATTENTION! MR./MRS."<<name<< "YOUR BMI IS LESS THAN 18.5 "<<endl;
            cout<< "AS PER BMI YOU ARE THIN"<<endl;
        }
        else if(result>=18.5 && result<=24.9)
        {
             cout << "CONGRATS! MR./MRS."<<name<< "  YOUR BMI IS BETWEEN 18.5 TO 24.9"<<endl;
            cout<< "AS PER BMI YOU ARE HEALTHY"<<endl;
        }
        else if(result==25 && result<=30)
        {
             cout << "ATTENTION! MR./MRS."<<name<< "  YOUR BMI IS BETWEEN 25 TO 30"<<endl;
            cout<< "AS PER BMI YOU ARE OVERWEIGHT"<<endl;
        }
        else if(result>30)
        {
            cout << "ALERT! NEEDS QUICK ACTION MR./MRS."<<name<< "  YOUR BMI IS ABOVE 30"<<endl;
            cout << "AS PER BMI YOU ARE OBESE"<<endl<<endl<<endl<<endl;
        }

        cout << "\nTO SAVE RECORD------------->PRESS[1]"<<endl;
        cout<< "\nFOR MAIN MENU-------------->PRESS[2]"<<endl;
        cout << "\nTO EXIT-------------------->PRESS[3]"<<endl<<endl;
        cout << "ENTER YOUR OPTION HERE:";
        cin>>o;
        switch(o)
        {
        case 1:
            storebookdata();
             cout<< "\n\nRECORD SAVED SUCESSFULLY";
             cout<< "\n\nFOR MAIN MENU------>PRESS[1]";
             cout<< "\nFOR LAST RECORD---->PRESS[2]";
             cout<< "\nENTER YOUR OPTION HERE:";
             cin>>s;
             if(s==1)
             {
                 main();
             }
             else if(s==2)
             {
                 searchbook();
             }
             else
                cout<< "\nINVALID OPTION SELECTED";


            break;

        case 2:
            system("cls");
            c.main();
            break;
        case 3:
            system("cls");
            cout<< "THANKS FOR USING AVIMO FITNESS CALCULATOR"<<endl;
            cout<< "VISIT AGAIN,GOOD DAY!!!";
            break;


        }







}


void calculator::diet()
{    system("cls");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
    cout<< "ENTER YOUR NAME----------> ";
    cin.ignore();
    cin.getline(name,19);
    cout<< "\nENTER YOUR BMI---------> ";
    //cin.ignore();
    cin>>bmi;
    cout<< "\n\nHELLO MR./MRS."<<name;
    cout<< "\n\nYOUR BMI------------------->"<<bmi;

    if(bmi>0 && bmi<18.5)
    {cout<< "\nYOUR HEALTH CONDITION------->THIN ";
     cout<< "\n\nFOLLOWING DIETS ARE SUGGESTED,PLEASE FOLLOW AS INSTRUCTED:";
     cout<< "\n\nFOOD NAME                                              QUANTITY";
     cout<< "\n-------------------------------------------------------------------------------";
     cout<< "\nBEAN                                                    200G/DAY";
     cout<< "\nDRY FRUITS                                              50G/DAY";
     cout<< "\nRICE,DAL                                                1CUP/DAY";
     cout<< "\nMILK,GHEE,CURD                                          1BIGCUP/DAY";
     cout<< "\n\nBEST OF LUCK!";

    }
    else if(bmi>=18.5 && bmi<=24.9)
    {
        cout<< "\nYOUR HEALTH CONDITION------->HEALTHY ";
        cout<< "\n\nYOU ARE HEALTHY,PLEASE CONTINUE YOUR DAILY ROUTINES WELL!";
     cout<< "\n\nFOLLOWING DIETS ARE SUGGESTED,PLEASE FOLLOW AS INSTRUCTED:";
     cout<< "\n\nFOOD NAME";
     cout<< "\n-----------";
     cout<< "\nGREEN VEGETABLES";
     cout<< "\LEAN MEATS,EGG,BEANS";
     cout<< "\nGRAIN(CEREAL) FOODS";
     cout<< "\nMILK,CHEESE";
     cout<< "\n\nBEST OF LUCK!";


    }
    else if(bmi>=25 && bmi<=29.9)
    {
        cout<< "\nYOUR HEALTH CONDITION------->OVERWEIGHT ";

     cout<< "\n\nFOLLOWING DIETS ARE SUGGESTED,PLEASE FOLLOW AS INSTRUCTED:";
     cout<< "\n\nFOOD NAME";
     cout<< "\n-----------";
     cout<< "\nLeafy Greens";
     cout<< "\nSalmon";
     cout<< "\nCruciferous Vegetables";
     cout<< "\nLean Beef and Chicken Breast";
     cout<< "\n\nBEST OF LUCK!";

    }
    else if(bmi>=30)
    {
         cout<< "\nYOUR HEALTH CONDITION------->OBESE ";

     cout<< "\n\nFOLLOWING DIETS ARE SUGGESTED,PLEASE FOLLOW AS INSTRUCTED:";
     cout<< "\n\nFOOD NAME";
     cout<< "\n-----------";
     cout<< "\nLeafy Greens";
     cout<< "\nSalmon";
     cout<< "\nCruciferous Vegetables";
     cout<< "\nLean Beef and Chicken Breast";
     cout<< "\n\nBEST OF LUCK!";

    }
    cout<< "\n\nFOR MAIN MENU--------->PRESS[1]";
    cout<< "\nTO EXIT---------------->PRESS[2]";
    cout<< "\n\nENTER YOUR OPTION HERE: ";
    cin>>o;
    switch(o)
    {
    case 1:
        main();
        break;
    case 2:
        system("cls");
            cout<< "THANKS FOR USING AVIMO FITNESS CALCULATOR"<<endl;
            cout<< "VISIT AGAIN,GOOD DAY!!!";
            break;

    }
}


int calculator::storebookdata()
{

    if(result==0)
    {
        cout<< "book file not initialized"<<endl;
        return 0;

    }
    else
    {
        ofstream fout;
        fout.open("file3.dat",ios::app);
        fout.write((char*)this,sizeof(*this));
        fout.close();
        return 1;
    }
}



void calculator::viewbooks()
{
    ifstream fin;
    fin.open("file3.dat");
    if(!fin)
    {
        cout << "file not found"<<endl;

    }
    else{
        fin.read((char*)this,sizeof(*this));
            while(!fin.eof()){

                showdata();
                fin.read((char*)this,sizeof(*this));

            }
            fin.close();


    }
}



void calculator::searchbook()
{
     int id;
    //char t[50];
    system("cls");
     cout <<"ENTER YOUR UNIQUE ID:";
     cin.ignore();
//cin.getline(t,50);
    cin>>id;






    int counter=0;

    ifstream fin;
fin.open("file3.dat");
if(!fin)
{
    cout<< "file not found"<<endl;
}
else{
    fin.read((char*)this,sizeof(*this));
    while(!fin.eof())
    {

        if(id==idno){



          showdata();
            counter++;
        }

        fin.read((char*)this,sizeof(*this));
    }
    if(counter==0)
        cout << "record not found"<<endl;
    fin.close();
}
}
void calculator::help()
{
    system("cls");
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
    cout<< "WELCOME TO HELP SECTION,HERE YOU CAN GET A FULL GUIDANCE";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
    cout<<"\n\nWHEN YOU PRESS OPTION[1]:";

    cout<< "\n-------------------------";
    cout<< "\nTHIS SECTION HELPS YOU TO CALCULATE YOUR BMI";
    cout<< "\nHERE YOU HAVE TO PUT YOUR HEIGHT(IN METRE) AND WEIGHT(IN KG)"<<endl;
    cout << "AFTER ENTERING YOUR DETAILS THEN PRESS ENTER TO SEE REULT";
    cout<< "\n\nWHEN YOU PRESS OPTION[2]";
    cout<< "\n-------------------------";
    cout<< "\nIF YOU DONT HAVE YOUR HEIGHT  IN METRE AND WEIGHT IN KG";
    cout<< "\nYOU CAN REFER A CONVERSION CHART HERE";
    cout<< "\n\nWHEN YOU SELECT OPTION[3]";
    cout<< "\n---------------------------";
    cout<< "\nHERE YOU CAN VIEW DIET ACCORDING TO YOUR BMI";
    cout<< "\n\nWHEN YOU SELECT OPTION[4]";
    cout<< "\n---------------------------";
    cout<< "\nHERE YOY CAN SEE SUGGESTED EXERCISE ACCORDING TO YOUR HEATH CONDITION";
    cout << "\n\nWHEN YOU SELECT OPTION[5]";
    cout<< "\n------------------------";
    cout<< "\nHERE YOU CAN SEE YOUR LAST RECORD WHICH YOU HAVE SAVED";
    cout<< "\n\nFOR MAIN MENU---------------->PRESS[1]";
    cout<< "\nTO EXIT----------------------->PRESS[2]";
    cout<< "\n\nENTER YOUR OPTION HERE------> ";
    cin>>o;
    switch(o)
    {
    case 1:
        main();
        break;
    case 2:
        system("cls");
        cout<<"THANK YOU! FOR USING AVIMO FITNESS CALCULATOR";
        cout<< "\nVISIT AGAIN,GOOD DAY!";
        break;
    default:
        cout<< "INVALID OPTION SELECTED";
    }

}
void calculator::exercise()
{
     system("cls");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
    cout<< "ENTER YOUR NAME----------> ";
    cin.ignore();
    cin.getline(name,19);
    cout<< "\nENTER YOUR BMI---------> ";
    //cin.ignore();
    cin>>bmi;
    cout<< "\n\nHELLO MR./MRS."<<name;
    cout<< "\n\nYOUR BMI------------------->"<<bmi;

     if(bmi>0 && bmi<18.5)
    {cout<< "\nYOUR HEALTH CONDITION------->THIN ";
     cout<< "\n\nFOLLOWING EXERCISES ARE SUGGESTED,PLEASE FOLLOW AS INSTRUCTED:";
     cout<< "\n\nEXERCISE NAME";
     cout<< "\n--------------";
     cout<< "\nBench presses help build shoulder, tricep, and chest muscles";
     cout<< "\nPushups";
     cout<< "\nSquats,Pullups";
     cout<< "\n\nBEST OF LUCK!";


    }

      else if(bmi>=18.5 && bmi<=24.9)
    {
        cout<< "\nYOUR HEALTH CONDITION------->HEALTHY ";
        cout<< "\n\nYOU ARE HEALTHY,PLEASE CONTINUE YOUR DAILY EXERCISES WELL!";
     cout<< "\n\nFOLLOWING EXERCISES ARE SUGGESTED,PLEASE FOLLOW AS INSTRUCTED:";
     cout<< "\n\nEXERCISE NAME";
     cout<< "\n---------------";
     cout<< "\nWalking. Any exercise program should include cardiovascular exercise, which strengthens the heart and burns calories. ...";
     cout<< "\nInterval training. ...";
     cout<< "\nSquats. ...";
     cout<< "\nLunges. ...";
     cout<< "\nPush-ups. ...";
     cout<< "\nAbdominal Crunches. ...";
     cout<< "\nBent-over Row.";
     cout<< "\n\nBEST OF LUCK!";


    }

     else if(bmi>=25 && bmi<=29.9)
    {
        cout<< "\nYOUR HEALTH CONDITION------->OVERWEIGHT ";

     cout<< "\n\nFOLLOWING EXERCISES ARE SUGGESTED,PLEASE FOLLOW AS INSTRUCTED:";
     cout<<"\nWalking. Walking is one of the best exercises for weight loss";
     cout<<"\nJogging or running";
      cout<<"\nCycling. ...";
     cout<<"\nWeight training. ...";
          cout<<"\ninterval training. ...";
         cout<< "\nSwimming. ...";
        cout<< "\nYoga. ...";
         cout<< "\nPilates.";
         cout<< "\n\nBEST OF LUCK!";

    }

    else if(bmi>=30)
    {
         cout<< "\nYOUR HEALTH CONDITION------->OBESE ";

     cout<< "\n\nFOLLOWING EXERCISES ARE SUGGESTED,PLEASE FOLLOW AS INSTRUCTED:";
     cout<<"\nWalking. Walking is one of the best exercises for weight loss";
     cout<<"\nJogging or running";
      cout<<"\nCycling. ...";
     cout<<"\nWeight training. ...";
          cout<<"\ninterval training. ...";
         cout<< "\nSwimming. ...";
        cout<< "\nYoga. ...";
         cout<< "\nPilates.";
         cout<< "\n\nBEST OF LUCK!";


    }

     cout<< "\n\nFOR MAIN MENU--------->PRESS[1]";
    cout<< "\nTO EXIT---------------->PRESS[2]";
    cout<< "\n\nENTER YOUR OPTION HERE: ";
    cin>>o;
    switch(o)
    {
    case 1:
        main();
        break;
    case 2:
        system("cls");
            cout<< "THANKS FOR USING AVIMO FITNESS CALCULATOR"<<endl;
            cout<< "VISIT AGAIN,GOOD DAY!!!";
            break;

    }



}










int main()
{

    calculator c;
    //c.getdata();
    c.main();
   // c.searchbook();
     //c.   viewbooks();





}
