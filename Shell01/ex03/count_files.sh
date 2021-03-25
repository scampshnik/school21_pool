#!/bin/bash
find . \( ! -regex '.*/\..*' \) -type f -o -type d | wc -l | tr -d " "
