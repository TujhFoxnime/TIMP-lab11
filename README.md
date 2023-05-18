* $ mkdir install
* $ mkdir tmp
* $ export HOME_PREFIX=`pwd`/install
* $ echo $HOME_PREFIX
* $ export USERNAME=`whoami`
* $ cd tmp

* Подключаем событийную библиотеку libevent
* $ wget https://github.com/libevent/libevent/releases/download/release-2.1.8-stable/libevent-2.1.8-stable.tar.gz
* $ tar -xvzf libevent-2.1.8-stable.tar.gz        # Распоковываем архив
* $ cd libevent-2.1.8-stable                      # Переходим в распакованную папку 
* $ ./configure --prefix=${HOME_PREFIX}
* $ make && make install 
* $ cd ..

* Подключаем библиотеку для ввода и вывода термнала
* $ wget http://invisible-island.net/datafiles/release/ncurses.tar.gz
* $ tar -xvzf ncurses.tar.gz
* $ cd ncurses-5.9
* $ ./configure --prefix=${HOME_PREFIX}
* $ make && make install 
* $ cd ..

* Подключаем менеджер терминалов tmux
* $ wget https://github.com/tmux/tmux/releases/download/2.5/tmux-2.5.tar.gz
* $ tar -xvzf tmux-2.5.tar.gz
* $ cd tmux-2.5
* $ ./configure --prefix=${HOME_PREFIX} CFLAGS="-I${HOME_PREFIX}/include -I${HOME_PREFIX}/include/ncurses" LDFLAGS="-L${HOME_PREFIX}/lib"
* $ make && make install
* $ cd ..

* Скачиваем нгрок
* $ wget https://bin.equinox.io/c/4VmDzA7iaHb/ngrok-stable-linux-amd64.zip
* $ unzip ngrok-stable-linux-amd64.zip
* $ mv ngrok ${HOME_PREFIX}/bin
* $ export LD_LIBRARY_PATH=${HOME_PREFIX}/lib
* $ export PATH="${HOME_PREFIX}/bin:${PATH}"
* * $ tmux new -s session_with_group           - здесь мы переходим в текстовый терминал, где производится контакт между терминалами (неободимо перейти с помощью этой команды в двух терминалах)
Регистрируемся на сайте получаем токен подключаемся к 22 порту

* # first_terminal:
* $ open https://ngrok.com/signup
* $ export NGROK_TOKEN=<токен>
* $ ngrok authtoken ${NGROK_TOKEN}
* $ ngrok tcp 22    - также нужно набрать в двух терминалах, чтобы настроить связь между терминалами
<порт_ngrok_сервера>

* # second_terminal:
* $ ssh ${USERNAME}@0.tcp.ngrok.io -p<порт_ngrok_сервера>
<пароль_от_учетной_записи>
* $ tmux a -t session_with_group
  
  
  
* В моем случае при команде "make && make install" до конца не сработал, выдав ошибку: 
  /usr/bin/install: невозможно удалить '/bin/event_rpcgen.py': Отказано в доступе
* make[2]: *** [Makefile:1581: install-dist_binSCRIPTS] Ошибка 1
* make[2]: выход из каталога «/home/egor/lab11/tmp/libevent-2.1.8-stable»
* make[1]: *** [Makefile:2558: install-am] Ошибка 2
* make[1]: выход из каталога «/home/egor/lab11/tmp/libevent-2.1.8-stable»
* make: *** [Makefile:2552: install] Ошибка 2
  
  * Поэтому я устанавливал ngrok с официального сайта без директорий install и tmp, но все действия проводил в /tmp:
  * 1) snap install ngrok
  * 2) curl -s https://ngrok-agent.s3.amazonaws.com/ngrok.asc | sudo tee /etc/apt/trusted.gpg.d/ngrok.asc >/dev/null
  * 3) echo "deb https://ngrok-agent.s3.amazonaws.com buster main" | sudo tee /etc/apt/sources.list.d/ngrok.list
  * 4) sudo apt update
  * 5) sudo apt install ngrok
  * 6) sudo tar xvzf ~/Downloads/ngrok-v3-stable-linux-amd64.tgz -C /usr/local/bin
  * 7) ngrok -v
  
  
  
* Oсновные команды:

* completion - сгенерировать скрипт автодополнения для bash или zsh;
* config add-authtoken - сохранить токен аутентификации в конфигурационный файл;
* config check - проверить конфигурационный файл на ошибки;
* config edit - редактировать конфигурационный файл;
* http - создание HTTP туннеля;
* tcp - создание TCP туннеля;
* start - запуск туннелей, настроенных в конфигурационном файле;
* service install - установить конфигурационные файлы сервисов в систему;
* service start - запустить сервис;
* service stop - остановить сервис;
* update - пробросаобновить утилиту до последней версии;
* version - показать версию утилиты.
  
