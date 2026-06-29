#ifndef CLINICSYSTEM_H
#define CLINICSYSTEM_H
#include <string>


class Person{
private:
    std::string name;
    int age;
    std::string phone;
public:
// Constructor
    Person(std::string n, int a, std::string ph);
// setters & getters
    void setName(std::string n);
    std::string getName() const;
    void setAge(int a);
    int getAge() const;
    void setPhone(std::string ph);
    std::string getPhone() const;
// Display information
    virtual std::string toString() const;
// Destructor
    virtual ~Person();
};

class Doctor : public Person{
private:
    std::string doctorID;
    std::string specialty;
    double consultationFee;
public:
// Constructor
    Doctor(std::string n, int a, std::string ph, std::string d, std::string s, double f);
// setters & getters
    void setDoctorID(std::string d);
    std::string getDoctorID() const;
    void setSpecialty(std::string s);
    std::string getSpecialty() const;
    void setConsultationFee(double f);
    double getConsultationFee() const;
// Display information
    std::string toString() const override;
// Destructor
    ~Doctor();
};

class Patient : public Person{
private:
    std::string patientID;
public:
// Constructor
    Patient(std::string n, int i, std::string ph, std::string pi);
// setters & getters
    void setPatientID(std::string d);
    std::string getPatientID() const;
// Display information
    std::string toString() const override;
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
    RegularPatient(std::string n, int a, std::string ph, std::string pi, double f);
// setters & getters
    void setFee(double f);
    double getFee() const;
// Display information  
    std::string toString() const override;
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
    EmergencyPatient(std::string n, int a, std::string ph, std::string pi, double ex,double f);
// setters & getters
    void setExtraCharge(double ex);
    double getExtraCharge() const;
    void setFee(double f);
    double getFee() const;
// Display information  
    std::string toString() const override;
// calculate Fee
    double calculateFee(double baseFee)const override;
// Destructor
    ~EmergencyPatient();
};

class Appointment{
private:
    std::string time;
    std::string appointmentID;
    std::string date;
    Doctor doctor;
    Patient* patient;
public:
// Constructor
    Appointment(std::string id, std::string d, std::string t, Doctor doc, Patient* pat);
// setters & getters
    void setTime(std::string t);
    std::string getTime() const;
    void setAppointmentID(std::string id);
    std::string getAppointmentID() const;
    void setDate(std::string d);
    std::string getDate() const;
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

/*
 * ==========================================
 * Author  : Rahaf Abdullah
 * Major   : Computer and Network Engineering
 * Year    : First Year
 * GitHub  : https://github.com/Rah-f
 * Created : 30 June 2026
 * ==========================================
 */
