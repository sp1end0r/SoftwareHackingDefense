# Lab2 : StaticAnalysisLab
- In this lab, we will analyze file using Linux command
- there are 3 files  
    1. example: ELF executable file
    2. TextFile : .txt file
    3. PngFile  : image file(.png)

- We will do static analysis of three different files using tools.

- tools : file, xxd, strings, ldd, readlef, objdump

### file : check file type
```
$ file [file name]
```

### xxd : veiw file data in form hex 
```
$ xxd [file name]
```
### strings : veiw ASIIC character sequence in file.
```
$ strings [file name]
```

### ldd : check denpendency about executable file
```
$ ldd [executable file]
```

### readelf : veiw ELFformat 
- view ELF header
```
$ readelf -e [ELFfile]
```
- view Program headers
```
$ readelf -S [ELF file]
```
- view Section Headers
```
$ readelf -l [ELF file]
```
## objdump : dissasemble executable file

```
$ objdump -M intel -d [ELF file]
```

