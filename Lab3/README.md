# Lab3 : Dynamic Analysis
- In this lab, we will analyze executable file using "gdb"

- We also do reverse engineering

- We will understand stack frame.

- We will find Password with dynamic analysis.

- tools : gdb(plugin : peda)

### basic commmand for gdb
- open executable file with gdb 
```
$ gdb [Executable File]
```

- close gdb 
```
gdb-peda$ q
```

- disassembly function
```
gdb-peda$ disassemble [function name]
```
- set break point for function
```
gdb-peda$ break [function name]
```
- set break point for specific address
```
gdb-peda$ break *[address or function name + offset]
```

- delete break point
```
gdb-peda$ d [breakpoint number]
```

- run executable program with gdb
```
gdb-peda$ r <argument>
```

- execute each assembly line
    - 
```
gdb-peda$ s <the number of line : default = 1>
gdb-peda$ n <the number of line :default = 1>
```

* what is different "s(step)" and "n(next)"?
    - when instruction to execute is "call", s gose inside the function and executes the instruction.
    - but, n dosen't go inside the function and execute next instruction.

- continue program after breakpoint until program terminated or meets other breakpoint.
```
gdb-peda$ c
```

- view data in regiser

```
gdb-peda$ i r
```

- view data in memory
    - x/o : Express it in octadecimal
    - x/x :Express it in hexdecimal
    - x/u : Express it in decimal
    - x/b : Express it per  1 byte
    - x/h : Express it per 2byte
    - x/w : Express it per 4byte(word)
    - x/g : Express it per 8byte

```
gdb-peda$ x <address>
```

