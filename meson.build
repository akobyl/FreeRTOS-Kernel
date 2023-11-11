project('FreeRTOS',
        'c',
        version : '10.6.0')


memmang = get_option('memmang')
arch = get_option('arch')
use_preemption = get_option('use_preemption')
if use_preemption
  add_project_arguments('-DconfigUSE_PREEMPTION=1', language:'c')
else
  add_project_arguments('-DconfigUSE_PREEMPTION=0', language:'c')
endif

use_port_optimised_task_selection = get_option('use_port_optimised_task_selection')
if use_port_optimised_task_selection
  add_project_arguments('-DconfigUSE_PORT_OPTIMISED_TASK_SELECTION=1', language:'c')
else
  add_project_arguments('-DconfigUSE_PORT_OPTIMISED_TASK_SELECTION=0', language:'c')
endif

use_tickless_idle = get_option('use_tickless_idle')
if use_tickless_idle
  add_project_arguments('-DconfigUSE_TICKLESS_IDLE=1', language:'c')
else
  add_project_arguments('-DconfigUSE_TICKLESS_IDLE=0', language:'c')
endif

cpu_clock_hz = get_option('cpu_clock_hz')
if cpu_clock_hz == 0
  error('need to set cpu_clock_hz')
else
  add_project_arguments('-DconfigCPU_CLOCK_HZ=' + cpu_clock_hz.to_string(), language:'c')
endif

systick_clock_hz = get_option('systick_clock_hz')
if systick_clock_hz != 0
  c_add_project_arguments('-DconfigSYSTICK_CLOCK_HZ=' + systick_clock_hz.to_string(), language:'c')
endif

tick_rate_hz = get_option('tick_rate_hz')
if tick_rate_hz == 0
  error('need to set tick_rate_hz')
else
  add_project_arguments('-DconfigTICK_RATE_HZ=' + tick_rate_hz.to_string(), language:'c')
endif

max_priorities = get_option('max_priorities')
if max_priorities== 0
  error('need to set max_priorities')
else
  add_project_arguments('-DconfigMAX_PRIORITIES=' + max_priorities.to_string(), language:'c')
endif

minimal_stack_size = get_option('minimal_stack_size')
add_project_arguments('-DconfigMINIMAL_STACK_SIZE=' + minimal_stack_size.to_string(), language:'c')

max_task_name_len = get_option('max_task_name_len')
add_project_arguments('-DconfigMAX_TASK_NAME=' + max_task_name_len.to_string(), language:'c')

use_16_bit_ticks = get_option('use_16_bit_ticks')
if use_16_bit_ticks
  add_project_arguments('-DconfigUSE_16_BIT_TICKS=1', language:'c')
else
  add_project_arguments('-DconfigUSE_16_BIT_TICKS=0', language:'c')
endif

idle_should_yield = get_option('idle_should_yield')
if not idle_should_yield
  add_project_arguments('-DconfigIDLE_SHOULD_YIELD=0', language:'c')
endif

use_task_notifications = get_option('use_task_notifications')
if use_task_notifications
  add_project_arguments('-DconfigUSE_TASK_NOTIFICATIONS=1', language:'c')
endif

task_notification_array_entries = get_option('task_notification_array_entries')
add_project_arguments('-DconfigTASK_NOTIFICATION_ARRAY_ENTRIES=' + task_notification_array_entries.to_string(), language:'c')

use_mutexes = get_option('use_mutexes')
if use_mutexes
  add_project_arguments('-DconfigUSE_MUTEXES=1', language:'c')
endif

use_recursive_mutexes = get_option('use_recursive_mutexes')
if use_recursive_mutexes
  add_project_arguments('-DconfigUSE_RECURSIVE_MUTEXES=1', language:'c')
endif

use_counting_semaphores = get_option('use_counting_semaphores')
if use_counting_semaphores
  add_project_arguments('-DconfigUSE_COUNTING_MUTEXES=1', language:'c')
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
if support_static_allocation
   add_project_arguments('-DconfigSUPPORT_STATIC_ALLOCATION=1', language: 'c')
endif

support_dynamic_allocation = get_option('support_dynamic_allocation')
if support_dynamic_allocation
  add_project_arguments('-DconfigSUPPORT_DYNAMIC_ALLOCATION=1', language:'c')
endif

