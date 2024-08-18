project('mygtkKeyboard','c',
  version: '1.0',
  default_options: ['warning_level=3']
)

gtk_dep = dependency('gtk4', version: '>=4.0')

cc = meson.get_compiler('c')

gnome = import('gnome')

rt_lib = cc.find_library('rt', required:false)

pthread_lib = cc.find_library('pthread', required:true)

app_schemas = gnome.compile_schemas()

app_resources = gnome.compile_resources(
  'exampleapp_resources', 'exampleapp.gresource.xml',
  source_dir: meson.current_source_dir()
)

executable('mygtkKeyboard',
  'exampleapp.c', 'exampleappwin.c', 
  'buttoncallbacks.c',
  'main.c', app_resources, app_schemas,
  dependencies: [gtk_dep, rt_lib, pthread_lib],
  install:true
)
