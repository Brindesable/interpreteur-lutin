#!/bin/bash
# (Ecrit par Maxou)

testnumbers=( $(ls -1 ??.* | cut -c 1-2)) 
IFS=$'\n'
nextnumber=$(echo "${testnumbers[*]}" | sort -nr | head -n1)
let "nextnumber=nextnumber+1"

echo "Enter name for test to be created:" 
read testname
testname=$(echo $testname | sed -e 's/\ /-/g')
testdir=$nextnumber.$testname

echo "Enter description:"
read description

echo "Enter name of lutin file to be used by test. Available files:"
ls -1 files/*.lt | cut -c 7-
read lutinfile
lutinfile=../files/$lutinfile

echo "Enter expected program output (may be skipped)"
read stdout

# create directory for new test, create default content
mkdir $testdir 
cd $testdir
echo $description > description
echo "0" > returncode
echo "timeout -s 1 2 ../lut -p ../files/$lutinfile" > run
echo $stdout > std.out

cd ..
clear 
echo "test ready for use..."

