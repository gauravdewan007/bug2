# bug2
testa.cpp is test case cpp file
See makefile to build - bc and profiling js build of old and new is present with _old and _new suffix

Old tool (em++ 1.37.3)
36 kb bc file
Size without profiling:
492 kb(with exception and Oz) and 430 kb(without exceptions and Oz)

New tool (em++ 1.37.9)
39 kb bc file
Size without profiling:
508 kb(with exception and Oz) and 445 kb(without exceptions and Oz)

Difference:
Search for "function __ZL7MakeMapv" in js file to see differences in code generation (perhaps old tool was good at inlining) 