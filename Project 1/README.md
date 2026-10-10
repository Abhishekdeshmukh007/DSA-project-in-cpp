🚨 RescueLoop

Disaster Rescue Coordination Simulator

<p align="center">
  <b>A C++ Data Structures and Algorithms Project</b><br>
  Smart simulation of rescue teams and emergency incidents using linked lists.
</p><p align="center">
  <img src="https://img.shields.io/badge/Language-C%2B%2B-blue?style=for-the-badge&logo=cplusplus" alt="C++">
  <img src="https://img.shields.io/badge/Data_Structures-Linked_Lists-green?style=for-the-badge" alt="Linked Lists">
  <img src="https://img.shields.io/badge/Platform-Windows%20%7C%20Linux-orange?style=for-the-badge" alt="Platform">
  <img src="https://img.shields.io/badge/Status-In_Development-yellow?style=for-the-badge" alt="Project Status">
</p>---

📑 Table of Contents

- "Introduction" (#-introduction)
- "Problem Statement" (#-problem-statement)
- "Objectives" (#-objectives)
- "Proposed Solution" (#-proposed-solution)
- "Key Features" (#-key-features)
- "Data Structures Used" (#-data-structures-used)
- "System Workflow" (#-system-workflow)
- "Example Scenario" (#-example-scenario)
- "Technologies Used" (#-technologies-used)
- "Project Structure" (#-project-structure)
- "How to Run" (#-how-to-run)
- "Advantages" (#-advantages)
- "Limitations" (#-limitations)
- "Future Scope" (#-future-scope)
- "Learning Outcomes" (#-learning-outcomes)
- "Disclaimer" (#-disclaimer)

---

📌 Introduction

RescueLoop is a C++-based disaster rescue coordination simulator designed to demonstrate the practical application of circular and doubly linked lists.

The system simulates rescue team management, emergency incident handling, team assignments, and incident history during disasters such as floods, fires, and earthquakes.

The main goal is to demonstrate how dynamic data structures can organize information and support decision-making in a simulated emergency environment.

💡 Problem Statement

During disasters, multiple emergencies may occur simultaneously while rescue teams have limited availability. Managing team assignments, incident priorities, and response records can become challenging.

RescueLoop provides an educational simulation that organizes rescue teams and incidents using linked lists, making it easier to demonstrate dynamic team traversal and incident-history management.

🎯 Objectives

- Manage rescue teams dynamically.
- Create and prioritize emergency incidents.
- Assign eligible teams using circular traversal.
- Maintain incident history using a doubly linked list.
- Track team availability and incident status.
- Implement insertion, deletion, and traversal operations.
- Apply Data Structures and Algorithms to a real-world-inspired problem.

---

💡 Proposed Solution

RescueLoop consists of two primary modules.

🔄 1. Rescue Team Management

A circular linked list maintains the rescue teams in a repeating sequence. The simulator traverses the list to find an eligible team and skips teams that are busy or unavailable.

↔️ 2. Incident History Management

A doubly linked list stores incident records, including the incident ID, disaster type, location, priority, assigned team, and status.

The operator can navigate through incident records in both forward and backward directions.

---

✨ Key Features

Feature| Description
👥 Team Management| Register and manage rescue teams.
🚨 Incident Creation| Record disaster type, location, and priority.
🔄 Circular Assignment| Search for eligible teams through circular traversal.
🟢 Availability Tracking| Track available, busy, and unavailable teams.
📋 Incident History| Store incident records in a doubly linked list.
↔️ History Navigation| Navigate through previous and next incidents.
⚡ Priority Handling| Apply predefined rules to handle urgent incidents.
📊 Statistics| Display incident and team summaries.

«Note: These features describe the planned functionality. Each feature should be marked as implemented only after it has been developed and tested.»

🧠 Data Structures Used

1. Circular Linked List

A circular linked list is used to manage and traverse rescue teams continuously.

Structure:

Team A → Team B → Team C
   ↑                 |
   └─────────────────┘

Operations:

- Insert a rescue team.
- Delete a rescue team.
- Traverse teams in a continuous cycle.
- Find an eligible team.
- Skip unavailable teams.

Why it is used: It allows traversal to continue from the beginning after reaching the last team.

2. Doubly Linked List

A doubly linked list is used to maintain and navigate incident history.

Structure:

NULL ← Incident 1 ⇄ Incident 2 ⇄ Incident 3 → NULL

Operations:

- Insert incident records.
- Delete incident records.
- Display incident history.
- Navigate backward and forward.
- Update incident details.

Why it is used: Each node contains pointers to both the previous and next nodes, enabling bidirectional traversal.

---

🔄 System Workflow

          START
            |
            v
    Register Rescue Teams
            |
            v
    Create Emergency Incident
            |
            v
     Enter Incident Priority
            |
            v
   Search Circular Team List
            |
            v
     Is a Team Available?
         /         \
       Yes          No
        |            |
        v            v
  Assign Team    Keep Pending
        |            |
        └─────┬──────┘
              |
              v
   Update Incident History
              |
              v
   Update Team and Incident Status
              |
              v
    Display Reports and History
              |
              v
       Continue or Exit

---

🌊 Example Scenario

Suppose a flood affects three areas and three rescue teams are available.

Incident ID| Location| Priority| Status
INC001| Area A| High| Assigned
INC002| Area B| Medium| Assigned
INC003| Area C| High| Pending

When a team becomes busy, the simulator searches for another eligible team. If no suitable team is available, the incident remains pending.

The operator can review the incident history to understand how the simulated rescue operation progressed.

This is an illustrative scenario. Actual assignments depend on the implemented rules.

---

🛠️ Technologies Used

Technology| Purpose
C++| Core programming language
Circular Linked List| Rescue team traversal
Doubly Linked List| Incident history navigation
Pointers| Connecting linked-list nodes
Dynamic Memory Allocation| Creating and deleting nodes
GCC / MinGW| Compiling the program
GitHub| Version control and project documentation

---

📁 Project Structure

DSA-project-in-cpp/
└── Project 1/
    ├── Algorithm/
    │   └── README.md
    ├── Flowchart/
    │   └── README.md
    ├── Output/
    │   └── README.md
    ├── source code/
    │   └── rescue.cpp
    └── README.md

▶️ How to Run

Prerequisites

- A C++ compiler such as GCC or MinGW.
- A terminal or command prompt.

Compile the Program

Run the following command from the repository root:

g++ -std=c++17 -Wall -Wextra "Project 1/source code/rescue.cpp" -o rescueloop

Execute the Program

Windows:

rescueloop.exe

Linux:

./rescueloop

«These commands assume "rescue.cpp" contains a complete, compilable program. The actual implementation must be verified before the commands can be considered working.»

---

✅ Advantages

- Demonstrates two linked-list structures in one project.
- Supports dynamic insertion and deletion.
- Enables circular traversal and bidirectional navigation.
- Connects data structures with disaster management.
- Requires no specialized hardware.
- Can be extended with additional simulation features.

⚠️ Limitations

- Uses simulated disaster information.
- Team assignment depends on predefined rules.
- Does not automatically use real-time geographical or weather data.
- A basic console version does not include a live map.
- Is not intended for real-world emergency dispatch.

🚀 Future Scope

- Develop a graphical dashboard.
- Add disaster map visualization.
- Simulate travel distances and response times.
- Introduce rescue vehicle and medical resource management.
- Save and load incident records using file handling.
- Implement configurable team skills and resource requirements.
- Compare assignment strategies using performance statistics.

📚 Learning Outcomes

- Understand circular and doubly linked lists.
- Implement insertion, deletion, and traversal.
- Practice pointers and dynamic memory allocation.
- Handle empty lists and single-node cases.
- Apply data structures to a simulated real-world problem.
- Improve C++ programming and problem-solving skills.
- Learn to document projects using GitHub.

---

📄 Disclaimer

RescueLoop is an educational simulation developed for learning and demonstration purposes. It is not designed or validated for real-world emergency response or life-critical decision-making.

---

<p align="center">
  <b>Built to learn. Designed to solve. 🚀</b>
</p>
