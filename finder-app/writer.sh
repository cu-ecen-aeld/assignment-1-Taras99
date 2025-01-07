#!/bin/bash

# Check if exactly two arguments are provided
if [ "$#" -ne 2 ]; then
  echo "Error: Two arguments required - <writefile> and <writestr>"
  exit 1
fi

writefile=$1
writestr=$2

# Create the directory path if it doesn't exist
mkdir -p "$(dirname "$writefile")"

# Attempt to write the string to the file
if ! echo "$writestr" > "$writefile"; then
  echo "Error: Could not create file $writefile"
  exit 1
fi

# Script succeeded
exit 0

