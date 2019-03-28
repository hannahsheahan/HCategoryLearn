using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface INoiseFilter
{
    /// <summary>
    /// This script has been built from an online youtube tutorial on procedural
    /// planet generation, provided by Sebastian Lague: https://github.com/SebLague/Procedural-Planets 
    /// Edited: Hannah Sheahan, sheahan.hannah@gmail.com
    /// Date: 21/03/2019
    /// </summary>

    // Note: interfaces contain the declaration of methods, properties and events
    // but not their implementation (which is left up to the class which inherits
    // from them). So many different classes can inherit from an interface and provide
    // a different implementation of Evaluate()

    float Evaluate(Vector3 point); 

}
