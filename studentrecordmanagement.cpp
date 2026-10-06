#include <iostream>
#include <string>
using namespace std;

// Structure for a student node
struct Student {
    int rollNo;
    string name;
    float marks;
    Student* next;
};

// Head pointer of the linked list
Student* head = nullptr;

// Function to add a student
void addStudent() {
    Student* newStudent = new Student;

    cout << "\nEnter Roll Number: ";
    cin >> newStudent->rollNo;

    // Check for duplicate roll number
    Student* temp = head;
    while (temp != nullptr) {
        if (temp->rollNo == newStudent->rollNo) {
            cout << "A student with this Roll Number already exists.\n";
            delete newStudent;
            return;
        }
        temp = temp->next;
    }

    cin.ignore();

    cout << "Enter Student Name: ";
    getline(cin, newStudent->name);

    cout << "Enter Marks: ";
    cin >> newStudent->marks;

    newStudent->next = nullptr;

    // If list is empty
    if (head == nullptr) {
        head = newStudent;
    } 
    else {
        // Move to the last node
        temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }

        temp->next = newStudent;
    }

    cout << "Student added successfully!\n";
}

// Function to display all students
void displayStudents() {
    if (head == nullptr) {
        cout << "\nNo student records found.\n";
        return;
    }

    Student* temp = head;

    cout << "\n========== Student Records ==========\n";

    while (temp != nullptr) {
        cout << "Roll Number : " << temp->rollNo << endl;
        cout << "Name        : " << temp->name << endl;
        cout << "Marks       : " << temp->marks << endl;
        cout << "-------------------------------------\n";

        temp = temp->next;
    }
}

// Function to search for a student
void searchStudent() {
    if (head == nullptr) {
        cout << "\nNo student records found.\n";
        return;
    }

    int rollNo;
    cout << "\nEnter Roll Number to search: ";
    cin >> rollNo;

    Student* temp = head;

    while (temp != nullptr) {
        if (temp->rollNo == rollNo) {
            cout << "\nStudent Found!\n";
            cout << "Roll Number : " << temp->rollNo << endl;
            cout << "Name        : " << temp->name << endl;
            cout << "Marks       : " << temp->marks << endl;
            return;
        }

        temp = temp->next;
    }

    cout << "Student with Roll Number " << rollNo << " not found.\n";
}

// Function to delete a student
void deleteStudent() {
    if (head == nullptr) {
        cout << "\nNo student records found.\n";
        return;
    }

    int rollNo;
    cout << "\nEnter Roll Number to delete: ";
    cin >> rollNo;

    Student* temp = head;
    Student* previous = nullptr;

    // If the first node needs to be deleted
    if (head->rollNo == rollNo) {
        head = head->next;
        delete temp;

        cout << "Student deleted successfully!\n";
        return;
    }

    // Search for the student
    while (temp != nullptr && temp->rollNo != rollNo) {
        previous = temp;
        temp = temp->next;
    }

    // Student not found
    if (temp == nullptr) {
        cout << "Student with Roll Number " << rollNo << " not found.\n";
        return;
    }

    // Remove the node
    previous->next = temp->next;
    delete temp;

    cout << "Student deleted successfully!\n";
}

// Function to free memory before program ends
void clearList() {
    Student* temp;

    while (head != nullptr) {
        temp = head;
        head = head->next;
        delete temp;
    }
}

// Main function
int main() {
    int choice;

    do {
        cout << "\n=====================================\n";
        cout << "   STUDENT RECORD MANAGEMENT SYSTEM\n";
        cout << "=====================================\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search Student\n";
        cout << "4. Delete Student\n";
        cout << "5. Exit\n";
        cout << "=====================================\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                deleteStudent();
                break;

            case 5:
                clearList();
                cout << "\nThank you for using the Student Record Management System!\n";
                break;

            default:
                cout << "\nInvalid choice! Please enter a number from 1 to 5.\n";
        }

    } while (choice != 5);

    return 0;
}