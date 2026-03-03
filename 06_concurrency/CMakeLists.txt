add_executable(basic_threading basic_threading.cpp)
add_executable(mutex_protection mutex_protection.cpp)
add_executable(atomic_counter atomic_counter.cpp)
add_executable(producer_consumer producer_consumer.cpp)

find_package(Threads REQUIRED)

target_link_libraries(basic_threading PRIVATE Threads::Threads)
target_link_libraries(mutex_protection PRIVATE Threads::Threads)
target_link_libraries(atomic_counter PRIVATE Threads::Threads)
target_link_libraries(producer_consumer PRIVATE Threads::Threads)
