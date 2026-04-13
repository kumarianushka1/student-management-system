#include <iostream>
using namespace std;

class Student {
public:
    int roll;
    string name;
    float marks;

    void input() {
        cout << "Enter Roll No: ";
        cin >> roll;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display() {
        cout << "Roll No: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
        cout << "-------------------" << endl;
    }
};

int main() {
    Student s[100];
    int count = 0;
    int choice;

    do {
        cout << "\n1. Add Student\n2. Display Students\n3. Search Student\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                s[count].input();
                count++;
                break;

            case 2:
                for(int i = 0; i < count; i++) {
                    s[i].display();
                }
                break;

            case 3: {
                int r, found = 0;
                cout << "Enter Roll No to search: ";
                cin >> r;

                for(int i = 0; i < count; i++) {
                    if(s[i].roll == r) {
                        s[i].display();
                        found = 1;
                        break;
                    }
                }

                if(!found) {
                    cout << "Student not found!\n";
                }
                break;
            }

            case 4:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while(choice != 4);

    return 0;
}