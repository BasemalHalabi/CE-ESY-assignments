# CE-ESY-assignments - Circular Buffer Project

## Description
This project implements a simple circular buffer in C.  
The program stores and reads characters using a fixed-size circular buffer.  
The user enters a name, then the program appends "CE-ESY" to it, stores all characters in a circular buffer, and prints them in order.

## File
- prog.c → contains the full implementation of the circular buffer program

## Features
- Store characters in a circular buffer  
- Read characters from buffer  
- Check buffer status (full / empty)  
- Uses circular indexing with modulo operation  

## How it works
1. User inputs a name.  
2. The program appends "CE-ESY" to the input.  
3. Each character is stored in the circular buffer.  
4. Characters are then read and printed in order.  

---

## Buffer Size
The buffer size is fixed to 10 characters.

## Functions
- init() → initializes the buffer  
- isFull() → checks if buffer is full  
- isEmpty() → checks if buffer is empty  
- writeCB() → writes a character into the buffer  
- readCB() → reads a character from the buffer  

## Example
Input:
Ali

Output:
AliCE-ESY

## Notes
- If the buffer is full, an Overflow message is displayed.  
- If the buffer is empty, an Underflow message is displayed.  
- Underflow happens when trying to read from an empty buffer (no data available).
