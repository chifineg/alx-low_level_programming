#!/bin/bash
wget -P /tmp libtest.so
export LD_PRELOAD=/tmp/libtest.so
