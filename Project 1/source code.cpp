#include <iostream>
#include <string>
using namespace std;

struct Team {
    int id;
    string name;
    bool available;
    Team* next;
};

struct Incident {
    int id;
    string description, priority, status;
    Incident *prev, *next;
};

Team* head = nullptr;
Incident *first = nullptr, *last = nullptr;

void registerTeam() {
    Team* t = new Team;
    cout << "Enter Team ID and Name: ";
    cin >> t->id;
    cin.ignore();
    getline(cin, t->name);
    t->available = true;

    if (!head) {
        head = t;
        t->next = head;
    } else {
        Team* p = head;
        while (p->next != head) p = p->next;
        p->next = t;
        t->next = head;
    }
    cout << "Team registered!\n";
}

void reportIncident() {
    Incident* i = new Incident;
    cout << "Enter Incident ID: ";
    cin >> i->id;
    cin.ignore();
    cout << "Description: ";
    getline(cin, i->description);
    cout << "Priority (High/Medium/Low): ";
    getline(cin, i->priority);

    i->status = "Pending";
    i->prev = last;
    i->next = nullptr;

    if (last) last->next = i;
    else first = i;
    last = i;

    if (head) {
        Team* t = head;
        do {
            if (t->available) {
                t->available = false;
                i->status = "Assigned";
                cout << "Assigned to team: " << t->name << '\n';
                return;
            }
            t = t->next;
        } while (t != head);
    }
    cout << "No team available. Incident pending.\n";
}

void showTeams() {
    if (!head) {
        cout << "No teams registered.\n";
        return;
    }

    Team* t = head;
    do {
        cout << t->id << " - " << t->name << " - "
             << (t->available ? "Available" : "Assigned") << '\n';
        t = t->next;
    } while (t != head);
}

void showHistory() {
    if (!first) {
        cout << "No incidents recorded.\n";
        return;
    }

    for (Incident* i = first; i; i = i->next)
        cout << i->id << " - " << i->description
             << " - " << i->priority << " - " << i->status << '\n';
}

int main() {
    int choice;
    do {
        cout << "\n--- RESCUELOOP ---\n"
             << "1. Register Team\n"
             << "2. Report Incident\n"
             << "3. View Teams\n"
             << "4. View Incident History\n"
             << "5. Exit\nChoice: ";

        if (!(cin >> choice)) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Invalid input.\n";
            continue;
        }

        switch (choice) {
            case 1: registerTeam(); break;
            case 2: reportIncident(); break;
            case 3: showTeams(); break;
            case 4: showHistory(); break;
            case 5: cout << "Exiting RescueLoop.\n"; break;
            default: cout << "Invalid choice.\n";
        }
    } while (choice != 5);

    return 0;
}
