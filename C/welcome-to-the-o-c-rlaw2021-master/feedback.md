

## Raymond Law

##### https://github.com/lmu-cmsi284-spring2019/welcome-to-the-o-c-rlaw2021

| | Feedback | Points |
| --- | --- | ---: |
| **Reverse Echo** | _reverse-echo.asm_ | |
| | **Assembles, links, and runs without unexpected errors** | |
| | Assembles, links, and runs successfully | 10 |
| | **Correct program output or result** | |
| | Correct output for given arguments, except callee-save registers are not restored in the correct order (–5); also, occasional incorrect reversals due to a missed restoration of `rdi` after `strlen` call (–10) | 10 |
| **GCD** | _gcd.asm_, _callgcd.c_ | |
| | **Compiles, assembles, links, and runs without unexpected errors** | |
| | Compiles, assembles, links, and runs successfully | 15 |
| | **Correct program output or result** | |
| | Correct output for given arguments, although recursion is accomplished via `jmp`—this _happens_ to work specifically for this algorithm but will not work for recursive algorithms in general; `call` is semantically more proper | 32 |
| | **Correct handling of invalid user input** | |
| | Sufficiently handles invalid input, although the error message is slightly different from what was specified in the instructions | 14 |
| | **Hard-to-maintain or error-prone code** | |
| _Reverse Echo_ | No major maintainability issues seen |  |
| _GCD_ | There are unused (vestigial? leftover?) data labels (`result`, `argError`, `argError2`) in the assembly code that could cause confusion if not cleaned upa variable (–3) | -5 |
| | **Hard-to-read code** | |
| _Reverse Echo_ | No major readability issues seen |  |
| _GCD_ | The tabs in the .c source make indentation inconsistent or excesive (8 characters) on certain display modes (e.g., direct terminal)—use spaces instead | -2 |
| **Version Control** | No major version control issues found |  |
| **Punctuality** | on time |  |
|  |  | **74/100** |
