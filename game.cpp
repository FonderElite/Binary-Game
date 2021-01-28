#include <iostream>
#include <ctime>
#include <cstdlib>
#include <stdlib.h>
#include <unistd.h>
using namespace std;
void exit(){
    int ok = 1;
    cout<<"\n";
    switch(ok){
        case 1:
        break;
    }
}
int main(){
int i = 0;
string human;
string sidekick;
string enemy1 = "0110100101101101011100000110111101110011011101000110111101110010";
string start;
double damage;
double damage2;
double enemylife1;
int life = 100;
int enemylife = 50;
int option;
int level[] = {1,2,3,4,5,6,7,8,9,10};
	time_t curr_time;
	curr_time = time(NULL);
	char *tm = ctime(&curr_time);
cout <<"Binary Decoder v2.1\n";
cout<<"GST: "<<tm;
cout<<"Player Name: ";cin >> human;
cout <<"Partner Name: ";cin>>sidekick;
string arr[] = {human,sidekick};
cout << "Your Team-Name: "<<arr;
cout<<"\nStart Game? y/n: ";cin>>start;
if(start == "y"){
    cout <<"Game Has Started!";
    cout <<"\nLevel"<<level[0];
    cout <<"\nEnemy Binary: "<<enemy1<<" Has Appeared!\n";
    cout <<"What Will You Do?:\n"<<"Options:[1 = Decode, 2 = Exploit, 3 = Nothing]\n";
    
}
else if(start == "n"){
    cout.flush();
    usleep(2000);
    cout<<"Exiting....\n";
exit();
}
else if(option == 1){
   damage =  (rand() % 50);
   enemylife - damage;
   cout <<human <<"Used Decode!\n";
   cout <<enemy1<<"'s true name is: impostor!";
   cout <<human <<"Damaged Impostor with"<<damage;
   
}
else{
    cout.flush();
    cout<<"Error!\n";
    cout<<"Exitting...";
    usleep(2000);
    cout<<"Exitted";
    exit();
    
}
cout<<human<<":";cin >> option;
switch(option){
    case 1:
     damage =  1 + (rand() % 70);
   enemylife1 = enemylife - damage;
   cout <<human <<"Used Decode!\n";
   cout <<enemy1<<"'s true name is: impostor!\n";
   cout <<human<<" Damaged Impostor with ("<<damage<<") Damage!\n";
   cout <<"Impostor's Health: "<<enemylife1<<endl;
   cout<<"Try again and one shot your enemy!";
   break;
   case 2:
   damage =  1 + (rand() % 1000);
   cout<<human<<" Damaged Impostor  with: ("<<damage<<") Damage!\n";
   enemylife1 = enemylife - damage;
   cout <<"Impostor's Health: "<<enemylife1<<endl;
   cout<<"OverKill!!!";
   break;
  case 3:
   damage = 100;
   cout<<"Impostor Kills "<<human<<" with script-kiddie phishing attack!\n";
   cout<<"Try Again.";
}
 
switch(enemylife){
    case 0:
    cout<<"Level 1 Surpassed!\n";
    cout<<"Binary Impostor Exploited!";
}

return 0;
}
//Made By FonderElite
