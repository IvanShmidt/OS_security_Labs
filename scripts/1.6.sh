#!/bin/bash
echo 'Домашний каталог пользователя'
echo '<User>'
echo 'содержит обыных файлов:'
find ~ | wc -l
echo 'скрытых файлов:'
find ~ -type f | wc -l
