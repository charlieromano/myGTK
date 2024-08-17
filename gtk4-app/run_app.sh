#!/bin/bash

APP_PATH="/home/charlieromano/myGTK/gtk4-app/build/gtk4-app"

$APP_PATH &

APP_PID=$!

sleep 60

kill $APP_ID

