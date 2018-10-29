#!/bin/bash
cat ~/bash.txt | grep "000000" > /tmp/zeros
cat ~/bash.txt | grep -v "000000" > /tmp/nozeros
head -n10 /tmp/zeros
tail -n10 /tmp/zeros
head -n10 /tmp/nozeros
tail -n10 /tmp/nozeros
