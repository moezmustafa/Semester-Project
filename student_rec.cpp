#include<iostream>
#include<fstream> 
#include<string> 
#include<iomanip>

using namespace std ; 

void seprator(char a )
{
     fstream file ; 
    
    file.open("student_record.txt" , ios::in) ; 

    // string names ; 
     string text_line ; 
    // string phone ; 
    // string department ;
    // string university ; 
    // string email ; 

    //seprate the line starting with the number 1
   



     while(file >> text_line)
    {
        if(text_line[0] == a)
        {
           getline(file , text_line) ;
             cout << text_line << endl ;
        }

    }

    file.close() ;
}


// void student_name_seprator( )
// {
   



// }

void printer()
{
cout << "1. Student Name\n" << endl ;
seprator('1') ;
cout << "2. Phone Number\n" << endl ;
seprator('2') ;
cout << "3. Department\n" << endl ;
seprator('3') ;
cout << "4. University\n" << endl ;
seprator('4') ;
cout << "5. Email\n" << endl ;
seprator('5') ;
}

void add ( )
{
    fstream file ; 
    file.open("student_record.txt" , ios::app) ; 
    string names ; 
    string phone ; 
    string department ;
    string university ; 
    string email ; 



    cout << "Enter the name of the student : " ; 
    cin >> names ;
    cout << "Enter the phone number of the student : " ; 
    cin >> phone ; 
    cout << "Enter the department of the student : " ; 
    cin >> department ;
    cout << "Enter the university of the student : " ; 
    cin >> university ;
    cout << "Enter the email of the student : " ; 
    cin >> email ;
    

    

    names = "1 " + names ;
    file << names <<endl ; 
    file << "2 " + phone << endl ; 
    file << "3 " + department << endl ; 
    file << "4 " + university << endl ; 
    file << "5 " + email << endl ; 

    file.close() ; 
}


int main()
{
int option ;

do{
    cout << endl;
    cout << endl;
    cout << "1. Print the student record" << endl ;
    cout << "2. Add a new student" << endl ;
    cout << "3. Exit" << endl ;
    cout << "Enter your option : " ;
    cin >> option ;
    cout << endl ;

    switch(option)
{
    case 1 :
    {
        printer() ; 
        break ;     
    }
    case 2 :
    {
        add() ; 
        break ; 
    }
   
}


}while(option != 3) ;





    return 0 ; 
}