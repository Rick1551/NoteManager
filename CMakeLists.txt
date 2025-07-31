set(CMAKE_CXX_STANDARD 20)

find_package(Qt6 REQUIRED COMPONENTS Core Gui Widgets Sql)

add_executable(NoteManager
    src/main.cpp
    src/MainWindow.cpp
    src/Note.cpp
    src/NoteDatabase.cpp
    ui/MainWindow.ui
    src/resources.qrc
)

target_link_libraries(NoteManager
    Qt6::Core
    Qt6::Gui
    Qt6::Widgets
    Qt6::Sql
)
