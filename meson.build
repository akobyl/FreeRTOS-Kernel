project('FreeRTOS',
        'c',
        version : '10.6.0')

memmang = get_option('memmang')
arch = get_option('arch')

c_args = []
freertos_incs = include_directories(
                'include',
                'default_config',
                'portable/GCC' / arch,
                )

freertos_srcs = files('croutine.c',
                      'event_groups.c',
                      'list.c',
                      'queue.c',
                      'stream_buffer.c',
                      'tasks.c',
                      'timers.c',
                      'portable/GCC' / arch / 'port.c',
                      )

freertos_srcs += 'portable/MemMang' / memmang + '.c'

freertos_lib = static_library('freertos',
                              freertos_srcs,
                              include_directories : freertos_incs,
                              c_args : c_args,
                              )

freertos_dep = declare_dependency(
               include_directories : freertos_incs,
               link_with : freertos_lib,
               )
