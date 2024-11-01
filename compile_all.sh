#!/bin/bash

# Check if a directory is provided as an argument
if [ $# -eq 1 ]; then
    dir="$1"
else
    dir="."
fi

# Create the bin directory if it doesn't exist
mkdir -p ./bin

# Change to the specified directory
cd "$dir" || { echo "Directory not found"; exit 1; }

# Loop through all .c files in the directory
for file in *.c; do
    if [ -e "$file" ]; then
        # Compile each C file to an object file with .o extension in ./bin
        clang -c "$file" -o "./bin/${file%.c}.o"
        echo "Compiled $file to ./bin/${file%.c}.o"
    else
        echo "No C files found in the directory."
        break
    fi
done