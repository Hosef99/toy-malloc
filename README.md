# toy-malloc

## Setting Up
### Windows
#### Steps
If you are using Windows, you need to get MinGW correctly setup on your device. 
Here are the steps:

1. Download the MinGW Installation Manager here: https://sourceforge.net/projects/mingw/
2. Install the MinGW Installation Manager
3. Once installed, check the `mingw32-base` option
4. Go to your top left and click on `Installation`, and press `Apply`, it should open a new window
5. Press `Apply` in the window, and let it download and install MinGW
6. Do a Windows search (You can do that by pressing the Windows button), and search for "Edit the system environment variables", select it
7. Click on "Environment Variables" and in the "User variables for (username)" section, double click on "Path"
8. Click on "New" and put `C:\MinGW\bin\` in it. Press ok for all the windows regarding environment variables.

And you're all set!

Note: During step 8, your `MinGW` might not be installed into `C:\MinGW\bin\`. If it is not installed into the root folder (eg. `C:\`, you might need use the File Explorer to check if MinGW is installed into the `C:\Program Files\` folder or the `C:\Program Files (x86)\` folder.

#### Testing
To test if you can run `gcc`, open up the application "Command Prompt", and type in `gcc --version`, if it shows the version, then you should be good to go.
If not, reach out and I'll personally come and help you.

### Linux
If you're in Linux, you most probably know what to do. But anyways, you would need to get `gcc` installed in your system.

Since there are many Linux distros, just do a Google search "Install GCC [distro name]", and you should be able to just type 1 or 2 commands and you're fully setup. Most distros come with GCC preinstalled tho, so do type `gcc --version` to check if you have it in your system before you install it.
