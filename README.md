
# Whatsapp Clone in c++ 

This program might look ordinary at first glance as
It only creates some files and then fetches the data from them .
But the working and the functionality of our app
Lies behind the scenes .


Using this very app the users , yes multiple users 
Can chats  in-between two devices . Over the 
Internet .


## Authors

- [@moezmustafa](https://www.github.com/moezmustafa)




## Badges

[![MIT License](https://img.shields.io/github/issues/moezmustafa/WhatsApp-Clone-in-Cpp)](https://github.com/tterb/atomic-design-ui/blob/master/LICENSEs)
[![GPLv3 License](https://img.shields.io/badge/License-GPL%20v3-yellow.svg)](https://opensource.org/licenses/)
[![AGPL License](https://img.shields.io/badge/license-AGPL-blue.svg)](http://www.gnu.org/licenses/agpl-3.0)

[![Forks](https://img.shields.io/github/forks/moezmustafa/WhatsApp-Clone-in-Cpp)]()
[![Stars](https://img.shields.io/github/stars/moezmustafa/WhatsApp-Clone-in-Cpp)]()
[![Tweet](https://img.shields.io/twitter/url?url=https%3A%2F%2Fgithub.com%2Fmoezmustafa%2FWhatsApp-Clone-in-Cpp)]()





## List of Functions :
void load_animation(); \
void greeting();\
void loading(int , int);\
void credits();\
void main_menu();\
void login_page();\
void register_page();\
void user_menu();\
void list_of_users();\
void send_message();\
void add_friend();\
void online_users();\
void logout();\
void list_of_users();\
void user_friends() ;\
void credit();\




void system_color(int);


## Home Screen
Upon clicking the  .exe  file of this application you are greated with an amazing enriched with colors animation pane . Which is done via the 
Function : 
greetings( )
loading(  )
Loading_animation( )  

## loading Bar
This Is happening due to the function ,

Loading(int  , int )  

This function takes two 
Parameters . 
The first one controls the 
Loading speed of the bar 
And the second one controls the 
Length of the loading bar  .

To achieve this effect we are using : 
#include<windows.h>

We are using the predefined function  Sleep(n) ; which pauses n-mili seconds after printing . a unit/char of our loading bar .

In the extended ASCII table we have a set of unique 
Characters at  values 176 , 177 , 178 and 219 .

 These special characters are being printed  using a for loop , in the same line which creates the effect of animated loading bar . 


## Registration Menu
Ahhh !!! The magic begins here ! 
The register menu takes in the input of Username and password in 
The global variable .
The this function is creating ,
A file   using a cool trick  , it takes the username variable\
 string and converts the name strings in ASCII and takes there sum , the make a  “.txt” file 
 of that numeric sum .
 it also makes a database of registered users.

## List of Functions :
void load_animation(); \
void greeting();\
void loading(int , int);\
void credits();\
void main_menu();\
void login_page();\
void register_page();\
void user_menu();\
void list_of_users();\
void send_message();\
void add_friend();\
void online_users();\
void logout();\
void list_of_users();\
void user_friends() ;\
void credit();\




void system_color(int);


## Login Page
The login takes in the username and password \
Then Opens the file 
And fetches the data from the file created during the registration phase 

## Online Users 
Remember that database we created during the run time 
That is being printed here .
Using Enums , the online status is being addressed .

## Adding a friend

Lists the users active , you will type there username to add them 

Now here is one of the cool parts . 
The username we entered at login 
And this username of a friend 
Gets converted into ASCII value and added . 

Why are we doing this ? 

        Well believe or not this is an two way chatting app that works
So what if I add josh my friend . 
Then my name moeez + josh will make a file 
joshmoeez.txt
And on doing the opposite we will get a file 
Moeezjosh.txt

In order to always open the same file when 2 same users are chatting over the network we  , convert the string into numbers to get a  unique but consistent file name . 

## Sending a message
A file saved the list of friends each user has . 
Then only prints those users form the network .
Using the same numeric file logic defined above that unique files is being used . 
And to store messages from both sides .

Then we are simply printing that  numeric named text file to get the chat 

Which is being active , instantly in between devices.

Now how are we chatting in between the devices ? 

We are using a magical software  , called the 
Google Drive Desktop 

Which is acting as our server.
