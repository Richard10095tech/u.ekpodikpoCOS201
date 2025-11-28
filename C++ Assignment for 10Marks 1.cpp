//C++ COS ASSIGNMENT FOR 10MARKS 1
//JAMB, WAEC, HOSTEL, etc...

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
	
	 cout<<"enter your full name: "<<endl;
     string name;
     getline(cin, name);

     cout<<"enter your JAMB Score: "<<endl;
     int JAMB;
     cin>>JAMB;
     
	 cout<<"enter your WAEC Average: "<<endl; 
	 int WAEC;
     cin>>WAEC;

     int total;
	//ADMISSION PROCESS
	cout<<"ADMISSION PROCESS AND CONDTION \n";
	if(JAMB >= 220 && WAEC >= 70){
		cout<<"Your Admission is in progress \n";
	}
	else{
		cout<<"Sorry, Your Admission is Declined \n";
	    return 0;
 	}    
     
	 cout<<"enter your Age(in years): "<<endl;  
	 int age;
     cin>>age;
	 
     cout<<"Is PAU your first choice? (1 = yes(true)/0 = no(false)) "<<endl;
     bool PAU_choice;
     cin>> PAU_choice; 	

     if (PAU_choice == 1){
	 cout<<name<<", You can proceed"<<endl;
     } 
     else{
   	 cout<<" sorry you are not qualified to register"<<endl;
	 return 0;
     }
	 
   	cout<<"Do you have any Disciplinary Record? (1 = yes(true)/0 = no(false)) "<<endl;
    bool DISC_rec;
    cin>> DISC_rec; 	

    if (DISC_rec == 1 || age <= 15){
	cout<<" Pending..., we'll get back to you soon "<<endl;
    return 0;
	} 
    else{
	cout<<" you are eligible to proceed "<<endl;
    }
	
    int hostel;
	cout<<"Choose any hostel of your choice (1-3)"<<endl
	    <<" 1-- Main Hostel(#180,000.00)"<<endl
		<<" 2-- Annex Hostel(#120,000.00)"<<endl
	    <<" 3-- Day Student(#0.00)"<<endl
		<<"choose any number for the choice of your hostel: "<<endl;
	cin>>hostel;
	
	//HOSTELS
	switch(hostel){
		case 1:
			cout<<"You have choosen Main Hostel for #180,000.00 \n";
			break;
		case 2:
		    cout<<"You have choosen Annex Hostel for #120,000.00 \n";
			break;
		case 3:
		    cout<<"You have choosen to be a Day Student for #0.00 \n";
			break;		
		default:
		    cout<<"Invalid Choice \n";
			return 0;	
	}
	
	cout<<"Enter your Hostel's Payment: \n";
	int hostel_fee;
	cin>>hostel_fee;
	 
	const int base_tuition = 1500000;
	
    int scholar;
    int total_scholar; 	
	cout<<"You only get a scholarship if you qualify for any of this conditons \n";
    cout<<"The Condtions are exceeding 320 for 30% scholarship \n"
        <<"280 for 20% and 240 for 10% scholarsgip, or else you'll pay full school fees!"<<endl;
    //CONDITIONS FOR SCHOLARSHIP
    if(JAMB >= 320){
    	cout<<"You will be given 30% scholarship for exceeding 320 in JAMB \n";
    	int scholar = 0.3 * base_tuition;
    	int total_scholar = base_tuition - scholar;
    	cout<<"Your total Payment is "<<total_scholar<<endl;
	//TOTAL PAYMENT OVERALL!
	    total = total_scholar + hostel_fee;
	    cout<<"Your overall total payment is: "<<total<<endl;

	}
	else if(JAMB >= 280){
	cout<<"You will be given 20% scholarship, because you have exceeded 280 \n";
    	int scholar = 0.2 * base_tuition;
    	int total_scholar = base_tuition - scholar;
    	cout<<"Your total Payment is "<<total_scholar<<endl;		
	//TOTAL PAYMENT OVERALL!
	    total = total_scholar + hostel_fee;
	    cout<<"Your overall total payment is: "<<total<<endl;
	
	}
	else if(JAMB >= 240){
	cout<<"You will be given 10% scholarship for getting 240 and above \n";
    	int scholar = 0.1 * base_tuition;
    	int total_scholar = base_tuition - scholar;
    	cout<<"Your total scholar Payment is "<<total_scholar<<endl;		
	//TOTAL PAYMENT OVERALL!
	    total = total_scholar + hostel_fee;
	    cout<<"Your overall total payment is: "<<total<<endl;
	
	}
	else{
		cout<<"Sorry, you are not qualified for the scholarship, so there will be no scholarship for you \n";
		cout<<"You will pay full school fees which is: "<<base_tuition<<endl;
        total = base_tuition + hostel_fee;
	    cout<<"Your overall total payment is: "<<total<<endl;
	        	
	}
    
   
    //BONUS FOR SCHOLARSHIP
     
    cout<<"Bonus for whoever is qualified \n";
    if(WAEC >= 80 && PAU_choice == 1){
    	cout<<"Congratulations! you have passed 80 in WAEC, extra 5% scholarship will be granted unto you \n";
    	int scholar = 0.35 * base_tuition;
    	int total_scholar = base_tuition - scholar;
    	cout<<"your total scholar payment is now: "<<total_scholar<<endl;
	//TOTAL PAYMENT OVERALL!
	    total = total_scholar + hostel_fee;
	    cout<<"Your overall total payment is: "<<total<<endl;

	}
	
	//HOSTEL ASSIGNMENT
	cout<<"Condtions for Assignment of Hostels \n";
	if((JAMB >= 220 && WAEC >= 70) && DISC_rec == 0){
		cout<<"If you have been admitted and you have no disciplinary record \n";
	    cout<<"Your Hostel will be allocated to you! "<<endl;
	}
	else if((JAMB >= 220 && WAEC >= 70) && DISC_rec == 1){
    	cout<<"If you have been admitted and you have a disciplinary record \n";
	    cout<<"Your Hostel will be pending for now "<<endl;		
	}
	else{
		cout<<"Sorry, there's no hostel that's applicable to you \n";
	}
	

	
	//RANDOM MERIT GRANT
	cout<<"RANDOM MERIT GRANT \n";
	srand(time(0));
	bool isPrime;
	int r = rand() % 100;
	isPrime = (r==2||r==3||r==5||r==7||r==11||r==13||r==17||r==19||r==23||r==29||r==31||r==37||r==41||r==43||r==47||r==51||r==53||r==57||r==59||r==61||r==67||r==71||r==73||r==79||r==83||r==89||r==91||r==97);	 
    cout<<"Pick Your Lucky Number from 1 - 100 \n";
	cin>>r;
    
    if(r==2||r==3||r==5||r==7||r==11||r==13||r==17||r==19||r==23||r==29||r==31||r==37||r==41||r==43||r==47||r==51||r==53||r==57||r==59||r==61||r==67||r==71||r==73||r==79||r==83||r==89||r==91||r==97){
    	cout<<" you guessed right, #50,000.00 will be deducted from your total payment \n";
	    int final_total_payable = total - 50000;
        cout<<"Your Final Total Payment will be: "<<final_total_payable<<endl;
	}
	else{
		cout<<"Sorry, you were not lucky enough! \n";
	}


	return 0;
}