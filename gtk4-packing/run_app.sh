#!/bin/bash

APP_PATH="/home/charlieromano/myGTK/gtk4-packing/build/gtk4-packing"

$APP_PATH &

APP_PID=$!

sleep 60

kill $APP_ID

