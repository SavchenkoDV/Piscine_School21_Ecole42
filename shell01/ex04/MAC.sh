#!/bin/sh
ifconfig | grep ether' ' | cut -c7- | tr -d ' '
