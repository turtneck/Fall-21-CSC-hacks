# CSC Hacks Sample Project Repo

This repo is an example of a team project repository that meets all of [the repository requirements](https://www.notion.so/CSC-Hacks-901a62e005c8494fa342e0cc738101ad#da206965e3ed497f9bd6c1ceebd4fac9).

## Project Description
* I want to make a LED display using arduino.
* I want to do this because I don't know how librarys or arduino really works, i also thinking owning my own LED display would be cool.
* Doing this will require learning opencv, arduino, and how to make arduino have more output then it really has.
* I anticipate the following challenges: 
  * learning how to use opencv or another video,image processing library in arduino or something in tandum.
  * Making a circuit with that many LEDs.

## Team Information
Jonah Belback
* jeb382@pitt.edu
* Pitt CompEng, 2025
* Couldn't find anyone lol

## MVP DEMO
Unfortunately the whole point of making this was to build soem hardware and then export whatever image and video(WIP) i want and display it on an LED grid i made so it wont work unless you have my board
BUT if anything I made it preview the blk/white image at a scale hardcode in the matlab fiel so you can have fun with that i guess

STEPS:
* MATLAB (scaling/coloring image)
  * put whatever image you want and name it 'input.jpg' (yes jpg, it doesnt fuck with pngs or jfififif or whatever)
  * open MATLAB file
    * if your just trying to see the blk/white preview image hardcode the scale to whatever
    * otherwise set it to 8 as its not set to export a txt file larger then that
  * run matlab file
  * look at the preview image if you want, it doesnt do anything but look nice in the folder / testing

* C++ (converting to array useable for arduino)
  * EXPLANTION OF MY BULL****
    * sooooooo arduino DOES NOT (or at least idk how) let it read from a .txt file from the uploading computer and i dont have a SD card arduino.
    * therefore i am using c++ to make a FAKE .h CLASS FILE and then loading it into the arduino
  * run C MAIN
    * this will make a file in the main folder called 'imgT_data.h'
  * MANUALLY put this in the 'fakeclass' folder and replace the old file (sorry i suck)
  * open the 'fakeclass.zip' folder
  * MANUALLY delete the folder inside
  * come back to main and put it in the new 'fakeclass' folder
