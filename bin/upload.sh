#!/bin/bash

path=a/b

if [ $# -eq 1 ]; then
  path=$1
fi

scp -r include root@192.168.125.1:"Documents/KISS/$path/"
scp -r src root@192.168.125.1:"Documents/KISS/$path/"

exit 0;

