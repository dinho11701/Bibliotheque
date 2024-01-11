cmake_minimum_required(VERSION 3.10)

# Nommez votre projet
project(MonProjet)

# Spécifiez la version de C++ requise
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Ajoutez les fichiers source à l'exécutable
add_executable(MonProjet main.cpp livre.cpp bibliotheque.cpp)

# Incluez les répertoires d'en-tête si nécessaire
include_directories(.)

