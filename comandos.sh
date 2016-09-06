#Comandos consola shell linux centos 7

ifconfig #Informacion de la terjeta de red

ping 192.168.1.12 #Realizar ping entre maquinas

#Archivo de configuracion de red
cd /etc/sysconfig/network-scripts/
vi ifcfg-enp0s3

cat #Ver el contenido de un archivo

netsh advfirewall set currentprofile state off #Desactivar el firewall en windows

#Desactivar firewall en centos
service iptables save
service iptables stop
chkconfig iptables off
service firewalld stop

#Instalar c++
yum group install "Development Tools"
#Verificar que se instalo 
whereis gcc
gcc: /usr/bin/gcc /usr/lib/gcc /usr/libexec/gcc /usr/share/man/man1/gcc.1.gz
#Version instalada
gcc --version

"COMANDOS DEL SHELL"
mkdir ejemplo #Crea directorio
ls #Muestra todos los directorios
clear #Limpia la pantalla
uname -m #Version del linux instalado
ls -a #Muestra todos los archivos y directorios de la ruta que se le indique.
pwd #Para saber en que  path  estamos, o la ruta de donde nos encontramos.
cd .. #Retrocedemos de directorio
rmdir #Borramos directorio
rm #Borramos archivos
rm -Rf directorio #Borra directorio no vacio
free #Sirve para ver la memoria que tenemos en la maquina, incluyendo la swap.
free -m #Nos muestra la cantidad de memoria en megabytes, para gigabytes sería free -g.
free -t  -s 5 #Nos muestra la memoria total, incluyendo la swap, cada 5 segundos.
top #Vemos el rendimiento del sistema y más cosas.  Salimos con q.  
du #Vemos el tamaño de los ficheros.
du -sh #Muestra el tamaño total de un directorio.
pwd  #Significa "print working directory", y en castellano? 
ps -ef #Para ver los procesos en ejecución abrimos un terminal y escribimos lo siguiente:
free -m -t #Esto te mostrará información sobre la memoria RAM y swap del servidor.

"COMANDOS DE SSH"
service sshd start #Ejecute lo siguiente para iniciar por primera vez el servicio:
service sshd restart #Ejecute lo siguiente para reiniciar el servicio y aplicar cambios en la configuración::
service sshd stop #Ejecute lo siguiente para detener el servicio:
vi /etc/ssh/sshd_config #Configurar el archivo ssh
#Port 22 Port 23033


vi main.cpp #Crea archivo de c++
g++ main.cpp -o prueba #Cambiar nombre del Archivo
./prueba #Para ejecutar todo programa


# Una biblioteca de enlace dinámico Cygwin