
# Introduction
I don't own Beat Saber but I did play a ton of Guitar Hero and Frets on Fire plus I made a few derpy song maps with EoF. I will try to clean out the unnecessary junk from this project because the state of this editor is pretty sad and has useless things in odd places "for the lols".



### To Do
* Update engine and plugins to UE 4.22 (and fix compilation errors)
* Remove fairly useless plugins (Discord RPC, VaRest, etc)
* Remove Meme garbage
* Convert Blueprints to C++ (BP_Controller is a mess)


### Notes
* Optimizations will happen once I get the C++ side setup and I can decipher what is going on (especially in the BP_Controller)
* I will not be using native windows headers (hence the "Sensitive Code" warning on Squeakies fork) so cross compiling can be a thing
* The MMMM server is getting removed if possible because it seems to be an add-on that isn't needed
