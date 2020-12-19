#!/bin/bash

DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" >/dev/null 2>&1 && pwd )"
echo "ENV_TEST=\"Test $(date)\"" > $DIR/build/test_env.env