total_heap_size = get_option('total_heap_size')
add_project_arguments('-DconfigTOTAL_HEAP_SIZE=' + total_heap_size.to_string(), language:'c')

application_allocated_heap = get_option('application_allocated_heap')
if application_allocated_heap
  add_project_arguments('-DconfigAPPLICATION_ALLOCATED_HEAP=1', language:'c')
endif

# Runtime stats
generate_run_time_stats = get_option('generate_run_time_stats')
if generate_run_time_stats
  add_project_arguments('-DconfigGENERATE_RUN_TIME_STATS=1', language:'c')
endif

use_trace_facility = get_option('use_trace_facility')
if use_trace_facility
  add_project_arguments('-DconfigUSE_TRACE_FACILITY=1', language:'c')
endif

use_stats_formatting_functions = get_option('use_stats_formatting_functions')
if use_stats_formatting_functions
  add_project_arguments('-DconfigUSE_STATS_FORMATTING_FUNCTIONS=1', language:'c')
endif


# Co-routines
use_co_routines = get_option('use_co_routines')
if use_co_routines
  add_project_arguments('-DconfigUSE_CO_ROUTINES=1', language:'c')
endif

max_co_routine_priorities = get_option('max_co_routine_priorities')
if use_co_routines
  add_project_arguments('-DconfigMAX_CO_ROUTINE_PRIORITIES=' + max_co_routine_priorities.to_string(), language:'c')
endif


# Software timers
use_timers = get_option('use_timers')
if use_timers
  add_project_arguments('-DconfigUSE_TIMERS=1', language:'c')
endif

timer_task_priority = get_option('timer_task_priority')
if use_timers
  add_project_arguments('-DconfigTIMER_TASK_PRIORITY=' + timer_task_priority.to_string(), language:'c')
endif

timer_queue_length = get_option('timer_queue_length')
if use_timers
  add_project_arguments('-DconfigTIMER_QUEUE_LENGTH=' + timer_queue_length.to_string(), language:'c')
endif

timer_task_stack_depth = get_option('timer_task_stack_depth')
if use_timers
  add_project_arguments('-DconfigTIMER_TASK_STACK_DEPTH=' + timer_task_stack_depth.to_string(), language:'c')
endif


# Nesting interrupt
kernal_interrupt_priority = get_option('kernal_interrupt_priority')
add_project_arguments('-DconfigKERNAL_INTERRUPT_PRIORITY=' + kernal_interrupt_priority.to_string(), language:'c')

max_syscall_interrupt_priority = get_option('max_syscall_interrupt_priority')
add_project_arguments('-DconfigMAX_SYSCALL_INTERRUPT_PRIORITY=' + max_syscall_interrupt_priority.to_string(), language:'c')

max_api_call_interrupt_priority = get_option('max_api_call_interrupt_priority')
add_project_arguments('-DconfigMAX_API_CALL_INTERRUPT_PRIORITY=' + max_api_call_interrupt_priority.to_string(), language:'c')


use_idle_hook = get_option('use_idle_hook')
if use_idle_hook
  add_project_arguments('-DconfigUSE_IDLE_HOOK=1', language:'c')
else
  add_project_arguments('-DconfigUSE_IDLE_HOOK=0', language:'c')
endif

use_tick_hook = get_option('use_tick_hook')
if use_tick_hook
  add_project_arguments('-DconfigUSE_TICK_HOOK=1', language:'c')
else
  add_project_arguments('-DconfigUSE_TICK_HOOK=0', language:'c')
endif

check_for_stack_overflow = get_option('check_for_stack_overflow')
if check_for_stack_overflow
  add_project_arguments('-DconfigCHECK_FOR_STACK_OVERFLOW=1', language:'c')
endif

use_malloc_failed_hook = get_option('use_malloc_failed_hook')
if use_malloc_failed_hook
  add_project_arguments('-DconfigUSE_MALLOC_FAILED_HOOK=1', language:'c')
endif

use_application_task_tag = get_option('use_application_task_tag')
if use_application_task_tag
  add_project_arguments('-DconfigUSE_APPLICATION_TASK_TAG=1', language:'c')
endif


# Optional functions
INCLUDE_vTaskPrioritySet = get_option('INCLUDE_vTaskPrioritySet')
if INCLUDE_vTaskPrioritySet
  add_project_arguments('-DINCLUDE_vTaskPrioritySet=1', language:'c')
