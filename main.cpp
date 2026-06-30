#include <iostream>
#include "ClinicSystem.h"


int main()
{
   Doctor d1("Dr. Abrar",24,"05000","d101","Cardiology",200);
    Doctor d2("Dr. Maisaa",31,"05111","d102","General Medicine",100);
std::cout<<"\n\n"<<d1.toString()<<"\n"<<d2.toString()<<"\n";
    Patient* pat1;
    pat1 = new RegularPatient("Raseel",16,"05222","p101",300);
    Patient* pat2;
    pat2 = new EmergencyPatient("Samia",18,"05333","p102",40,200);
std::cout<< pat1->toString()<<"\n\n"<<pat2->toString()<<"\n";
    Appointment a1("A301", "30/6/2026", "10:30 AM", d1, pat1);
    Appointment a2("A302", "30/6/2026", "11:00 AM", d2, pat2);
std::cout<<"\n\n"<<a1.toString()<<"\n"<<a2.toString()<<"\n";
    return 0;
}
/*
 * ==========================================
 * Rahaf Abdullah
 * Computer and Network Engineering
 * First Year
 * https://github.com/Rah-f
 * 30 June 2026
 * ==========================================
 */
