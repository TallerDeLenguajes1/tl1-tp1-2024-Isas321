# Respuestas punto 2

## ¿Por que es conveniente incluir .gitignore?

- Permite subir solo los archivos necesarios al github
- Ahorro de datos, tiempo de subida menor
- Nos evitamos errores por ejecutables del mismo nombre, etc

## ¿Cuando se debe incluir .gitignore?

Se lo incluye antes de realizar el push al repositorio remoto

## ¿Como configurar el archivo .gitignore?

### Regla de como ignorar un archivo con gitignore

    1.Creamos un archivo .gitignore en la raiz del repositorio
    2.Dentro del archivo especificamos los archivos que deseamos que se ignoren

    # Ignorar archivos .txt
    *.txt

    # Ignorar la carpeta node_modules
    node_modules/

Nota: Nosotros haremos uso de una pagina que se encargara de generar el archivo .gitignore
