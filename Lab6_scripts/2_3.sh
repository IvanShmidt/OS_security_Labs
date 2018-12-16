#!/bin/bash

gcc 2_3.c -o 2_3

./2_3 & pstree | grep --color 2_3
