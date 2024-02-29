project(
  'nuklear',
  'c',
)

subdir('src')

nuklear = declare_dependency(
  link_with: lib_nuklear,
  include_directories: include_directories('src'),
)
meson.override_dependency('nuklear', nuklear)