# HashTable

Hash table implementation in C++ without using STL.  
This project uses chaining with linked lists to handle collisions.

## Features
- Simple and efficient hash table
- Uses `key % 1000` as the hash function
- Implements basic operations:
  - `INSERT`
  - `DELETE`
  - `SEARCH`
- Reads commands from `commands.txt` and writes output to `output.txt`
- Designed for university-level projects with manual memory management

## Files
- `HashTable.h` – Hash table structure and function declarations
- `HashTable.cpp` – Full implementation of the hash table logic

## Notes
No STL containers are used (e.g., `vector`, `unordered_map`, etc.)
