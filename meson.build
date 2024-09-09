project('samurai', 'cpp',
  version : '0.1',
  default_options : ['warning_level=3', 'cpp_std=c++14'])


src_files = []

inc = include_directories('include')

subdir('src')

executable('samurai',
           src_files,
           include_directories : inc,
           install : true)
