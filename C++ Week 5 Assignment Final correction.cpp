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
  getline(cin, name);

  cout<<"Are you a PAU student? (1 = yes(true)/0 = no(false)) "<<endl;
  bool PAU_student;
  cin>> PAU_student; 	

   if (PAU_student == 1){
	cout<<name<<", You are a PAU student"<<endl;
  } 
   else{
	cout<<"You are not a PAU student, sorry you are not qualified to register"<<endl;
	return 0;
  } 
  
  
  int course;
	cout<<"Enter Course (1-5)"<<endl
	    <<" 1-- Photography for 10000"<<endl
		<<" 2-- Painting for 8000"<<endl
	    <<" 3-- Fish Farming for 15000"<<endl
		<<" 4-- Baking for 13000"<<endl
		<<" 5-- public speaking for 5000"<<endl
		<<"choose any number for your course of choice: "<<endl;
	cin>>course;
   
   cout<<"what is your registration fee? ";
   int regfee;                 //for registration fee
   cin>>regfee;
	

   //Choice of Courses
 int photography = 1;  
 // regfee = 10000;
      
 int painting = 2;
 // regfee = 8000;
 
 int fish_farming = 3;
 // regfee = 15000;
 
 int baking = 4;
 // regfee = 13000;
 
 int public_speaking = 5;
 // regfee = 5000;
 
 if(course == 1){
 	cout<<"You have choosen photography and your fee will be 10000"<<endl;
 }
 else if(course == 2){
 	cout<<"You have choosen painting and your fee will be 8000"<<endl;
 }
 else if(course == 3){
 	cout<<"You have choosen fish farming and your fee will be 15000"<<endl;
 }
 else if(course == 4){
 	cout<<"You have choosen baking and your fee will be 13000"<<endl;
 }
 else if(course == 5){
 	cout<<"you have choosen public speaking and your fee will be 5000"<<endl;
 }
 else {
 	cout<<"Invalid course"<<endl;
 	return 0;
 }
 
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

 int location;
 cout<<"Enter Location (1-5)"<<endl
     <<" 1--Campus House A"<<endl
     <<" 2-- Campus House B"<<endl
     <<" 3-- Campus House C"<<endl
     <<" 4-- Campus House D"<<endl
     <<" 5-- Campus House E"<<endl
	 <<"choose any location of your choice: "<<endl;
    cin>>location;
     
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
	    <<"total amount on discount for registration is "<<regfee - (0.05 * regfee)<<endl;
  }
 else{
 	cout<<"You are not qualified for this registration discount"<<endl;
  }
	 
	 // total for everything
	 	 		//Random Bonus!
    cout<<"Random Bonus for whoever is lucky enough!!"<<endl;
 	srand(time(0));
 	int	num_r = rand() % 100;
 	cout<< num_r<<endl;
 	
	 if(location == 1 || (num_r == 7 || num_r == 77)){
	 	int lodging_cost = lodgfee_1 * days;
	    int	total = regfee + lodging_cost;
	    int bonus = total + 500;
	 	cout<<"your total lodging cost is: "<<lodging_cost<<endl
	 	    <<"Your total cost of everything is: "<<total <<endl
	 	    <<"add 500 Naira to the total, "<<"total + bonus is "<<bonus<<endl;  
 	    
	 }
	 else if(location == 2 || (num_r == 7 || num_r == 77)){
	 	 int lodging_cost = lodgfee_2 * days;
	 	 int total = regfee + lodging_cost;
	 	 int bonus = total + 500;
	    	cout<<"your total lodging cost is: "<<lodging_cost<<endl
	 	        <<"Your total cost of everything is: "<<total <<endl
	 	        <<"add 500 Naira to the total, "<<"total + bonus is "<<bonus<<endl;  
	 }
	 else if(location == 3 || (num_r == 7 || num_r == 77)){
	 	 int lodging_cost = lodgfee_3 * days;
	 	 int total = regfee + lodging_cost;
	 	 int bonus = total + 500;
	 		cout<<"your total lodging cost is: "<<lodging_cost<<endl
	 	        <<"Your total cost of everything is: "<<total<<endl
	            <<"add 500 Naira to the total, "<<"total + bonus is "<<bonus<<endl;
 	  } 
      else if(location == 4 || (num_r == 7 || num_r == 77)){
      	 int lodging_cost = lodgfee_4 * days;
	 	 int total = regfee + lodging_cost;
	     int bonus = total + 500; 
	 		cout<<"your total lodging cost is: "<<lodging_cost<<endl
	 	    <<"Your total cost of everything is: "<<total<<endl
	 	    <<"add 500 Naira to the total, "<<"total + bonus is "<<bonus<<endl;
	
     } 
      else if(location == 5 || (num_r == 7 || num_r == 77)){
	 		 int lodging_cost = lodgfee_5* days;
	     	 int total = regfee + lodging_cost;
	    	 int bonus = total + 500;   	 
	   	 	cout<<"your total lodging cost is: "<<lodging_cost<<endl
	 	    <<"Your total cost of everything is: "<<total<<endl
	 	    <<"add 500 Naira to the total, "<<"total + bonus is "<<bonus<<endl;	 
     } 
     else{
     	cout<<"You are not qualified to lodge in our company"<<endl;
	 }
   

return 0;
}