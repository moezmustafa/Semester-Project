#include<iostream>
#include<string>
#include<fstream>
#include<ctime>
#include<iomanip>
#include<windows.h>
#include<conio.h>

using namespace std ;

//////Global Variables////
//////Global Variables////

int color_code = 1 ; // goes in the system color function
int choice_main ; //goes in the main menu function
int choice_user ; //goes in the user menu function  

string  username , password ;
string  username_from_file , password_from_file ;

string username_to_add;

char choice_friend ; //goes in the friend menu function

//////Global Variables////
//////Global Variables////


//////prototype of Functions//////
//////prototype of Functions//////

void load_animation();
void greeting();
void loading(int , int);
void credits();
void main_menu();
void login_page();
void register_page();
void user_menu();
void list_of_users();
void send_message();
void add_friend();
void online_users();
void logout();
void list_of_users();
void user_friends() ;



void system_color(int);
//////prototype of Functions//////
//////prototype of Functions//////




//////Main Function//////
//////Main Function//////

int main()
{


    load_animation( );  // load animation

    system("pause");  // pause the system
    system("cls");

    loading(10 , 138);  //loading bar
    system("cls");  // pause the system
    


    main_menu();  // main menu
    system("pause");  // pause the system


}

//////Main Function//////
//////Main Function//////






//////Function Definitions//////
//////Function Definitions//////
//////Function Definitions//////

void system_color(int color)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);

}

void greeting()
{
    



    char x = 178  ;

    for(int i = 0 ; i < 50 ; i++)
    {
        cout << x  << x <<  x  ;
        cout << x   << x <<  x  ;
        Sleep(5);
    }

    cout << " \t\t\t W  E L C O  M E    T  O    F  A  K  E    W  H  A  T  S  A  P  P" << endl ;
    cout << " \t\t\t W  E L C O  M E    T  O    F  A  K  E    W  H  A  T  S  A  P  P" << endl ;
    cout << " \t\t\t W  E L C O  M E    T  O    F  A  K  E    W  H  A  T  S  A  P  P" << endl ;

    for(int i = 0 ; i < 50 ; i++)
    {
        cout << x  << x <<  x  ;
        cout << x   << x <<  x  ;
        Sleep(5);
    }

}

void load_animation()
{
    system_color(color_code);
    color_code++;
    greeting(  );

    system_color(color_code);
    color_code++;
    greeting(  );

    system_color(color_code);
    color_code++;
    greeting(  );

    system_color(color_code);
    system_color(color_code);
    color_code++;
    greeting(  );

    system_color(color_code);
    color_code++;
    greeting(  );

    
}



void loading(int load_time , int bar_length)
{
    system_color(color_code);
    cout << " \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n ";
    cout << "\t\t\t\t\t\t\tLOADING Please wait ..... : \n\n";

char x = 178;
    for(int i = 0 ; i < bar_length ; i++)
    {
        cout << x ;
        Sleep(load_time);
    }
}



void main_menu()
{
    system_color(color_code);
    color_code++;
    cout << " \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n ";
    cout << "\t\t\t\t\t\t\tMAIN MENU : \n\n";
    cout << "\t\t\t\t\t\t\t1. Login \n\n";
    cout << "\t\t\t\t\t\t\t2. Register \n\n";
    cout << "\t\t\t\t\t\t\t3. Credits \n\n";
    cout << "\t\t\t\t\t\t\t4. Exit \n\n";
    cout << "\t\t\t\t\t\t\tEnter your choice : ";
    cin >> choice_main;

    switch(choice_main)
    {
        case 1:
            login_page();
            break;

        case 2:
            register_page();
            break;

        case 3:
         //   credits();
            break;

        case 4:
            exit(0);
            break;

        default:

            cout << " \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n ";
            cout << "\t\t\t\t\t\t\tWrong Choice \n\n";
            cout << "\t\t\t\t\t\t\tPlease try again \n\n";
            cout << "\t\t\t\t\t\t\tT A K I N G   Y O U   B A C K  T O  M A I N  M E N U\n\n";
            cout << endl;
            cout << endl;
            loading(10 , 138);
            system("cls");
            main_menu();

    }
}

void register_page()
{

 system("color 0B");

    system("cls");
    cout << " \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n ";
    cout << "\t\t\t\t L  O  G  I  N    P   A   G  E \n\n\n\n";
    cout << "\t\t\t\t\t\t\tEnter your username : ";
    cin >> username;
    cout << "\t\t\t\t\t\t\tEnter your password : ";
    cin >> password;

      ofstream write(username+".txt");
        write << username << endl ;
        write << password << endl ;
        write.close();

        system("cls");

 list_of_users();

        

         cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n \t\t\t\t\t\t\tT A K I N G   Y O U   B A C K  T O  M A I N  M E N U\n\n";
            cout << endl;
            cout << endl;
            cout << " \t\t\t\t\t\t Y O U  H A V E  R E G I S T E R E D  \n\t\t\t\t\t\t Y O U R  A C C O U N T  S U C C E S S F U L L Y  \n\n";
        cout << "\n\n\n\n ";


            loading(40 , 138);
system("cls");
            main_menu();


 

}


