#!/bin/bash

if [ $# -ne 1 ]; then
  echo "Usage $0 <project name>"
  exit 0;
fi

scp -r root@192.168.125.1:"Documents/KISS/Default\ User/$1/include" ./
scp -r root@192.168.125.1:"Documents/KISS/Default\ User/$1/src" ./

exit 0;

