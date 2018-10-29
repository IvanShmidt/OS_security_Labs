#!/bin/bash
echo 'Процессов пользователя:'
whoami
ps -u `whoami` | wc -l
echo 'Процессо пользователя root:'
ps -u root | wc -l
