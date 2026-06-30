#include "ClinicSystem.h"
#include <iostream>
#include <string>

//PERSON CLASS
    Person::Person(std::string n, int a, std::string ph):name(n),age(a),phone(ph){}
    void Person::setName(std::string n){ name=n;}
    std::string Person::getName() const{ return name;}
    void Person::setAge(int a){age=a;}
    int Person::getAge() const{return age;}
    void Person::setPhone(std::string ph){phone=ph;}
    std::string Person::getPhone() const{return phone;}
    std::string Person::toString() const
    {return "Name: "+ name + "\nAge: " + std::to_string(age) + "\nPhone: "+ phone;}
    Person::~Person(){}

//DOCTOR CLASS
    Doctor::Doctor(std::string n, int a, std::string ph, std::string d, std::string s, double f):Person(n,a,ph),doctorID(d),specialty(s),consultationFee(f){}
    void Doctor::setDoctorID(std::string d){doctorID=d;}
    std::string Doctor::getDoctorID() const{return doctorID;}
    void Doctor::setSpecialty(std::string s){specialty=s;}
    std::string Doctor::getSpecialty() const{return specialty;}
    void Doctor::setConsultationFee(double f){consultationFee=f;}
    double Doctor::getConsultationFee() const{return consultationFee;}
    std::string Doctor::toString() const
    {return "--- Doctor Info ---\n"+Person::toString() +"\nDoctorID: "+ doctorID+"\nSpecialty: "+specialty+"\nConsultation Fee: "+ std::to_string(consultationFee)+" SAR\n";}
    Doctor::~Doctor(){}

//PATIENT CLASS
    Patient::Patient(std::string n, int a, std::string ph, std::string pi):Person(n,a,ph),patientID(pi){}
    void Patient::setPatientID(std::string pi){patientID=pi;}
    std::string Patient::getPatientID() const{return patientID;}
    std::string Patient::toString() const
    {return Person::toString() +"\nPatientID: "+ patientID;;}
    Patient::~Patient(){}

//REGULARPATIENT CLASS
    RegularPatient::RegularPatient(std::string n, int a, std::string ph, std::string pi, double f):Patient(n,a,ph,pi),fee(f){}
    void RegularPatient::setFee(double f){fee=f;}
    double RegularPatient::getFee() const{return fee;} 
    std::string RegularPatient::toString() const {
    double s = calculateFee(fee);
    return "--- Patient Info ---\nType: Regular Patient\n"+Patient::toString()+"\nCalculated Fee: "+ std::to_string(s)+" SAR";}
    double RegularPatient::calculateFee(double baseFee) const {return baseFee;}
    RegularPatient::~RegularPatient(){}

//EMERGENCYPATIENT CLASS
    EmergencyPatient::EmergencyPatient(std::string n, int a, std::string ph, std::string pi, double ex,double f):Patient(n,a,ph,pi),extraCharge(ex),fee(f){}
    void EmergencyPatient::setExtraCharge(double ex){extraCharge=ex;}
    double EmergencyPatient::getExtraCharge() const{return extraCharge;}
    void EmergencyPatient::setFee(double f){fee=f;}
    double EmergencyPatient::getFee() const{return fee;} 
    std::string EmergencyPatient::toString() const {
    double AA = calculateFee(fee);
    return "--- Patient Info ---\nType: Emergency Patient\n" + Patient::toString() + "\nExtra Charge: " + std::to_string(extraCharge) + " SAR"+"\nCalculated Fee: "+ std::to_string(AA) +" SAR";}
    double EmergencyPatient::calculateFee(double baseFee)const {return baseFee+extraCharge;}
    EmergencyPatient::~EmergencyPatient(){}

//APPOINTMENT CLASS
    Appointment::Appointment(std::string id, std::string d, std::string t, Doctor doc, Patient* pat):appointmentID(id), date(d), time(t), doctor(doc), patient(pat){}
    void Appointment::setAppointmentID(std::string id){appointmentID=id;}
    std::string Appointment::getAppointmentID() const{return appointmentID;}
    void Appointment::setDate(std::string d){date=d;}
    std::string Appointment::getDate() const{return date;}
    void Appointment::setTime(std::string t){time=t;}
    std::string Appointment::getTime() const{return time;}
    void Appointment::setDoctor(Doctor doc){doctor=doc;}
    Doctor Appointment::getDoctor() const{return doctor;}
    void Appointment::setPatient(Patient* pat){patient=pat;}
    Patient* Appointment::getPatient() const{return patient;}
    std::string Appointment::toString() const
    { double AA = calculateTotalFee();
    return "\n---Appointment---"+ std::string("\nAppointment ID: ")+ appointmentID + "\nDate: "+date+ "\nTime: " + time 
    +"\nDoctor: " + doctor.getName() + "\nPatient: " + patient->getName() + "\nTotal Fee: " + std::to_string(AA) + " SAR";}
    double Appointment::calculateTotalFee() const{ return patient->calculateFee(doctor.getConsultationFee());}
    Appointment::~Appointment(){}

/*
 * ==========================================
 * Rahaf Abdullah
 * Computer and Network Engineering
 * First Year
 * https://github.com/Rah-f
 * 30 June 2026
 * ==========================================
 */