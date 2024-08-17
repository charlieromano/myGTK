project('gtk4-app','c',
  version: '1.0',
  default_options: ['warning_level=3']
)

gtk_dep = dependency('gtk4', version: '>=4.0')

cc = meson.get_compiler('c')

rt_lib = cc.find_library('rt', required:true)
pthread_lib = cc.find_library('pthread', required:true)

executable('gtk4-app',
  'main.c',
  dependencies: [gtk_dep, rt_lib, pthread_lib],
  install: true
)
