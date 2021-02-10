#!/bin/sh
find . -type f -name "*.sh" 2>/dev/null | rev | cut -f1 -d '/' | cut -c4- | rev
