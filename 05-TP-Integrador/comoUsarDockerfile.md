# Como correr el TP usando dockerfile

1. Instalarse docker desktop xd
2. Abrir una consola
3. Ir hasta el directorio donde tengan el TP-05
4. Ejecutar comando `docker build -t sintaxis .`
5. Ejecutar comando `docker run -it -v <PATH HASTA 05-TP-Integrador>:/home/ssl sintaxis bash`

(En mi caso es `docker run -it -v /home/matias/dev/utn/ssl/21-002-09/05-TP-Integrador:/home/ssl sintaxis bash`)

