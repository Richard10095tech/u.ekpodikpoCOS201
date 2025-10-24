// C++ ASSIGNMENT WEEK 5
//Short Courses Registration(Decision Making)
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){

  cout<<"enter your full name: "<<endl;
  string name;
  cin>> name;

  cout<<"Are you a PAU student? (1 = yes(true)/0 = no(false)) "<<endl;
  bool PAU_student;
  cin>> PAU_student; 	

   if (PAU_student == 1){
	cout<<"You are a PAU student"<<endl;
  } 
   else{
	cout<<"You are not a PAU student"<<endl;
  } 
  
  cout<<"what is your registration fee? ";
  int regfee;                 //for registration fee
  cin>>regfee;

   //Choice of Courses
 string c1 = "Photography";  
 // regfee = 10000;
      
 string c2 = "Painting";
 // regfee = 8000;
 
 string c3 = "Fish Farming";
 // regfee = 15000;
 
 string c4 = "Baking";
 // regfee = 13000;
 
 string c5 = "Public Speaking";
 // regfee = 5000;
 
   //Choice of Locations and Their Lodging Fee per Day
 int Campus_House_A = 1;
 const int lodgfee_1 = 10000;
 
 int Campus_House_B = 2;
 const int lodgfee_2 = 2500;

 int Campus_House_C = 3;
 const int lodgfee_3 = 5000;

 int Campus_House_D = 4;
 const int lodgfee_4 = 13000;
 
 int Campus_House_E = 5;
 const int lodgfee_5 = 5000;

 cout<<"How many days do you want to use? "<<endl;
 int days;     //Amount of days used for lodging
 cin>> days;
 
 cout<<"enter location: "<<endl;
 int location;
 cin>> location;
 
 if (PAU_student == 1 && (location == 1 || location == 2)){
 	cout<<"5% discount on lodging for Campus House A is "<< 0.05 * lodgfee_1<<endl
 	    <<"total amount on discount for Campus House A is "<<lodgfee_1 - (0.05 * lodgfee_1)<<endl
	    <<"5% discount on lodging is  "<< 0.05 * lodgfee_2<<endl
		<<"total amount on discount for Campus House B is "<<lodgfee_2 - (0.05 * lodgfee_2)<<endl;
    }
    else {
 	cout<<"You are not qualified for either of Campus House A or B discount"<<endl;
    }
 
 if (days > 5 && (regfee > 12000)){
 	cout<<"3% discount on registration is "<< 0.03 * regfee<<endl
	    <<"total amount on discount for registration is "<<regfee - (0.05 * regfee);
  }
 else{
 	cout<<"You are not qualified for this registration discount"<<endl;
  }
	 
	 // total for everything
	 if(location == 1){
	 	int lodging_cost = lodgfee_1 * days;
	    int	total = regfee + lodgfee_1;
	 	cout<<"your total lodging cost is: "<<lodging_cost<<endl
	 	    <<"Your total cost of everything is: "<<total <<endl;
	 }
	 else if(location == 2){
	 	 int lodging_cost = lodgfee_2 * days;
	 	 int total = regfee + lodgfee_2;
	    	cout<<"your total lodging cost is: "<<lodging_cost<<endl
	 	        <<"Your total cost of everything is: "<<total <<endl;
	 }
	 else if(location == 3){
	 	 int lodging_cost = lodgfee_3 * days;
	 	 int total = regfee + lodgfee_3;
	 		cout<<"your total lodging cost is: "<<lodging_cost<<endl
	 	        <<"Your total cost of everything is: "<<total<<endl; 
     } 
      else if(location == 4){
      	 int lodging_cost = lodgfee_4 * days;
	 	 int total = regfee + lodgfee_4;
	 		cout<<"your total lodging cost is: "<<lodging_cost<<endl
	 	    <<"Your total cost of everything is: "<<total<<endl; 
     } 
      else if(location == 5){
	 		 int lodging_cost = lodgfee_5* days;
	     	 int total = regfee + lodgfee_5;
	 		cout<<"your total lodging cost is: "<<lodging_cost<<endl
	 	    <<"Your total cost of everything is: "<<total<<endl;
     } 
     else{
     	cout<<"You are not qualified to lodge in our company"<<endl;
	 }
	
	//Random Bonus!
    cout<<"Random Bonus for whoever is lucky eniugh!!"<<endl;
 	srand(time(0));
 	int	num_r = rand() % 100;
 	cout<< num_r;
 	
 	if (num_r == 7 || num_r == 77){
 		int total;
 		int bonus = total + 500;
 		cout<<"add 500 Naira to the total, "<<"total + bonus is "<<bonus<<endl;
	 } 

return 0;
}