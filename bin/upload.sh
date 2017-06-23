#!/bin/bash

path="Default\ User/gcer2017"

if [ $# -eq 2 ]; then
  path=$2
fi

scp -r . root@$1:"Documents/KISS/$path/"

exit 0;

