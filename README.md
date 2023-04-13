<div align="center">
  <img height="150" src="https://i.imgflip.com/7fenww.gif"  />
</div>

###

<div align="center">
  v 1.0
</div>

###

<h1 align="center">battleship ⚓</h1>

###

<p align="center">a sumple battleship game written in c using signals 🚥</p>

<div align="center">
  <img height="400" src="https://i.ibb.co/fFwgnVX/yeah.png"  />
</div>

<br>
<p align="center">Please do note there WILL BE memory leaks </p>
<p align="center">
  This project uses SIGUSER1 and SIGUSER2 to carry out informatio between the two players, <br>
  translatting every move into binary and sending it bit by bit. 
</p>
  
 <br>
<div align="center">

  Maps can be any name and should be in a `txt` format and MUST be formated in the following way :<br>
  `LENGTH : FIRST_SQUARE : LAST_SQUARE`
  
   where LENGTH is the length of the ship, FIRST_SQUARE and LAST_SQUARE its first and last positions. <br>
   In this file, you must have 4 ships (of lengths 2,3,4 and 5). <br>
   Otherwise there will be an error !
   
</div>

###

<br>
<h3 align="center">Usage ⏸️</h3>
<br>

<div align="center">

  (Requires GCC to work)

  Start with : `make` to build project <br>
  you will now have a `battleship` binary <br>
  (feel free to move it where ever pleases you).
  <br>
  (you might need to `chmod +x battleship` to allow its execution)
  <br>
  <br>
  
  📺 quick tutorial:
  
  ```bash
  ./battleship <path to map> # lauches the game for player one
  # this will output you a PID (5 digit number)
  
  ./battleship <PID> <path to map> # launches the game for player two
 
  ```
  
  Now each player will have to enter a move each turn, and will have to wait for the other to do so ! <br>
  And the rest is just the game
  
</div>

###

<br>
<h3 align="center">Author 🫂</h3>
<div align="center">
  <a href="https://github.com/underhoney">@mathis</a> <br>
  <a href="https://github.com/tvianney">@vianney</a> <br>
  <br>
  
  Please do note this project was made as an Epitech project and as such has to follow its coding style <br>
  (so its not my fault if code looks bad af)
  
  This project is finished
</div>

###
