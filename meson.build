project('FreeRTOS',
        'c',
        version : '10.6.0')

c_args = []

memmang = get_option('memmang')
arch = get_option('arch')
use_preemption = get_option('use_preemption')
if use_preemption
  c_args += '-DconfigUSE_PREEMPTION=1'
endif

cpu_clock_hz = get_option('cpu_clock_hz')
c_args += '-DconfigCPU_CLOCK_HZ=' + cpu_clock_hz


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
