using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface INoiseFilter
{
    // Note: interfaces contain the declaration of methods, properties and events
    // but not their implementation (which is left up to the class which inherits
    // from them). So many different classes can inherit from an interface and provide
    // a different implementation of Evaluate()

    float Evaluate(Vector3 point); 

}
