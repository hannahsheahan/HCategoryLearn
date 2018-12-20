# UniturkDM
This is one of two Uniturk projects developed for creating behavioural experiments in Unity and deploying them online.

1. UniturkDM contains project files for creating a basic decision making experiment in which the participant makes one response per trial
e.g. a visual stimulus appears on the screen and the participant chooses 1/n button responses per trial.

If you are planning to run an experiment involving more continuous online interaction with the environment 
e.g. online foraging, navigation, motor control, or other sequential decision-making, you will probably find the repo _UniturkNav_ a better place to start.


## Downloading and installing
1. Download and install the FREE version of Unity
2. Download and install Visual Studio (it’s a nice text editor for C#, but feel free to use any other text editor you like e.g. Atom, Xcode…)
3. If you have a Github account:  
    1. -    Select which package you want here: GitHub.com/hannahsheahan/UniturkFM    or github.com/hannahsheahan/UniturkNav, and fork it to copy it to your account. 
    2. -    If you don’t have a GitHub account and dont want to make one, download which package you want here:  XXXX. Then open Unity and create a new project. Import the package assets by doing  Assets>Import Package > Custom Package >   select the location of the downloaded Asset package UniturkDM_v1.unitypackage. Create a new .git directory in the base folder of your Unity project, or use Unity’s inbuilt version control software.
4. Open the Unity project on your computer. 
5. Add all Scenes to the build settings:   File > Build Settings > Drag and drop all scenes into the ‘Scenes in Build’ box > Close the Build Settings

## Setting a data save path
1. Edit the script filepath.cs, and add the path on your computer to the project folder where indicated
2. Create a folder called ‘data’ within the project folder on your local machine. 
3. Open the script DataController.cs and edit the variable ‘baseFilePath’,  to change the local file saving path to the newly created folder ‘data’ in your project folder
4. If you want to save data online, upload the data writing script ‘fromunity.php’ to a local server location under sandbox/tasks/YOURUSERNAME/YOURTASK/lib/php/ and run XXXXX from this directory in the terminal to sort out file permissions.
5. In the DataController.cs script, find the function ‘SaveData()’ and either: A) uncomment the line under ‘v1.0’ if you want to save data to your local machine, OR  B) if you want to save data on the web server (necessary for deploying this online),  uncomment the line under ‘v2.1’ and edit the web server file path for where you want to store the .php writing script, i.e. sandbox/tasks/YOURUSERNAME/YOURTASK/lib/php/fromunity.php. Best to start by trying local file saving to check everything is working smoothly first.

## Running the experiment
1. Open (double-click) the scene ‘Persistent’ in the Project. 
2. Run the scene from within Unity (either press the play button at top of Unity, or press cmd+P ). To quit running the scene press cmd+P again. For reasons illustrated in the attached block diagram, experiments must always be run from within the Persistent scene.
3. Step 12 should have created a datafile either locally in your ‘data’ folder or on the web server, based on your choice at step 10. Go and check it out to make sure that this happened and take a look at what’s inside it.
4. You should now have a basic functioning experiment! To understand how these projects are structured architecturally and how to develop from here, take a look at the attached flow diagram or just ask me.

Any questions or problems, please let me know or send me a pull request.
