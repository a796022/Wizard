#ifndef TREE_STRING_H
#define TREE_STRING_H

/**
 * Obtiene el máximo de caracteres y tabulaciones (considerando tabulaciones a
 * el caracter '\t' o 4 espacios seguidos) de un fichero.
 * 
 * @param filename Nombre del fichero
 * @param max_line_length Puntero a la variable donde se almacenará el máximo de caracteres
 * @param max_tabs Puntero a la variable donde se almacenará el máximo de tabulaciones
 * 
 * @return void
*/
void obtener_maximo_caracteres_tabulaciones(const char *filename, int *max_line_length, int *max_tabs);

/**
 * Devuelve el número de tabulaciones o grupos de 4 espacios al inicio de un string.
 * 
 * @param str String
 * 
 * @return int
*/
int obtener_numero_tabulaciones(const char *str);

/**
 * Elimina del string el salto de línea y las tabulaciones y espacios iniciales.
 * 
 * @param str String
 * 
 * @return void
*/
void string_to_string_nodo(char *line);

#endif /* TREE_STRING_H */