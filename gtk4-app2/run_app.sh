#!/bin/bash

APP_PATH="/home/charlieromano/myGTK/gtk4-app2/build/gtk4-app2"

$APP_PATH &

APP_PID=$!

sleep 120

kill $APP_ID

