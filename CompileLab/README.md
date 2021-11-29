# Lab1 : CompileLab
- In this lab, we will look at the process of generating an executable file using C source code
- tool: gcc(GNU C Compiler)

### Preprocessing
- generate preprocessed code(.i) from source code (.c)
```
$ gcc -E Example.c -o Example.i
```

### Compile
- generate assembly file(.s) from preprocessed code (.i)
```
$ gcc -S Example.i
```

### Assembly
- generate object file(.o) from assembly file(.s)
```
$ gcc -c Example.s
```

### Link
- generate Executable file from ojbect file(.o)
```
$ gcc Example.o -o Example
```
