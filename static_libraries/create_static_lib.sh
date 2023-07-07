#!/bin/bash

C_Files=$(find . -maxdepth 1 -type f -name "*.c")

for file in $C_Files; do
	gcc -c "$file"
done

ar rcs libmy.a *.o

rm -f *.o
