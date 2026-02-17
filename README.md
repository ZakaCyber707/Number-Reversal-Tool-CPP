# Number Reversal Tool

This C++ console application takes a three-digit integer as input and outputs its digits in reverse order.

## Technical Implementation
The program uses mathematical operators to isolate each digit without converting the number to a string:
* **Hundreds Digit:** Extracted using integer division by 100 (`/ 100`).
* **Tens Digit:** Isolated using a combination of modulo (`% 100`) and division (`/ 10`).
* **Units Digit:** Isolated using the modulo operator (`% 10`).


## How to Run

### Using an IDE (Visual Studio / Dev-C++)
1. Open your IDE and create a new C++ Project.
2. Copy the code from `NumberReversal.cpp` into your project.
3. Press **F11** (Dev-C++) or **F5** (Visual Studio) to Compile and Run.

### Using Command Line (GCC)
1. Navigate to the file directory.
2. Compile: `g++ NumberReversal.cpp -o NumberReversal`
3. Run: `./NumberReversal`
