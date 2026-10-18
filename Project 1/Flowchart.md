# RescueLoop — System Flowchart

## Complete System Workflow
```mermaid
flowchart TD
    A([START]) --> B[Initialize System]
    B --> C[Initialize Circular and Doubly Linked Lists]
    C --> D[Display Main Menu]

    D --> E{Select Operation}

    E -->|1. Manage Teams| F[Enter Rescue Team Details]
    F --> G[Create and Insert Team Node]
    G --> H[Update Circular Linked List]
    H --> D

    E -->|2. Report Incident| I[Enter Incident Details]
    I --> J[Assign Incident Priority]
    J --> K[Create Incident Record]
    K --> L[Insert Record into Incident History]
    L --> M[Search for Available Rescue Team]

    M --> N{Team Available?}
    N -->|Yes| O[Assign Team to Incident]
    N -->|No| P[Mark Incident as Pending]

    O --> Q[Update Team Availability]
    Q --> R[Update Incident Status]
    P --> R

    R --> D

    E -->|3. View Teams| S[Traverse Circular Linked List]
    S --> T[Display Rescue Team Details]
    T --> D

    E -->|4. View Incident History| U[Traverse Doubly Linked List]
    U --> V[Display Incident Records]
    V --> D

    E -->|5. Exit| W[Release Allocated Memory]
    W --> X([END])
```
## Flowchart Explanation

1. Initialization: Prepare the linked lists and initialize the system.
2. Team Management: Register rescue teams and maintain them in a circular linked list.
3. Incident Reporting: Accept incident details, assign priority, and save the incident record.
4. Team Allocation: Search for an available team. Assign it if available; otherwise, mark the incident as pending.
5. Team Display: Traverse the circular linked list to show registered teams.
6. Incident History: Traverse the doubly linked list to display stored incident records.
7. Exit: Release dynamically allocated memory and terminate the program.

Data structures: Circular Linked List and Doubly Linked List.
