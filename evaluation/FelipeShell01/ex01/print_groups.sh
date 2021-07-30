#!/bin/sh
groups $FT_USER staff | tr ' ' ',' | tr -d '\n'