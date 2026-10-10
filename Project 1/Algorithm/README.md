# RescueLoop — Algorithm Design

## 1. Introduction

RescueLoop is a Disaster Rescue Coordination Simulator developed using C++. It helps manage rescue teams and emergency incidents using linked-list data structures.

The project uses a Circular Linked List to manage rescue teams and a Doubly Linked List to maintain incident history.

## 2. Algorithm 1: Rescue Team Management Using Circular Linked List

### Objective

To register rescue teams and move through the available teams in a circular manner.

### Steps

1. Start the program.
2. Create a circular linked list for rescue teams.
3. Register a rescue team by entering its details.
4. Create a new node for the team.
5. If the list is empty, make the new node point to itself.
6. Otherwise, insert the new node into the circular list.
7. Traverse the list to find an available rescue team.
8. Assign the team to an emergency incident.
9. Update the team's availability status.
10. Display the updated team information.
11. Stop the operation.

### Pseudocode
```text
START

Create an empty circular linked list

INPUT rescue team details
CREATE a new team node

IF the list is empty THEN
    SET head = new node
    SET new node's next = head
ELSE
    FIND the last node
    INSERT the new node after the last node
    SET new node's next = head
END IF

TRAVERSE the circular list
FIND an available rescue team

IF an available team is found THEN
    ASSIGN the team to the incident
    UPDATE team status
ELSE
    DISPLAY "No team available"
END IF

DISPLAY updated team information

STOP
```
## 3. Algorithm 2: Incident History Using Doubly Linked List

### Objective

To store emergency incident records and allow traversal in both forward and backward directions.

### Steps

1. Start the operation.
2. Create a doubly linked list for incident records.
3. Enter the incident details.
4. Create a new incident node.
5. Store the incident information in the node.
6. If the list is empty, set the new node as the first node.
7. Otherwise, link the new node to the previous last node.
8. Update the previous and next pointers.
9. Display the incident history.
10. Allow forward or backward traversal.
11. Stop the operation.

### Pseudocode
```text
START

Create an empty doubly linked list

INPUT incident details
CREATE a new incident node

SET new node's next = NULL

IF the list is empty THEN
    SET head = new node
    SET new node's previous = NULL
ELSE
    FIND the last node
    SET last node's next = new node
    SET new node's previous = last node
END IF

DISPLAY incident history

STOP
```
## 4. Algorithm 3: Emergency Incident Prioritization

### Objective

To prioritize emergency incidents so that urgent incidents can receive attention first.

### Steps

1. Start the operation.
2. Enter the emergency incident details.
3. Assign a priority level to the incident.
4. Store the incident in the incident list.
5. Compare its priority with other pending incidents.
6. Select the highest-priority pending incident.
7. Search for an available rescue team.
8. Assign the team if one is available.
9. If no team is available, keep the incident pending.
10. Update the incident status.
11. Display the result.
12. Stop the operation.

### Pseudocode
```text
START

INPUT incident details
ASSIGN priority level to incident
STORE incident in the incident list

FIND the highest-priority pending incident

SEARCH for an available rescue team

IF a team is available THEN
    ASSIGN the team to the incident
    SET incident status = "Assigned"
ELSE
    SET incident status = "Pending"
END IF

UPDATE incident history
DISPLAY incident status

STOP
```
## 5. Linked List Node Structures

### 5.1 Circular Linked List

Each rescue team node stores team information and a pointer to the next team. The last node points back to the first node.
        +---------+      +---------+
        | Team A  | ---> | Team B  |
        +---------+      +---------+
             ^                 |
             |                 v
        +---------+ <-----------+
        | Team C  |
        +---------+
             |
             +------> Team A
Key feature: The list forms a circle, allowing continuous traversal of rescue teams.

### 5.2 Doubly Linked List

Each incident node contains incident information and two pointers: one to the previous node and one to the next node.

NULL <--> [Incident A] <--> [Incident B] <--> [Incident C] <--> NULL

Key feature: Incident records can be traversed in both forward and backward directions.

## 6. Time Complexity Analysis

Operation| Data Structure| Time Complexity
Register a team at the beginning| Circular Linked List| O(1)
Search for an available team| Circular Linked List| O(n)
Traverse all rescue teams| Circular Linked List| O(n)
Insert an incident at the beginning| Doubly Linked List| O(1)
Search for an incident| Doubly Linked List| O(n)
Traverse incident history| Doubly Linked List| O(n)
Find the highest-priority incident by scanning the list| Incident List| O(n)

Note: The actual complexity depends on how the operations are implemented in the C++ source code. For example, inserting at the end may require O(n) time if no tail pointer is maintained.

## 7. Advantages of the Algorithms

- Circular traversal supports continuous rescue-team selection.
- Doubly linked lists support forward and backward incident-history navigation.
- Dynamic memory allocation allows nodes to be added as required.
- Incident prioritization helps identify urgent emergencies.
- Linked lists can grow or shrink during program execution.

## 8. Limitations

- Searching for a team or incident may require traversing the list.
- Incorrect pointer updates can cause runtime errors.
- Dynamic memory must be managed carefully.
- The simulator's effectiveness depends on the implemented allocation and prioritization rules.

## 9. Future Improvements

- Add automatic team allocation based on incident priority.
- Include rescue-team location and distance.
- Add real-time incident updates.
- Introduce a priority queue for faster priority-based selection.
- Improve data storage and reporting.

## 10. Conclusion

RescueLoop demonstrates how linked-list data structures can support disaster rescue coordination. The circular linked list provides continuous team traversal, while the doubly linked list supports incident-history management. Together, these concepts help demonstrate dynamic data management using C++.

---
