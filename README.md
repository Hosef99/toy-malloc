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
8. Click on "New" and put `C:\MinGW\bin` in it. Press ok for all the windows regarding environment variables.

And you're all set!

#### Testing
To test if you can run `gcc`, open up the application "Command Prompt", and type in `gcc --version`, if it shows the version, then you should be good to go.
If not, reach out and I'll personally come and help you.

### Linux
If you're in Linux, you most probably know what to do.
