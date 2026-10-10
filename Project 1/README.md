🚨 RescueLoop — Disaster Rescue Coordination Simulator

📌 Introduction

RescueLoop is a C++-based disaster rescue coordination simulator developed using Circular Linked Lists and Doubly Linked Lists. It simulates the management of rescue teams, emergency incidents, team assignments, and incident history during disasters such as floods, fires, and earthquakes.

🎯 Objectives

- Manage rescue teams dynamically.
- Create and prioritize emergency incidents.
- Assign available teams using circular traversal.
- Maintain incident history using a doubly linked list.
- Track team availability and incident status.
- Demonstrate linked-list operations in a real-world-inspired application.

💡 Problem Statement

During disasters, multiple emergencies may occur simultaneously, while rescue teams have limited availability. Managing team assignments and maintaining incident records can be challenging.

RescueLoop provides an educational simulation for coordinating rescue teams and tracking emergency incidents using efficient linked-list operations.

⚙️ Data Structures Used

1. Circular Linked List

Used to manage rescue teams in a continuous cycle.

Example:
"Team A → Team B → Team C → Team A"

Operations:

- Insert and delete rescue teams.
- Traverse teams continuously.
- Find available teams.
- Skip busy or unavailable teams.

2. Doubly Linked List

Used to maintain and navigate incident history.

Example:
"NULL ← Incident 1 ⇄ Incident 2 ⇄ Incident 3 → NULL"

Operations:

- Insert and delete incident records.
- Display incident history.
- Navigate to previous and next incidents.
- Update incident information.

✨ Key Features

- Rescue team registration and management
- Emergency incident creation
- Priority-based incident handling
- Dynamic team assignment
- Team availability tracking
- Incident status updates
- Forward and backward incident navigation
- Basic response statistics
- Simulated emergency reassignment

🔄 System Workflow

1. Register rescue teams.
2. Create an emergency incident.
3. Enter the incident type, location, and priority.
4. Search for an eligible rescue team using a circular linked list.
5. Assign the team or keep the incident pending.
6. Store incident details in a doubly linked list.
7. Update team availability and incident status.
8. Display incident history and statistics.

🛠️ Technologies Used

- Programming Language: C++
- Data Structures: Circular Linked List and Doubly Linked List
- Concepts: Pointers, dynamic memory allocation, insertion, deletion, and traversal
- Compiler: GCC / MinGW
- Platform: Windows / Linux

🌊 Example Scenario

Suppose a flood affects three areas and three rescue teams are available.

Incident| Location| Priority| Status
INC001| Area A| High| Assigned
INC002| Area B| Medium| Assigned
INC003| Area C| High| Pending

The simulator searches for eligible teams, records incident assignments, and keeps incidents pending when no suitable team is available.

📁 Project Structure

Project 1/
├── Algorithm/
│   └── README.md
├── Flowchart/
│   └── README.md
├── Output/
│   └── README.md
├── source code/
│   └── rescue.cpp
└── README.md

✅ Advantages

- Demonstrates two linked-list structures in one application.
- Supports dynamic insertion and deletion.
- Enables circular traversal and bidirectional navigation.
- Connects data structures with disaster management.
- Requires no specialized hardware.
- Can be extended with a graphical interface.

⚠️ Limitations

- Uses simulated disaster information.
- Team assignments depend on predefined rules.
- Does not use real-time geographical or weather data.
- Is not suitable for real-world emergency dispatch.

🚀 Future Scope

- Develop a graphical dashboard.
- Add disaster map visualization.
- Simulate response times and travel distances.
- Add rescue vehicle and medical resource management.
- Save incident records using file handling.
- Introduce more advanced team assignment strategies.

📚 Learning Outcomes

- Understand circular and doubly linked lists.
- Implement insertion, deletion, and traversal.
- Practice pointers and dynamic memory allocation.
- Apply data structures to a simulated real-world problem.
- Improve C++ programming and problem-solving skills.

👩‍💻 Project Information

- Project Name: RescueLoop
- Subject: Data Structures and Algorithms
- Language: C++
- Project Type: Academic Project
- Status: In Development

📄 Disclaimer

RescueLoop is an educational simulation developed for learning purposes. It is not intended for real-world emergency response or life-critical decision-making.
