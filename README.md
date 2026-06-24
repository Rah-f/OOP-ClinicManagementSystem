# Clinic Management System

# Project Description
Design and implement a Clinic Management System that models a simple real-world clinic.
The system should include:
* Doctors and patients
* Appointments between them
* Displaying information about clinic entities
* Calculating patient fees
The design must demonstrate core OOP concepts studied in the course.

# Project Objectives
* Apply encapsulation using private data and public methods
* Design systems using inheritance (base & derived classes)
* Implement polymorphism using virtual functions
* Model real-world relationships using composition
* Practice writing clean, modular, and well-structured C++ code

# Required Class Structure
1. Base Class: Person
2. Doctor (inherits from Person)
3. Patient (inherits from Person)
4. RegularPatient (inherits from Patient)
5. EmergencyPatient (inherits from Patient)
6. Composition Class: Appointment

# Classes Requirements:
* All variables must be private and accessed through appropriate getters and setters.
* Each class must include constructors, setters (mutators), getters (accessors), if applicable,
and a toString() method to display object information.
* Derived classes must implement and properly override the required methods.
* The program must demonstrate polymorphism using a base class pointer (Patient)* when
calling overridden methods

# Main Function Demonstration:
* Create multiple doctors
* Create multiple patients (different types)
* Create appointments
* Display appointment details
* Show fee calculation
* Use the `toString()` method to display the information clearly.
* It is recommended to use a Patient* when working with different patient types to
demonstrate polymorphism.

# File Structure:
* ClinicSystem.h
Contains all class declarations (Person, Doctor, Patient, RegularPatient, EmergencyPatient,
Appointment).
* ClinicSystem.cpp
Contains the implementation of all class member functions.
* main.cpp
Contains the main() function used to create objects and demonstrate the system.


