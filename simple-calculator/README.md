# Simple Calculator (C Programming)

The idea behind this program is simple. At launch, the application displays a menu listing five core arithmetic operations alongside an exit option. The user selects an operation by typing its corresponding integer. Once a valid option is selected, the program prompts for two target numbers and executes the requested mathematical operation.

### Program Architecture
At the start of the program, three primary integer variables are declared: `num1`, `num2`, and `option`. The entire life cycle runs inside an infinite `while (1==1)` loop to allow continuous calculations without restarting the application. Inside this loop, a `printf` block renders the user menu and prompts for choice input via `scanf`.

### Supported Operations
The calculator provides six total choices:
1. **Addition**
2. **Subtraction**
3. **Multiplication**
4. **Division**
5. **Modulus**
6. **Exit**

### Input Validation and Flow Control
* **Exit Routine**: If the user inputs `6`, a conditional `if` statement intercepts the choice and triggers a `break` statement to collapse the infinite loop and gracefully exit.
* **Out-of-Bounds Screening**: An `else if (option < 1 || option > 6)` filter screens out any invalid choice selectors. It informs the user of the error and leverages a `continue` statement to skip number collection and immediately reload the main menu.
* **Math Execution**: For choices `1` through `5`, the program branches into an isolated `else` block to collect `num1` and `num2` inputs. It then passes the user's menu choice to a nested `switch-case` control block to process the final math equation.

### Safety and Data Precision Rules
* **Explicit Typecasting**: Inside `case 4` (Division), the code manually converts `num1` into a `float` before running the division operator. This forces C to generate exact floating-point results and caps the precision output to a clean four decimal spaces (`%.4f`).
* **Divide-by-Zero Protection**: Both the Division and Modulus blocks contain isolated conditional logic (`if (num2 == 0)`) to check for a zero denominator. If detected, it overrides calculation routines to print a warning message, completely eliminating runtime crashes.
