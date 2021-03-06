# :earth_asia: HCategoryLearn
##### Unity Editor Version: 2018.3.1

This repo has been developed from [Sebastian Lague's](https://github.com/SebLague/Procedural-Planets) brilliant tutorial on procedural object generation in Unity.
I've developed Sebastian's planets for use in psychology experiments which test how well people can learn and represent a heirarchical taxonomy of planets.

## Experimental psychologists
### Planet properties currently manipulated in _Planet.cs_
- :volcano: mountain height
- :globe_with_meridians: mountain spatial frequency
- :sunny: planet proximity to sun
- :dash: atmosphere strength
- :art: planet colour saturation
- :last_quarter_moon_with_face: mooniness (number & size of moons)
- :dizzy: orbital ring radius


## :wrench: Major developments
- Building a galaxy for our spinning planet to sit in. Includes a night sky, slowly drifting space dust and a sun which varies in proximity to the planet
- Building additional external planet features e.g. orbital ring which varies in radius and (optionally) thickness, a smokey atmosphere around our planet which varies in intensity, random moons which rotate with our planet
- Fixed colour gradients along planet mountians and within planet seas to vary as a function of a single random colour theme
- Restricted variation in planet mountain textures, they now vary along just two dimensions on a single layer
- Built an image generator which automatically screen captures each generated planet and associated particle systems, saves to.jpg with a lookup .json file containing all planet details
- Shortlisted ways to retrict planet randomness to different across-planet correlation structures:
  - a flat structure in which there is no feature-correlation across planets;
  - a hierarchical structure such that planets positioned within a branch of a tree have more highly correlated features than those on different branches;
  - single feature variability, all others fixed (useful for psychometric tuning or debugging)

Most interesting settings can be edited in _Planet.cs_.


## Downloading and installing
1. Download and install the _free_ version of Unity.
2. Download and install Visual Studio (it’s a nice text editor for C#, but feel free to use any other text editor you like e.g. Atom, Xcode…).
3. If you have a Github account, select:
```diff
+ gitHub.com/hannahsheahan/HCategoryLearn
```
and fork it to your account.

4. Open the Unity project on your computer.

5. Add our single Scene (PlanetScene) to the build settings:   _File_ > _Build Settings_ > Drag and drop scene into the _Scenes in Build_ box > _Close_ the Build Settings.

## Setting a data save path
Edit the script _ScreenRecorder.cs_, and replace the path string for the variable _'folder'_ with a path to an empty local folder on your machine, which will hold the generated planet images. Also change the filePath in _Planet.cs_ to wherever you want to store the associated .json metadata. 

## Running the planet generator
1. Open (double-click) the scene _‘PlanetScene’_ in the Project menu.
2. Run the scene from within Unity (either press the play button at top of Unity, or press cmd+P ). To quit running the scene press cmd+P again.
3. Run the scene. Now, while the scene is running, go to the _Hierarchy_ menu. Expand the game object named _Rotating Planet Things_, and click on the object named _Planet_. Properties for the Planet will appear in the Inspector. You will notice a set of three very useful buttons called _Generate Planet_, _Reset Planet Settings_ and _Generate Full Stimulus Set_. The first of these buttons is a bit boring and just generates a single planet according to the current settings. The second button _Reset Planet Settings_ will generate a planet with completely random settings which are not restricted by the across-planet structure we've set in the script _Planet.cs_, but it will not save an image of this planet. The final button will generate a full set of planets according to the across-planet structure we have imposed, and save images and a planet-feature-lookup .json file to the empty folder you named previously in the script _ScreenRecorder.cs_.
4. One final tip. If there is already a generated planet look-up file in the folder we set for our images to be saved in, this will restrict the settings that each new stimulus set will take on. ie. these settings will be loaded and used for generating further planets. So if you are playing around with different feature settings, remember to delete the generated lookup file between runs! Enjoy!

Any questions or problems, please let me know or send me a pull request.
Please feel free to use this repo for whatever you like, but please credit both myself and Sebastian Lague.
