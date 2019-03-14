using System.Globalization;
using UnityEngine;
using UnityEngine.UI;

public class FramesPerSecond : MonoBehaviour
{
    /// <summary>
    /// <para>This script calculates the framerate.</para>
    /// Source: edited from https://forum.unity.com/threads/fpstotext-free-fps-framerate-calculator-with-options.463667/
    /// Integrated into project: 24 Feb 2019
    /// by Hannah Sheahan, sheahan.hannah@gmail.com
    /// </summary>

    public bool GroupSampling = true;
    public int SampleSize = 80;
    public bool Smoothed = true;
    public bool ForceIntResult = true;
    public bool UseSystemTick = false;

    public float Framerate { get { return _fps; } }

    protected float[] FpsSamples;
    protected int SampleIndex;
    private float _fps;

    private int _sysLastSysTick;
    private int _sysLastFrameRate;
    private int _sysFrameRate;

    // ********************************************************************** //

    protected virtual void Start()
    {
        FpsSamples = new float[SampleSize];
        for (int i = 0; i < FpsSamples.Length; i++) FpsSamples[i] = 0.001f;
    }

    // ********************************************************************** //

    protected virtual void Update()
    {
        if (GroupSampling) Group();
        else SingleFrame();

        string fps = _fps.ToString(CultureInfo.CurrentCulture);

        SampleIndex = SampleIndex < SampleSize - 1 ? SampleIndex + 1 : 0;
    }

    // ********************************************************************** //

    protected virtual void SingleFrame()
    {
        _fps = UseSystemTick
            ? GetSystemFramerate()
            : Smoothed ? 1 / Time.smoothDeltaTime : 1 / Time.deltaTime;
        if (ForceIntResult) _fps = (int)_fps;
    }

    // ********************************************************************** //

    protected virtual void Group()
    {
        // for taking a larger sample-average when calculating the frame rate
        FpsSamples[SampleIndex] = UseSystemTick
            ? GetSystemFramerate()
            : Smoothed ? 1 / Time.smoothDeltaTime : 1 / Time.deltaTime;

        _fps = 0;
        bool loop = true;
        int i = 0;
        while (loop)
        {
            if (i == SampleSize - 1) loop = false;
            _fps += FpsSamples[i];
            i++;
        }
        _fps /= FpsSamples.Length;
        if (ForceIntResult) _fps = (int)_fps;
    }

    // ********************************************************************** //

    protected virtual int GetSystemFramerate()
    {
        if (System.Environment.TickCount - _sysLastSysTick >= 1000)
        {
            _sysLastFrameRate = _sysFrameRate;
            _sysFrameRate = 0;
            _sysLastSysTick = System.Environment.TickCount;
        }
        _sysFrameRate++;
        return _sysLastFrameRate;
    }
}
// ********************************************************************** //
