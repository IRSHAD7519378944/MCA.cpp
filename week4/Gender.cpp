#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;

int main() {
    string firstName, lastName;
    
    cout << "What is your Name? ";
    cin >> firstName >> lastName;
    
    // Capitalize first letter for display
	firstName[0] = toupper(firstName[0]);
	for(int i=1; i<firstName.size(); i++)
    firstName[i] = tolower(firstName[i]);

    
    // Capitalize first letter of firstName
    firstName[0] = toupper(firstName[0]);
    for(int i=1; i<firstName.size(); i++)
        firstName[i] = tolower(firstName[i]);
    
    // Convert lastName to lowercase for case-insensitive comparison
    transform(lastName.begin(), lastName.end(), lastName.begin(), ::tolower);
    
    
    if(firstName == "Mohammad" || firstName == "Mohd" || firstName == "Md") 
	{
		transform(lastName.begin(), lastName.end(), lastName.begin(), ::toupper);
    	cout << "\nHello, Mr. " << lastName << ". Thank you for joining us." << endl;
    }else
    // ---------------- Boys Last Names ----------------
    if(lastName == "ansari" || lastName == "khan" || lastName == "siddiqui" || lastName == "qureshi" || 
       lastName == "sheikh" || lastName == "syed" || lastName == "mirza" || lastName == "farooqui" || 
       lastName == "hashmi" || lastName == "mallick" || lastName == "chishti" || lastName == "naqvi" || 
       lastName == "rizvi" || lastName == "husen" || lastName == "butt" || lastName == "ali" || 
       lastName == "pathan" || lastName == "kabir" || lastName == "mansuri" || lastName == "faridi" || 
       lastName == "shafi" || lastName == "taqi" || lastName == "usmani" || lastName == "bukhari" || 
       lastName == "dehlvi" || lastName == "ahmed" || lastName == "ahmad" || lastName == "nadaf" ||
       // ---------------- Other communities ----------------
       lastName == "kumar" || lastName == "sharma" || lastName == "verma" || lastName == "singh" || 
       lastName == "gupta" || lastName == "yadav" || lastName == "rathore" || lastName == "patel" || 
       lastName == "rao" || lastName == "choudhary") 
    {
        cout << "\nHello, Mr. " << firstName << ". Thank you for joining us." << endl;
    }
    
    // ---------------- Girls Last Names ----------------
    else if(lastName == "fatima" || lastName == "ayesha" || lastName == "khatoon" || lastName == "begum" || 
       lastName == "bano" || lastName == "sultana" || lastName == "zohra" || lastName == "humera" || 
       lastName == "naz" || lastName == "rubina" || lastName == "samina" || lastName == "yasmin" || 
       lastName == "tahira" || lastName == "mahjabeen" || lastName == "nighat" || lastName == "shagufta" || 
       lastName == "parveen" || lastName == "nuzhat" || lastName == "kaneez" || lastName == "hina" || 
       lastName == "fareeha" || lastName == "shabana" || lastName == "rukhsana" || lastName == "zeenat" || 
       lastName == "amna" ||
       // ---------------- Other communities ----------------
       lastName == "kumar" || lastName == "sharma" || lastName == "verma" || lastName == "singh" || 
       lastName == "gupta" || lastName == "yadav" || lastName == "rathore" || lastName == "patel" || 
       lastName == "rao" || lastName == "choudhary") 
    {
        cout << "\nHello, Ms. " << firstName << ". Thank you for joining us." << endl;
    }
	
	else{
    	cout << "Please wait!" << endl;
	}
	cin.ignore();
    cin.get();
    
    return 0;
}

