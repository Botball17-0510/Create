#!/bin/bash

if [ $# -ne 1 ]; then
  echo "Usage $0 <project name>"
  exit 0;
fi

scp -r include root@192.168.125.1:"Documents/KISS/Default\ User/$1/"
scp -r src root@192.168.125.1:"Documents/KISS/Default\ User/$1/"

exit 0;

