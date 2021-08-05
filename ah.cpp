#include <iostream>
using namespace std;

int main()
{
    int countP = 0, countD = 0;
    string patient, doctor;
    cin >> patient >> doctor;
    for(int i = 0 ; i < patient.length() ; i++)
    {
        if(patient[i] == 'a'){
            countP++;
        }
    }
    for(int j = 0 ; j < doctor.length() ; j++){
        if(doctor[j] =='a'){
            countD++;
        }
    }
    if(countD > countP){
        cout << "no\n";
    }else 
        cout<<"go\n";

}