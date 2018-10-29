#!/bin/bash
echo "list of args:"
echo "$*"
bash 3.1.sh $*
var=$@
bash 3.1.sh "$var"
