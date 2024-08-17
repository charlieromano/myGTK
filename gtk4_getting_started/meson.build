project('gtk4-example', 'c',
  version: '1.0',
  default_options: ['warning_level=3']
)

gtk_dep = dependency('gtk4', version: '>=4.0')

executable('gtk4-example',
  'main.c',
  dependencies: gtk_dep,
  install: true
)
