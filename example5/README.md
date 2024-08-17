# GTK Application template

## How to use 

1. Run the provided script to generate a new GTK application project.
2. Modify the 'main.c' and 'meson.build' files as needed.
3. Build and run your application using Meson and Ninja.

Then navigate to 
```bash
cd my_new_gtk_app
meson setup build
meson compile -C build
./build/my_new_gtk_app
```

