#!/bin/bash

path=a/b

if [ $# -eq 1 ]; then
  path=$1
fi

scp -r root@192.168.125.1:"Documents/KISS/$path/include" ./
scp -r root@192.168.125.1:"Documents/KISS/$path/src" ./

exit 0;

