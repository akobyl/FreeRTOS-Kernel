project('FreeRTOS',
        'c',
        version : '10.6.0')

c_args = []

memmang = get_option('memmang')
arch = get_option('arch')
use_preemption = get_option('use_preemption')
if use_preemption
  c_args += '-DconfigUSE_PREEMPTION=1'
else
  c_args += '-DconfigUSE_PREEMPTION=0'
endif

use_port_optimised_task_selection = get_option('use_port_optimised_task_selection')
if use_port_optimised_task_selection
  c_args += '-DconfigUSE_PORT_OPTIMISED_TASK_SELECTION=1'
else
  c_args += '-DconfigUSE_PORT_OPTIMISED_TASK_SELECTION=0'
endif

use_tickless_idle = get_option('use_tickless_idle')
if use_tickless_idle
  c_args += '-DconfigUSE_TICKLESS_IDLE=1'
else
  c_args += '-DconfigUSE_TICKLESS_IDLE=0'
endif

cpu_clock_hz = get_option('cpu_clock_hz')
if cpu_clock_hz == 0
  error('need to set cpu_clock_hz')
else
  c_args += '-DconfigCPU_CLOCK_HZ=' + cpu_clock_hz.to_string()
endif

systick_clock_hz = get_option('systick_clock_hz')
if systick_clock_hz != 0
  c_args += '-DconfigSYSTICK_CLOCK_HZ=' + systick_clock_hz.to_string()
endif

tick_rate_hz = get_option('tick_rate_hz')
if tick_rate_hz == 0
  error('need to set tick_rate_hz')
else
  c_args += '-Dconfigtick_rate_HZ=' + tick_rate_hz.to_string()
endif

max_priorities = get_option('max_priorities')
if max_priorities== 0
  error('need to set max_priorities')
else
  c_args += '-DconfigMAX_PRIORITIES=' + max_priorities.to_string()
endif

minimal_stack_size = get_option('minimal_stack_size')
c_args += '-DconfigMINIMAL_STACK_SIZE=' + minimal_stack_size.to_string()

max_task_name_len = get_option('max_task_name_len')
c_args += '-DconfigMAX_TASK_NAME=' + max_task_name_len.to_string()

use_16_bit_ticks = get_option('use_16_bit_ticks')
if use_16_bit_ticks
  c_args += '-DconfigUSE_16_BIT_TICKS=1'
else
  c_args += '-DconfigUSE_16_BIT_TICKS=0'
endif

idle_should_yield = get_option('idle_should_yield')
if not idle_should_yield
  c_args += '-DconfigIDLE_SHOULD_YIELD=0'
endif

use_task_notifications = get_option('use_task_notifications')
if use_task_notifications
  c_args += '-DconfigUSE_TASK_NOTIFICATIONS=1'
endif

task_notification_array_entries = get_option('task_notification_array_entries')
c_args += '-DconfigTASK_NOTIFICATION_ARRAY_ENTRIES=' + task_notification_array_entries.to_string()

use_mutexes = get_option('use_mutexes')
if use_mutexes
  c_args += '-DconfigUSE_MUTEXES=1'
endif

use_recursive_mutexes = get_option('use_recursive_mutexes')
if use_recursive_mutexes
  c_args += '-DconfigUSE_RECURSIVE_MUTEXES=1'
endif

use_counting_semaphores = get_option('use_counting_semaphores')
if use_counting_semaphores
  c_args += '-DconfigUSE_COUNTING_MUTEXES=1'
endif

queue_registry_size = get_option('queue_registry_size')
use_queue_sets = get_option('use_queue_sets')
use_time_slicing = get_option('use_time_slicing')
enable_backward_compatibility = get_option('enable_backward_compatibility')
num_thread_local_storage_pointers = get_option('num_thread_local_storage_pointers')
use_mini_list_item = get_option('use_mini_list_item')
stack_depth_type = get_option('stack_depth_type')
message_buffer_length_type = get_option('message_buffer_length_type')
heap_clear_memory_on_clear = get_option('heap_clear_memory_on_clear')

