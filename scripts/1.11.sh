#!/bin/bash
echo 'Каталоги:'
ls -l /dev | grep ^d
echo 'Обычные файлы:'
ls -l /dev | grep -v ^d -v ^b -v ^l -v ^c
echo 'Символьные ссылки:'
ls -l /dev | grep ^l
echo 'Символьные устройства'
ls -a /dev | grep ^c
echo 'блочные устройства:'
ls -l /dev | grep ^b

