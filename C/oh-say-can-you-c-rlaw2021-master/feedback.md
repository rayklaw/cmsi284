

## Raymond Law

##### https://github.com/lmu-cmsi284-spring2019/oh-say-can-you-c-rlaw2021

| | Feedback | Points |
| --- | --- | ---: |
| _chord.c_ | **Compiles and runs without unexpected errors** | |
| | Compiles and runs successfully | 10 |
| | **Correct program output** | |
| | Correct | 25 |
| | **Correct handling of invalid user input** | |
| | Handling of invalid input matches specification | 15 |
| _interval.c_ | **Compiles and runs without unexpected errors** | |
| | Compiles and runs successfully | 10 |
| | **Correct program output** | |
| | Correct | 25 |
| | **Correct handling of invalid user input** | |
| | Handling of invalid input matches specification | 15 |
| | **Hard-to-maintain or error-prone code** | |
| _chord.c_ | The double-size `keyboard` array is not very maintainable in general; better to find a way to do wraparound on a single, non-redundant array (–5); checking for “no such key” inside of loop isn't best practice—something that isn't found is easily detectable with a check _after_ the whole loop runs its course, or via a boolean to indicate that something was found (–3) | -8 |
| _interval.c_ | The `for` loop that finds a key is redundantly replicated for each note of the interval, rather than being consolidated into a function so that the loop is coded only once | -3 |
| | **Hard-to-read code** | |
| _chord.c_ | No major formatting issues |  |
| _interval.c_ | The arrays in _interval.c_ are long enough to warrant reformatting as multiple lines | -1 |
| **Version Control** | 2 commits |  |
| **Punctuality** | on time |  |
|  |  | **88/100** |