# Memory allocation 
support_static_allocation = get_option('support_static_allocation')
support_dynamic_allocation = get_option('support_dynamic_allocation')
total_heap_size = get_option('total_heap_size')
application_allocated_heap = get_option('application_allocated_heap')

# Runtime stats
generate_run_time_stats = get_option('generate_run_time_stats')
if generate_run_time_stats
  c_args += '-DconfigGENERATE_RUN_TIME_STATS=1'
endif

use_trace_facility = get_option('use_trace_facility')
if use_trace_facility
  c_args += '-DconfigUSE_TRACE_FACILITY=1'
endif

use_stats_formatting_functions = get_option('use_stats_formatting_functions')
if use_stats_formatting_functions
  c_args += '-DconfigUSE_STATS_FORMATTING_FUNCTIONS=1'
endif


# Co-routines
use_co_routines = get_option('use_co_routines')
if use_co_routines
  c_args += '-DconfigUSE_CO_ROUTINES=1'
endif

max_co_routine_priorities = get_option('max_co_routine_priorities')
if use_co_routines
  c_args += '-DconfigMAX_CO_ROUTINE_PRIORITIES=' + max_co_routine_priorities.to_string()
endif


# Software timers
use_timers = get_option('use_timers')
if use_timers
  c_args += '-DconfigUSE_TIMERS=1'
endif

timer_task_priority = get_option('timer_task_priority')
if use_timers
  c_args += '-DconfigTIMER_TASK_PRIORITY=' + timer_task_priority.to_string()
endif

timer_queue_length = get_option('timer_queue_length')
if use_timers
  c_args += '-DconfigTIMER_QUEUE_LENGTH=' + timer_queue_length.to_string()
endif

timer_task_stack_depth = get_option('timer_task_stack_depth')
if use_timers
  c_args += '-DconfigTIMER_TASK_STACK_DEPTH=' + timer_task_stack_depth.to_string()
endif


# Nesting interrupt
kernal_interrupt_priority = get_option('kernal_interrupt_priority')
c_args += '-DconfigKERNAL_INTERRUPT_PRIORITY=' + kernal_interrupt_priority.to_string()

max_syscall_interrupt_priority = get_option('max_syscall_interrupt_priority')
c_args += '-DconfigMAX_SYSCALL_INTERRUPT_PRIORITY=' + max_syscall_interrupt_priority.to_string()

max_api_call_interrupt_priority = get_option('max_api_call_interrupt_priority')
c_args += '-DconfigMAX_API_CALL_INTERRUPT_PRIORITY=' + max_api_call_interrupt_priority.to_string()


use_idle_hook = get_option('use_idle_hook')
if use_idle_hook
  c_args += '-DconfigUSE_IDLE_HOOK=1'
else
  c_args += '-DconfigUSE_IDLE_HOOK=0'
endif

use_tick_hook = get_option('use_tick_hook')
if use_tick_hook
  c_args += '-DconfigUSE_TICK_HOOK=1'
else
  c_args += '-DconfigUSE_TICK_HOOK=0'
endif

check_for_stack_overflow = get_option('check_for_stack_overflow')
if check_for_stack_overflow
  c_args += '-DconfigCHECK_FOR_STACK_OVERFLOW=1'
endif

use_malloc_failed_hook = get_option('use_malloc_failed_hook')
if use_malloc_failed_hook
  c_args += '-DconfigUSE_MALLOC_FAILED_HOOK=1'
endif

use_application_task_tag = get_option('use_application_task_tag')
if use_application_task_tag
  c_args += '-DconfigUSE_APPLICATION_TASK_TAG=1'
endif


# Optional functions
INCLUDE_vTaskPrioritySet = get_option('INCLUDE_vTaskPrioritySet')
if INCLUDE_vTaskPrioritySet
  c_args += '-DINCLUDE_vTaskPrioritySet=1'
