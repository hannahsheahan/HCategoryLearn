# UniturkDM
##### Unity Editor Version: 2018.3.1

This is one of two Uniturk projects developed for creating behavioural experiments in Unity and deploying them online.

-  **UniturkDM** contains project files for creating a basic decision making experiment in which the participant makes one response per trial
e.g. a visual stimulus appears on the screen and the participant chooses 1/n button responses per trial.

-  If you are planning to run an experiment involving more continuous online interaction with the environment 
e.g. online foraging, navigation, motor control, or other sequential decision-making, you will probably find the repo **UniturkNav** a better place to start.


## Downloading and installing
1. Download and install the _free_ version of Unity.
2. Download and install Visual Studio (it’s a nice text editor for C#, but feel free to use any other text editor you like e.g. Atom, Xcode…).
3. If you have a Github account, select which package you want here: 
```diff
+ gitHub.com/hannahsheahan/UniturkFM
```
or
```diff
+ github.com/hannahsheahan/UniturkNav
```

and fork it to your account. 

4. Open the Unity project on your computer. 

5. Add all Scenes to the build settings:   _File_ > _Build Settings_ > Drag and drop all scenes into the _Scenes in Build_ box > _Close_ the Build Settings.

## Setting a data save path
1. Edit the script _filepath.cs_, and replace the path string with path to your local project folder.
2. Create a folder called _‘data’_ within the project folder on your local machine. 
3. Open the script _DataController.cs_ and edit the variable _‘baseFilePath’_,  to change the local file saving path to the newly created folder _‘data’_ in your project folder.
4. If you want to save data online, upload the data writing script _fromunity.php_ (located under _Assets_ > _php_ ) to the server (for Summerfield lab members, this should be under _/www/sandbox/tasks/YOURUSERNAME/YOURTASK/lib/php/_ ). Run 'chmod ugo+rw FOLDERNAME' from this directory in the terminal to sort out file permissions, where FOLDERNAME corresponds to the place on the server where you want to store data (thanks Timo!).
5. If you want to save data online, edit the _fromunity.php_ script so that the path to your data folder on the server is correct.
6. In the _DataController.cs_ script, find the function _‘SaveData()’_ and either: A) uncomment the line under ‘v1.0’ if you want to save data to your local machine, OR  B) if you want to save data on the web server (necessary for deploying this online),  uncomment the line under ‘v2.1’ and edit the web server file path for where you want to store the .php writing script, i.e. _sandbox/tasks/YOURUSERNAME/YOURTASK/lib/php/fromunity.php_ . Best to start by trying local file saving to check everything is working smoothly first.


## Running the experiment
1. Open (double-click) the scene _‘Persistent’_ in the Project menu. 
2. Run the scene from within Unity (either press the play button at top of Unity, or press cmd+P ). To quit running the scene press cmd+P again. Experiments must always be run from within the Persistent scene.
3. The previous step should have created a datafile either locally in your ‘data’ folder or on the web server, based on your previous data save path choices. Go and check it out to make sure that this happened and take a look at what’s inside it.
4. You should now have a basic functioning experiment! To understand how these projects are structured architecturally and how to develop from here, I will be releasing a flow diagram at some point, or you can just ask me.

Any questions or problems, please let me know or send me a pull request  :)
