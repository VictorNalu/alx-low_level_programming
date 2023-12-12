#!/bin/bash
gcc *.o -fPIC -shared -o libtest.so
LD_PRELOAD=$WPD/libtest.so