endif

INCLUDE_uxTaskPriorityGet = get_option('INCLUDE_uxTaskPriorityGet')
if INCLUDE_uxTaskPriorityGet
  c_args += '-DINCLUDE_uxTaskPriorityGet=1'
endif

INCLUDE_vTaskDelete = get_option('INCLUDE_vTaskDelete')
if INCLUDE_vTaskDelete
  c_args += '-DINCLUDE_vTaskDelete=1'
endif

INCLUDE_vTaskCleanUpResources = get_option('INCLUDE_vTaskCleanUpResources')
if INCLUDE_vTaskCleanUpResources
  c_args += '-DINCLUDE_vTaskCleanUpResources=1'
endif

INCLUDE_vTaskSuspend = get_option('INCLUDE_vTaskSuspend')
if INCLUDE_vTaskSuspend
  c_args += '-DINCLUDE_vTaskSuspend=1'
endif

INCLUDE_vTaskDelayUntil = get_option('INCLUDE_vTaskDelayUntil')
if INCLUDE_vTaskDelayUntil
  c_args += '-DINCLUDE_vTaskDelayUntil=1'
endif

INCLUDE_vTaskDelay = get_option('INCLUDE_vTaskDelay')
if INCLUDE_vTaskDelay
  c_args += '-DINCLUDE_vTaskDelay=1'
endif

INCLUDE_eTaskGetState = get_option('INCLUDE_eTaskGetState')
if INCLUDE_eTaskGetState
  c_args += '-DINCLUDE_eTaskGetState=1'
endif

INCLUDE_xTimerPendFunctionCall = get_option('INCLUDE_xTimerPendFunctionCall')
if INCLUDE_xTimerPendFunctionCall
  c_args += '-DINCLUDE_xTimerPendFunctionCall=1'
endif

INCLUDE_xSemaphoreGetMutexHolder = get_option('INCLUDE_xSemaphoreGetMutexHolder')
if INCLUDE_xSemaphoreGetMutexHolder
  c_args += '-DINCLUDE_xSemaphoreGetMutexHolder=1'
endif

INCLUDE_xTaskGetHandle = get_option('INCLUDE_xTaskGetHandle')
if INCLUDE_xTaskGetHandle
  c_args += '-DINCLUDE_xTaskGetHandle=1'
endif

INCLUDE_xTaskGetCurrentTaskHandle = get_option('INCLUDE_xTaskGetCurrentTaskHandle')
if INCLUDE_xTaskGetCurrentTaskHandle
  c_args += '-DINCLUDE_xTaskGetCurrentTaskHandle=1'
endif

INCLUDE_xTaskGetIdleTaskHandle = get_option('INCLUDE_xTaskGetIdleTaskHandle')
if INCLUDE_xTaskGetIdleTaskHandle
  c_args += '-DINCLUDE_xTaskGetIdleTaskHandle=1'
endif

INCLUDE_xTaskAbortDelay = get_option('INCLUDE_xTaskAbortDelay')
if INCLUDE_xTaskAbortDelay
  c_args += '-DINCLUDE_xTaskAbortDelay=1'
endif

INCLUDE_xTaskGetSchedulerState = get_option('INCLUDE_xTaskGetSchedulerState')
if INCLUDE_xTaskGetSchedulerState
  c_args += '-DINCLUDE_xTaskGetSchedulerState=1'
endif

INCLUDE_uxTaskGetStackHighWaterMark = get_option('INCLUDE_uxTaskGetStackHighWaterMark')
if INCLUDE_uxTaskGetStackHighWaterMark
  c_args += '-DINCLUDE_uxTaskGetStackHighWaterMark=1'
endif


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
                              include_directories: freertos_incs,
                              c_args: c_args,
                              )

freertos_dep = declare_dependency(
               include_directories: freertos_incs,
               link_with: freertos_lib,
               compile_args: c_args,
               )
