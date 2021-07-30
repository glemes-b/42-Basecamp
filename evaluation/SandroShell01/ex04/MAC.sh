#!/bin/sh
ifconfig | grep "ether" | cut -c 14-31