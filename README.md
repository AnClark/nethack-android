# nethack-android
Automatically exported from code.google.com/p/nethack-android

This is a version of the NetHack port for Android that modifies some visuals
in order to be played well on e-ink screens.

Could get it to compile properly under Arch Linux 64-bit using Eclipse ADT,
Android SDK and latest Android NDK, and gets to run, but complains about
incompatibility for file "dungeon". Used assets and libnethack.so from upstream
app distribution and works just fine!

To use on e-ink screen:

* Set Background Color to white
* Set Tileset to eink tiles

Improvements to the einktiles on the way!

To compile apk:

* Install Eclipse and Android ADT with corresponding Android SDK, platform and build tools
* Clone repo
* Create Eclipse project on NetHackApp directory, set platform on project properties, build and run!

Merit goes to the original porter, the creator of the NetHack Modern tileset,
and the guys at game-icons.net.
No theft intended, I just want to share something that I made because it's
useful to me.

Tested on a Onyx Boox M96 ebook reader with 9.7" e-ink display, but I expect it
to work properly on other e-ink devices.

Enjoy!
