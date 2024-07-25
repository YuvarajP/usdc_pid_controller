# Suggested tuning
- Try starting with a lower ( K_p ) value and gradually increase it. 
    - From your trials, it seems like values around 0.2 to 0.5 have been tried. You might want to try values in between, like 0.3 or 0.35.
    - In your trials, K_d values range from 0.01 to 0.9. It might be useful to try values in between, such as 0.1, 0.2, or 0.5.
    - K_i values are quite small, which is generally good. Try values like 0.005 or 0.01.
- Try with below adjusted parameters-
    - pid_steer.Init(0.45, 0.001, 0.8, 1.2, -1.2);


# Tuning process
    - Here are some steps for manually tuning a PID controller for a self-driving car:
    - Start with default or small PID values
    - Set the reset time to its maximum value and the rate to zero
    - Gradually increase the proportional gain until the system starts to oscillate
    - Adjust the integral gain to reduce steady-state error
    - Tune the derivative gain to dampen overshoot 