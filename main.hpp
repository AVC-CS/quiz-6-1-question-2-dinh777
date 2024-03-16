/***************************************************
 * Code your program here
 ***************************************************/
#include <iostream>
#include <cmath>
#include <iostream>
#include <fstream>

using namespace std;

//********************
// Declare Function Prototypes
//********************

int writeFile(string) ; 
int readFile(string);


// ******************************
// Implement all your functions here
// ******************************
int writeFile(string filename){

    ofstream ofs;

    ofs.open("employee.txt");
    if (!ofs)
    {
        cout << "File Open Error\n";
        exit(0);
    }

    /***************************************************
     * Code your program here
     ***************************************************/

    int empN ; // number of employees
   cout << "Enter number of employees: " << endl ; 
   cin >> empN ; 
   // note use of ofs and also endl!
   ofs << empN << endl ; 

    // data types of the info user will input
    int ID ; 
    string name ;
    string dept;
    double salary ; 

   for (int i=0 ; i<empN ; i++){ // collecting data on each employee
    cout << "Input one employee's ID, name, department, and salary: " << endl ; 
    cin >> ID >> name >> dept >> salary ; 
    // note use of ofs, and also \t and endl for proper spacing 
    ofs << ID << "\t" << name << "\t" << dept << "\t" << salary << endl; 
   }


    ofs.close();

    return(empN) ;
}

int readFile(string filename){

ifstream ifs;


    if (!ifs)
    {
        cout << "File Open Error\n";
        exit(0);
    }

    /***************************************************
     * Code your program here
     ***************************************************/

// make appropriate data type vars that the read data will be stored into
    int empN ; 
    int ID ; 
    string name ;
    string dept;
    double salary ; 
 

    ifs.open("employee.txt") ;
    ifs >> empN; // loading first line aka the employees into employee  var declared

    cout << "ID \t" << "Name \t" << "Dept \t" << "Salary \t" << endl;
    
	for (int i=0; i<empN ; i++){ // to account for all employees
		ifs >> ID >> name >> dept >> salary ;  // loading each word and line one by one 
										// from students.txt, note propoer data types for each
        cout << ID << "\t" << name << "\t" << dept << "\t" << salary << endl ; 
    }
    return(empN);

}




