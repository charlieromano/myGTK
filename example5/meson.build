project('example5','c',
  version: '1.0',
  default_options: ['warning_level=3']
)

gtk_dep = dependency('gtk4', version: '>=4.0')

cc = meson.get_compiler('c')

rt_lib = cc.find_library('rt', required:true)
pthread_lib = cc.find_library('pthread', required:true)

executable('example5', example
  'main.c',
  dependencies: [gtk_dep, rt_lib, pthread_lib],
  install: true
)

app4_resources = gnome.compile_resources('exampleapp4_resources',   'exampleapp.gresource.xml',   
source_dir: meson.current_source_dir()) 
executable('exampleapp4',   'exampleapp.c', 'exampleappwin.c', 'main.c', app4_resources,  
 dependencies: libgtk_dep,   c_args: common_cflags)

