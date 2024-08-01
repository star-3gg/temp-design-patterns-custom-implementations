file(GLOB STARWARS_SOURCES "*.cpp")
file(GLOB STARWARS_HEADERS "${CMAKE_SOURCE_DIR}/include/starwars/*.h")

add_library(StarWarsLib ${STARWARS_SOURCES} ${STARWARS_HEADERS})

target_include_directories(StarWarsLib PUBLIC ${CMAKE_SOURCE_DIR}/include)