void login_page()
{

// login menu
    //username and password 
    system("color 1A");

    system("cls");
    cout << " \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n ";
    cout << "\t\t\t\t L  O  G  I  N    P   A   G  E \n\n\n\n";
    cout << "\t\t\t\t\t\t\tEnter your username : ";
    cin >> username;
    cout << "\t\t\t\t\t\t\tEnter your password : ";
    cin >> password;
    

    ifstream read(username+".txt");
    getline(read,username_from_file);
    getline(read,password_from_file);

    if(username_from_file == username && password_from_file == password)
    {
    cout << " \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n ";
    cout << "\t\t\t\t\t\t\t Y O U  H A V E  L O G G E D-I N  S U C C E S S F U L L Y\n\n";
    cout << "\n\n\n\n ";
    loading(40 , 138);
        system("cls");
        user_menu() ;
    }
    else
    {
        system("cls");
    cout << " \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n ";
    cout << "\t\t\t\t T R Y  A G A I N  \n\n\n\n";
    cout << "\t\t\t\t\t\t\tWrong username or password \n\n";
    cout << "\t\t\t\t\t\t\tT A K I N G   Y O U   B A C K  T O  M A I N  M E N U\n\n";
    cout << endl;
    cout << endl;
    loading(10 , 138);
    system("cls");
    main_menu();
    }

   
cout << endl;
cout << endl;
cout << endl;

    
    }



void user_menu()
{

  system_color(color_code);
    color_code++;
    cout << " \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n ";
    cout << "\t\t\t\t\t\t\tMAIN MENU : \n\n";
    cout << "\t\t\t\t\t\t\t1. Send a Message \n\n";
    cout << "\t\t\t\t\t\t\t2. Add a Friend \n\n";
    cout << "\t\t\t\t\t\t\t3. Online Users \n\n";
    cout << "\t\t\t\t\t\t\t4. Logout \n\n";
    cout << "\t\t\t\t\t\t\tEnter your choice : ";
    cin >> choice_user;

    switch(choice_user)
    {
        case 1:
            send_message();
            break;

        case 2:
            add_friend();
            break;

        case 3:
            online_users();
            break;

        case 4:
            system("cls");
            logout();
            main_menu();
            break;

        default:

            cout << " \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n ";
            cout << "\t\t\t\t\t\t\tWrong Choice \n\n";
            cout << "\t\t\t\t\t\t\tPlease try again \n\n";

            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            loading(10 , 138);
            system("cls");
            user_menu();

    }



}


void send_message()
{

cout << " \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n ";
cout << "\t\t\t\t\t\t\tS E N D  A  M E S S A G E \n\n";

cout << "\t\t\t\t Your Friends are : \n\n";

fstream file ; 

string file_name = username + "friends" ;
file.open(file_name + ".txt") ; 

string text ; 
    getline(file , text) ;

    cout << text << endl ;

while(!file.eof()) 
    {
      getline(file ,text);
      cout << "" << text << "\n" ;
    }


file.close() ;

cout << endl;
cout << endl;
cout << endl;

string friend_username ;
cout << "\t\t\t\t\t\t\tEnter your friend's username : ";
cin >> friend_username;


string message_file = username + friend_username + ".txt" ;

fstream file2 ;
file2.open(message_file , ios::app) ;

string message ;
cout << "\t\t\t\t\t\t\tEnter your message : ";
cin.ignore();
getline(cin , message);

file2 << message << endl ;

file2.close();


    

}


void add_friend()
{
    cout << " \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n ";
    cout << "\t\t\t\t\t\t\t The Available Users are : \n\n";





fstream file ; 

file.open("list_of_users.txt") ; 

string text ; 

    getline(file , text) ;

    cout << text << endl ;

while(!file.eof()) 
    {
      getline(file ,text);
      cout << "" << text << "\n" ;
    }


file.close() ;




    cout << "\n\n\n Enter the name of the user you want to add : ";
    cin >> username_to_add;

    string username_to_add_file = username + username_to_add;


      ofstream write(username_to_add_file+".txt");

cout << " \n\n You are now friends with  " << username_to_add << endl;

 /// creating friends list for eaach user /////
/// creating friends list for eaach user 
/// creating friends list for eaach user 

fstream file1 ;
string friends = username + "friends";
 file1.open(friends+".txt" , ios::app);
 file1 << username_to_add << endl ;

file1.close();

/// creating friends list for eaach user 
/// creating friends list for eaach user 
/// creating friends list for eaach user 


cout << " \n\n\n Add another user ? (y/n) : ";
cin >> choice_friend;

switch(choice_friend)
{
    case   'y':
        add_friend();
        break;
    case  'n':
        system("cls");
        cout << "\n\n\n\n\n\n\n\n\n ";
        cout << "\t\t\t\t Loading Main Menu " ;
        cout << "\n\n\n" ;
        loading(10 , 138);
        system("cls");
        user_menu();
        break;
}

}







void online_users()
{
system("cls");
system("color 0B");
//print list_of_users.txt file 

fstream file ; 

file.open("list_of_users.txt") ; 

string text ; 

cout << " \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n ";
cout << "\t\t\t\t\t\t\tONLINE USERS : \n\n";


    getline(file , text) ;

    cout << text << endl ;

while(!file.eof()) 
    {
      getline(file ,text);
      cout << "" << text << "\n" ;
    }


file.close() ;

cout<<"\n\n\n\n";
system("pause");
system("cls");
cout << " \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n ";
cout << "\t\t\t\t\t\t\tLoadin main menu\n\n" ;
loading(10 , 138);
system("cls");
user_menu();






}




void logout()
{
    cout << " \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n ";
    cout << "\t\t\t\t\t\t\tY O U  H A V E  L O G G E D-O U T  S U C C E S S F U L L Y\n\n";
    cout << "\n\n\n\n ";
    loading(10 , 138);
    system("cls");

    main_menu();

}


void list_of_users()
{

    // this function is being called in the user register function


     string copy_username = username ; 

   string name = "list_of_users" ;
   ofstream write(name+".txt" , ios :: app);

    write <<"\t\t\t\t\t\t\t" << copy_username << endl ;
   

    
    write.close();


}














//////Function Definitions//////
//////Function Definitions//////
//////Function Definitions//////
