#!/bin/bash
cat $(find ~/ -maxdepth 1 -type f | grep "\.txt") > /tmp/my_data.txt
echo "List of files:"
ls ~/ | grep "\.txt"
echo "Strings in all files:"
wc /tmp/my_data.txt -l
echo "Bytes in all files:"
du /tmp/my_data.txt | cut -f1
rm /tmp/my_data.txt
