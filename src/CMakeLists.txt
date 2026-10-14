
add_executable(opgave-a opgave-a.c)
add_executable(opgave-b opgave-b.c)
add_executable(opgave-c opgave-c.c)
add_executable(opgave-d opgave-d.c)

add_executable(opgave-5-c opgave-5-c.c)
add_executable(opgave-5-d opgave-5-d.c)
target_link_libraries(opgave-5-d m)  # Link math to this target, so functions in <math.h> are available.
add_executable(opgave-5-e opgave-5-e.c)

add_executable(opgave-g opgave-g.c)
add_executable(opgave-h opgave-h.c)