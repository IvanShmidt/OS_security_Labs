#!/bin/bash
echo 'Процессов пользователя:'
echo '<User>'
whoami | ps -u | wc -l
echo 'Процессо пользователя root:'
ps -u root | wc -l
