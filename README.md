# 📝 NoteManager

**NoteManager** es una aplicación de escritorio desarrollada con **Qt 6** y **C++20**, diseñada para gestionar notas personales con etiquetas, búsqueda avanzada y persistencia en **SQLite**. Ideal para practicar desarrollo GUI moderno y estructurado en C++.

---

## 🚀 Características

- Crear, editar y eliminar notas.
- Organizar notas por etiquetas personalizadas.
- Buscar notas por contenido o etiqueta.
- Guardado automático en base de datos SQLite.
- Interfaz moderna y responsiva con Qt Designer.
- Estructura modular con CMake y separación `src/` / `include/`.

---

## 🛠️ Tecnologías usadas

- **C++20 / C++17**
- **Qt 6 (Widgets, SQL, Designer)**
- **SQLite**
- **CMake**
- **Git**

---

## 📦 Requisitos

- Qt 6 instalado (incluyendo Qt Designer y Qt SQL)
- CMake ≥ 3.16
- Compilador compatible con C++20 (GCC, Clang, MSVC)
- SQLite (incluido en Qt SQL)
- Visual Studio con Qt plugin (opcional)

---

## 🧱 Compilación

```bash
# Clona el repositorio
git clone https://github.com/tu-usuario/NoteManager.git
cd NoteManager

# Crea carpeta de compilación
mkdir build && cd build

# Configura con CMake
cmake ..

# Compila
cmake --build .
