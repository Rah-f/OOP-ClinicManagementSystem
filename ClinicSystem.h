#ifndef CLINICSYSTEM_H
#define CLINICSYSTEM_H
#include <string>
using namespace std;

class Person{
private:
    string name;
    int age;
    string phone;
public:
// Constructor
    Person(string n, int a, string ph);
// setters & getters
    void setName(string n);
    void setAge(int a);
    void setPhone(string ph);
    string getName() const;
    int getAge() const;
    string getPhone() const;
// Display information
    virtual string toString() const;
// Destructor
    virtual ~Person();
};

class Doctor : public Person{
private:
    string doctorID;
    string specialty;
    double consultationFee;
public:
// Constructor
    Doctor(string n, int a, string ph, string d, string s, double f);
// setters & getters
    void setDoctorID(string d);
    string getDoctorID() const;
    void setSpecialty(string s);
    string getSpecialty() const;
    void setConsultationFee(double f);
    double getConsultationFee() const;
// Display information
    string toString() const override;
// Destructor
    ~Doctor();
};

class Patient : public Person{
private:
    string patientID;
public:
// Constructor
    Patient(string n, int i, string ph, string pi);
// setters & getters
    void setPatientID(string d);
    string getPatientID() const;
// Display information
    string toString() const override;
// calculate Fee
    virtual double calculateFee(double baseFee)const=0;
// Destructor
    virtual ~Patient();
};

class RegularPatient : public Patient{
private:
    double fee;
public:
// Constructor
    RegularPatient(string n, int a, string ph, string pi, double f);
// setters & getters
    void setFee(double f);
    double getFee() const;
// Display information  
    string toString() const override;
// calculate Fee
    double calculateFee(double baseFee) const override;
// Destructor
    ~RegularPatient();
};

class EmergencyPatient : public Patient{
private:
    double extraCharge;
    double fee;
public:
// Constructor
    EmergencyPatient(string n, int a, string ph, string pi, double ex,double f);
// setters & getters
    void setExtraCharge(double ex);
    double getExtraCharge() const;
    void setFee(double f);
    double getFee() const;
// Display information  
    string toString() const override;
// calculate Fee
    double calculateFee(double baseFee)const override;
// Destructor
    ~EmergencyPatient();
};

class Appointment{
private:
    string time;
    string appointmentID;
    string date;
    Doctor doctor;
    Patient* patient;
public:
// Constructor
    Appointment(string id, string d, string t, Doctor doc, Patient* pat);
// setters & getters
    void setTime(string t);
    string getTime() const;
    void setAppointmentID(string id);
    string getAppointmentID() const;
    void setDate(string d);
    string getDate() const;
    void setDoctor(Doctor doc);
    Doctor getDoctor() const;
    void setPatient(Patient* pat);
    Patient* getPatient() const;
// Display information
    void displayInfo() const;
// calculate Fee
    double calculateTotalFee() const;
// Destructor
    ~Appointment();
};
#endif