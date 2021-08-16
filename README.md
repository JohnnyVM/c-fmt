# c-fmt
Small fmt library for strings in C
---
This is not similar to [{fmt}](https://github.com/fmtlib/fmt)
C or i have sintax limitations for detect the type of the arguments passed
i cannot imagine how get the type in a function directly as
```c
fmt("{}", 43); // type?
```
Then i split this in 2 steps, declaration and format
```c
fmt_format_arg(char*, len, "fmt string {name/position:format}", fmt("name/position", value));
```
or other option
```c
fmt_var(fmt_list, "name", value); // fmt_list is a pointer to struct
...
fmt_format(char*, len, "fmt string {name/position:format}", fmt_list);
```

