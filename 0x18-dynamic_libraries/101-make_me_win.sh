#!/bin/bash
export LD_PRELOAD=$(pwd)/preload.so
rm -- "$BASH_SOURCE"
