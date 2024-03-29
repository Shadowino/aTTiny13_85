# Описание

## описание проекта

aTTiny13_85 легко подключаемая и программируемая схема на базе aTTiny13. 
Также совместимы все микроконтроллеры с аналогичной распиновкой.

список _проверенных_ совместимых микроконтроллеров:

* aTTiny13
* aTTiny13A
* aTTiny45 
* aTTiny85

## описанние директорий 

все файлы проекта храняться в папке schematic
структура директорий может измениться [^1]

* /schematic/xara сожержит файлы схем сделанных xara 10
* /schematic/xara/img содержит скомпилированные схемы в формате png и jpg
* /src содержит файлы прошивки в среде arduinoIDE
* /schematic/aTDuino содержит схему платы aTtiny для _rhinoceros_ и .nc для _roland_
* /schematic/programmer содержит схему платы программатора в разных версиях

# инструкция по прошивке

## подготовительный этап

подготовительный этап описывает операции для всех типов контроллеров
представляет из себя подготовку платы arduino (практически любой) к работе
в качестве ISP программатора
и выполняеться один раз (перепрошивка arduino не требуеться)

инструкция по прошивке платы arduino

1. подключть плату arduino Uno [ссылка](/google.com "гугл")
2. плата должна быть отключена от схемы и порт _reset_ должен быть свободен
3. прошить плату arduino (uno/nano) прошивкой в /src/arduino_as_ISP[^2]
4. подключить плату arduino к программатору [^3]
5. в _инструменты - программатор:_ указать программатор *arduino as ISP* 

## прошивка aTTiny

перед прошивкой платы aTTiny необходимо выполнить [подготовительный этап](/README.md#подготовительный-этапs) если
он не был выполнен ранее. для прошивки микроконтроллера через arduinoIDE потребуеться 
ядро соответсвующего контроллера котрое можно установить 
в менеджере плат. 
Инструкция по добавлению ядра:

1. добавить нужную ссылку в менеджер плат[^4] в _настройки:дополнительные-ссылки-для-менеджера-плат:_ 
2. в _инструменты:менеджер-плат_ найти ядро микроконтроллера и установить его
3. загружать только через _инструменты:загруить-через-програматор_[^5]

список ссылок для менеджера плат

```
https://mcudude.github.io/MicroCore/package_MCUdude_MicroCore_index.json
http://drazzy.com/package_drazzy.com_index.json
```

[^1]: все директории указаны относитьельно schematic и могут измениться в будущем
[^2]: имя файла может отличатся
[^3]: контакт _reset_ на плате программатора не дает прошить плату arduino (uno)
[^4]: дабавлять ссылку один раз не затирая другие
[^5]: можно через ctrl+shift+U
