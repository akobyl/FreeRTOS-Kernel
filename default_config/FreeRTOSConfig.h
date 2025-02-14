#ifndef FREERTOS_CONFIG_H
#define FREERTOS_CONFIG_H

#ifdef __cplusplus
extern "C" {
#endif

/*-----------------------------------------------------------
 * Application specific definitions.
 *
 * These definitions should be adjusted for your particular hardware and
 * application requirements.
 *
 * THESE PARAMETERS ARE DESCRIBED WITHIN THE 'CONFIGURATION' SECTION OF THE
 * FreeRTOS API DOCUMENTATION AVAILABLE ON THE FreeRTOS.org WEB SITE.
 *
 * See http://www.freertos.org/a00110.html
 *----------------------------------------------------------*/

/* The MPU version of port.c includes and excludes functions depending on the
settings within this file.  Therefore, to ensure all the functions in port.c
build, this configuration file has all options turned on. */

#ifndef configUSE_PREEMPTION
#define configUSE_PREEMPTION 1
#endif

#ifndef configTICK_RATE_HZ
#define configTICK_RATE_HZ (1000)
#endif

#ifndef configUSE_PORT_OPTIMISED_TASK_SELECTION
#define configUSE_PORT_OPTIMISED_TASK_SELECTION 1
#endif

#ifndef configUSE_QUEUE_SETS
#define configUSE_QUEUE_SETS 1
#endif

#ifndef configUSE_IDLE_HOOK
#define configUSE_IDLE_HOOK 0
#endif

#ifndef configUSE_TICK_HOOK
#define configUSE_TICK_HOOK 0
#endif

#ifndef configCPU_CLOCK_HZ
#define configCPU_CLOCK_HZ 48000000
#endif

#ifndef configMAX_PRIORITIES
#define configMAX_PRIORITIES (5)
#endif

#ifndef configMINIMAL_STACK_SIZE
#define configMINIMAL_STACK_SIZE ((unsigned short)256)
#endif

#ifndef configTOTAL_HEAP_SIZE
#define configTOTAL_HEAP_SIZE ((size_t)(16 * 1024))
#endif

#ifndef configMAX_TASK_NAME_LEN
#define configMAX_TASK_NAME_LEN (10)
#endif

#ifndef configUSE_TRACE_FACILITY
#define configUSE_TRACE_FACILITY 1
#endif

#ifndef configUSE_16_BIT_TICKS
#define configUSE_16_BIT_TICKS 0
#endif

#ifndef configIDLE_SHOULD_YIELD
#define configIDLE_SHOULD_YIELD 1
#endif

#ifndef configUSE_MUTEXES
#define configUSE_MUTEXES 1
#endif

#ifndef configQUEUE_REGISTRY_SIZE
#define configQUEUE_REGISTRY_SIZE 5
#endif

#ifndef configUSE_RECURSIVE_MUTEXES
#define configUSE_RECURSIVE_MUTEXES 1
#endif

#ifndef configUSE_APPLICATION_TASK_TAG
#define configUSE_APPLICATION_TASK_TAG 1
#endif

#ifndef configUSE_COUNTING_SEMAPHORES
#define configUSE_COUNTING_SEMAPHORES 1
#endif

#ifndef configUSE_TICKLESS_IDLE
#define configUSE_TICKLESS_IDLE 0
#endif

#ifndef configNUM_THREAD_LOCAL_STORAGE_POINTERS
#define configNUM_THREAD_LOCAL_STORAGE_POINTERS 2
#endif

/* This demo shows the MPU being used without any dynamic memory allocation. */
#ifndef configSUPPORT_STATIC_ALLOCATION
#define configSUPPORT_STATIC_ALLOCATION 1
#endif

#ifndef configSUPPORT_DYNAMIC_ALLOCATION
#define configSUPPORT_DYNAMIC_ALLOCATION 1
#endif

/* Run time stats gathering definitions. */
#ifndef configGENERATE_RUN_TIME_STATS
#define configGENERATE_RUN_TIME_STATS 1
#endif

#ifndef portCONFIGURE_TIMER_FOR_RUN_TIME_STATS
#define portCONFIGURE_TIMER_FOR_RUN_TIME_STATS()
#endif

#ifndef portGET_RUN_TIME_COUNTER_VALUE
#define portGET_RUN_TIME_COUNTER_VALUE() 0
#endif

/* This demo makes use of one or more example stats formatting functions.  These
format the raw data provided by the uxTaskGetSystemState() function in to human
readable ASCII form.  See the notes in the implementation of vTaskList() within
FreeRTOS/Source/tasks.c for limitations. */
#ifndef configUSE_STATS_FORMATTING_FUNCTIONS
#define configUSE_STATS_FORMATTING_FUNCTIONS 0
#endif

/* Co-routine definitions. */
#ifndef configUSE_CO_ROUTINES
#define configUSE_CO_ROUTINES 0
#endif

#ifndef configMAX_CO_ROUTINE_PRIORITIES
#define configMAX_CO_ROUTINE_PRIORITIES (2)
#endif

/* Software timer definitions. */
#ifndef configUSE_TIMERS
#define configUSE_TIMERS 1
#endif

#ifndef configTIMER_TASK_PRIORITY
#define configTIMER_TASK_PRIORITY (2)
#endif

#ifndef configTIMER_QUEUE_LENGTH
#define configTIMER_QUEUE_LENGTH 5
#endif

#ifndef configTIMER_TASK_STACK_DEPTH
#define configTIMER_TASK_STACK_DEPTH (configMINIMAL_STACK_SIZE)
#endif

/* Set the following definitions to 1 to include the API function, or zero
to exclude the API function. */
#ifndef INCLUDE_vTaskPrioritySet
#define INCLUDE_vTaskPrioritySet 1
#endif

#ifndef INCLUDE_uxTaskPriorityGet
#define INCLUDE_uxTaskPriorityGet 1
#endif

#ifndef INCLUDE_vTaskDelete
#define INCLUDE_vTaskDelete 1
#endif

#ifndef INCLUDE_vTaskCleanUpResources
#define INCLUDE_vTaskCleanUpResources 1
#endif

#ifndef INCLUDE_vTaskSuspend
#define INCLUDE_vTaskSuspend 1
#endif

#ifndef INCLUDE_vTaskDelayUntil
#define INCLUDE_vTaskDelayUntil 1
#endif

#ifndef INCLUDE_vTaskDelay
#define INCLUDE_vTaskDelay 1
#endif

#ifndef INCLUDE_eTaskGetState
#define INCLUDE_eTaskGetState 1
#endif

#ifndef INCLUDE_xTimerPendFunctionCall
#define INCLUDE_xTimerPendFunctionCall 0
#endif

#ifndef INCLUDE_xSemaphoreGetMutexHolder
#define INCLUDE_xSemaphoreGetMutexHolder 1
#endif

#ifndef INCLUDE_xTaskGetHandle
#define INCLUDE_xTaskGetHandle 1
#endif

#ifndef define
#define INCLUDE_xTaskGetCurrentTaskHandle 1
#endif

#ifndef define
#define INCLUDE_xTaskGetIdleTaskHandle 1
#endif

#ifndef define
#define INCLUDE_xTaskAbortDelay 1
#endif

#ifndef define
#define INCLUDE_xTaskGetSchedulerState 1
#endif

#ifndef INCLUDE_xTaskGetIdleTaskHandle
#define INCLUDE_xTaskGetIdleTaskHandle 1
#endif

#ifndef INCLUDE_uxTaskGetStackHighWaterMark
#define INCLUDE_uxTaskGetStackHighWaterMark 1
#endif

/* Cortex-M specific definitions. */
#ifdef __NVIC_PRIO_BITS
/* __BVIC_PRIO_BITS will be specified when CMSIS is being used. */
#define configPRIO_BITS __NVIC_PRIO_BITS
#else
#define configPRIO_BITS 4 /* 15 priority levels */
#endif

/* The lowest interrupt priority that can be used in a call to a "set priority"
function. */
#ifndef configLIBRARY_LOWEST_INTERRUPT_PRIORITY
#define configLIBRARY_LOWEST_INTERRUPT_PRIORITY 0xf
#endif

/* The highest interrupt priority that can be used by any interrupt service
routine that makes calls to interrupt safe FreeRTOS API functions.  DO NOT CALL
INTERRUPT SAFE FREERTOS API FUNCTIONS FROM ANY INTERRUPT THAT HAS A HIGHER
PRIORITY THAN THIS! (higher priorities are lower numeric values. */
#ifndef configLIBRARY_MAX_SYSCALL_INTERRUPT_PRIORITY
#define configLIBRARY_MAX_SYSCALL_INTERRUPT_PRIORITY 5
#endif

/* Interrupt priorities used by the kernel port layer itself.  These are generic
to all Cortex-M ports, and do not rely on any particular library functions. */
#ifndef configKERNEL_INTERRUPT_PRIORITY
#define configKERNEL_INTERRUPT_PRIORITY                                        \
  (configLIBRARY_LOWEST_INTERRUPT_PRIORITY << (8 - configPRIO_BITS))
#endif

/* !!!! configMAX_SYSCALL_INTERRUPT_PRIORITY must not be set to zero !!!!
See http://www.FreeRTOS.org/RTOS-Cortex-M3-M4.html. */
#ifndef configMAX_SYSCALL_INTERRUPT_PRIORITY //
#define configMAX_SYSCALL_INTERRUPT_PRIORITY                                   \
  (configLIBRARY_MAX_SYSCALL_INTERRUPT_PRIORITY << (8 - configPRIO_BITS))
#endif

/* Definitions that map the FreeRTOS port interrupt handlers to their CMSIS
standard names. */
#ifndef xPortPendSVHandler
#define xPortPendSVHandler PendSV_Handler
#endif

#ifndef vPortSVCHandler
#define vPortSVCHandler SVC_Handler
#endif

#ifndef xPortSysTickHandler
#define xPortSysTickHandler SysTick_Handler
#endif

/* Normal assert() semantics without relying on the provision of an assert.h
header file. */
#ifndef configASSERT
#define configASSERT(x)                                                        \
  if ((x) == 0) {                                                              \
    portDISABLE_INTERRUPTS();                                                  \
    for (;;)                                                                   \
      ;                                                                        \
  }
#endif

/* Ensure that system calls can only be made from kernel code. */
#ifndef configENFORCE_SYSTEM_CALLS_FROM_KERNEL_ONLY
#define configENFORCE_SYSTEM_CALLS_FROM_KERNEL_ONLY 1
#endif

#ifdef __cplusplus
}
#endif

#endif /* FREERTOS_CONFIG_H */
