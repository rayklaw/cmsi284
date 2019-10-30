

## Raymond Law

##### https://github.com/lmu-cmsi284-spring2019/dejassembly-vu-rlaw2021

| | Feedback | Points |
| --- | --- | ---: |
| **Make Quarter Change** | _make-quarter-change.asm_ | |
| | **Assembles, links, and runs without unexpected errors** | |
| | Assembles, links, and runs successfully | 10 |
| | **Correct program output** | |
| | Correct output for given arguments but total amount is a direct argv echo instead of its converted value—this makes it unclear to the user why certain input like non-numbers or decimals produce the reported number of quarters (–3); also, output is missing newlines, making the next prompt unclear and harder to see (–1) | 21 |
| | **Correct handling of invalid user input** | |
| | Number conversion check incorrectly looks at `rdi` rather than `rax`, resulting in occasional anomalous messages when arguments are bad (the check is unnecessary either way) | 10 |
| **Is Probably Leap Year?** | _is-probably-leap-year.asm_ | |
| | **Assembles, links, and runs without unexpected errors** | |
| | Assembles, links, and runs successfully | 10 |
| | **Correct program output** | |
| | Correct output for given arguments but output is missing newlines, making the next prompt unclear and harder to see | 24 |
| | **Correct handling of invalid user input** | |
| | Number conversion check incorrectly looks at `rdi` rather than `rax`, resulting in occasional anomalous messages when arguments are bad (the check is unnecessary either way) | 10 |
| **Hard-to-maintain or error-prone code** | Criterion lifted since feedback was not available |  |
| **Hard-to-read code** | Criterion lifted since feedback was not available |  |
| **Version Control** | No major version control issues found |  |
| **Punctuality** | committed on 4/17/2019, 12:35am | -1 |
|  |  | **84/100** |
