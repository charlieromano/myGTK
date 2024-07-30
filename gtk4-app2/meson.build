project('gtk4-app2','c',
  version: '1.0',
  default_options: ['warning_level=3']
)

gtk_dep = dependency('gtk4', version: '>=4.0')

cc = meson.get_compiler('c')

pigpio_inc = include_directories('/usr/local/include')
pigpio_lib = cc.find_library('pigpio', required:true, dirs:'/usr/local/lib')
rt_lib = cc.find_library('rt', required:true)
pthread_lib = cc.find_library('pthread', required:true)

executable('gtk4-app2',
  'main.c',
  include_directories: pigpio_inc,
  dependencies: [gtk_dep, pigpio_lib, rt_lib, pthread_lib],
  install: true
)