endif

INCLUDE_uxTaskPriorityGet = get_option('INCLUDE_uxTaskPriorityGet')
if INCLUDE_uxTaskPriorityGet
  add_project_arguments('-DINCLUDE_uxTaskPriorityGet=1', language:'c')
endif

INCLUDE_vTaskDelete = get_option('INCLUDE_vTaskDelete')
if INCLUDE_vTaskDelete
  add_project_arguments('-DINCLUDE_vTaskDelete=1', language:'c')
endif

INCLUDE_vTaskCleanUpResources = get_option('INCLUDE_vTaskCleanUpResources')
if INCLUDE_vTaskCleanUpResources
  add_project_arguments('-DINCLUDE_vTaskCleanUpResources=1', language:'c')
endif

INCLUDE_vTaskSuspend = get_option('INCLUDE_vTaskSuspend')
if INCLUDE_vTaskSuspend
  add_project_arguments('-DINCLUDE_vTaskSuspend=1', language:'c')
endif

INCLUDE_vTaskDelayUntil = get_option('INCLUDE_vTaskDelayUntil')
if INCLUDE_vTaskDelayUntil
  add_project_arguments('-DINCLUDE_vTaskDelayUntil=1', language:'c')
endif

INCLUDE_vTaskDelay = get_option('INCLUDE_vTaskDelay')
if INCLUDE_vTaskDelay
  add_project_arguments('-DINCLUDE_vTaskDelay=1', language:'c')
endif

INCLUDE_eTaskGetState = get_option('INCLUDE_eTaskGetState')
if INCLUDE_eTaskGetState
  add_project_arguments('-DINCLUDE_eTaskGetState=1', language:'c')
endif

INCLUDE_xTimerPendFunctionCall = get_option('INCLUDE_xTimerPendFunctionCall')
if INCLUDE_xTimerPendFunctionCall
  add_project_arguments('-DINCLUDE_xTimerPendFunctionCall=1', language:'c')
endif

INCLUDE_xSemaphoreGetMutexHolder = get_option('INCLUDE_xSemaphoreGetMutexHolder')
if INCLUDE_xSemaphoreGetMutexHolder
  add_project_arguments('-DINCLUDE_xSemaphoreGetMutexHolder=1', language:'c')
endif

INCLUDE_xTaskGetHandle = get_option('INCLUDE_xTaskGetHandle')
if INCLUDE_xTaskGetHandle
  add_project_arguments('-DINCLUDE_xTaskGetHandle=1', language:'c')
endif

INCLUDE_xTaskGetCurrentTaskHandle = get_option('INCLUDE_xTaskGetCurrentTaskHandle')
if INCLUDE_xTaskGetCurrentTaskHandle
  add_project_arguments('-DINCLUDE_xTaskGetCurrentTaskHandle=1', language:'c')
endif

INCLUDE_xTaskGetIdleTaskHandle = get_option('INCLUDE_xTaskGetIdleTaskHandle')
if INCLUDE_xTaskGetIdleTaskHandle
  add_project_arguments('-DINCLUDE_xTaskGetIdleTaskHandle=1', language:'c')
endif

INCLUDE_xTaskAbortDelay = get_option('INCLUDE_xTaskAbortDelay')
if INCLUDE_xTaskAbortDelay
  add_project_arguments('-DINCLUDE_xTaskAbortDelay=1', language:'c')
endif

INCLUDE_xTaskGetSchedulerState = get_option('INCLUDE_xTaskGetSchedulerState')
if INCLUDE_xTaskGetSchedulerState
  add_project_arguments('-DINCLUDE_xTaskGetSchedulerState=1', language:'c')
endif

INCLUDE_uxTaskGetStackHighWaterMark = get_option('INCLUDE_uxTaskGetStackHighWaterMark')
if INCLUDE_uxTaskGetStackHighWaterMark
  add_project_arguments('-DINCLUDE_uxTaskGetStackHighWaterMark=1', language:'c')
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

freertos = static_library(
  'freertos',
  freertos_srcs,
  install: false,
  native: false,
  include_directories: freertos_incs,
  build_by_default: meson.is_subproject() == false,
)

freertos_dep = declare_dependency(
               include_directories: freertos_incs,
               link_with: freertos
               )
