set(LIBRARY_NAME libObjects)

add_library(${LIBRARY_NAME}
	ball.c
)

target_compile_features(${LIBRARY_NAME} PRIVATE c_std_99)

target_sources(${LIBRARY_NAME}
    PRIVATE
	ball.h
)

target_include_directories(${LIBRARY_NAME}
	PUBLIC
	${CMAKE_CURRENT_SOURCE_DIR}
	"${CMAKE_SOURCE_DIR}/phys"
)

target_link_libraries(${LIBRARY_NAME}
    PRIVATE
	libPhys
)
