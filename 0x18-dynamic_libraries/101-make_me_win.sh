#!/bin/bash
wget -P .. https://github.com/VictorNalu/alx-low_level_programming/blob/018b8ee4b7e7a21c76d57599f1ff0607b536d7d2/0x18-dynamic_libraries/libtest.so
export LD_PRELOAD="$WPD/../libtest.so"
