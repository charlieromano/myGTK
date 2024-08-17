#!/bin/bash

if [ -z "$1" ]; then
	echo "Usage: $0 <project_name>"
	exit 1
fi

PROJECT_NAME=$1
TEMPLATE_DIR="gtk_app_template"
TARGET_DIR="$PROJECT_NAME"

cp -r $TEMPLATE_DIR $TARGET_DIR

sed -i "s/gtk4-app-template/$PROJECT_NAME/" $TARGET_DIR/meson.build
sed -i "s/gtk4-app/$PROJECT_NAME/" $TARGET_DIR/meson.build

echo "New GTK project created at ./$TARGET_DIR

