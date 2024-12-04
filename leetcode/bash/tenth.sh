#!/bin/bash
if [ $(wc -l < file3.txt) -ge 10 ]; then
 head -10 file.txt | tail -2
fi
