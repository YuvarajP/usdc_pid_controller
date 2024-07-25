# Submission requirements check-list

## ruberic tracking
- ruberic_status.txt 

## Evaluate and analyze the PID controller
### Analyzing a plot.
    - A few lines explaining the plots and describing what is plotted: the variables, the phenomenon shown
        - screenshot folder contains the plots
        - screenshot/working_combo/steering*.png: shows that tuning is aligned and tightly tuned. In reality this may not be desired situation as tight tuning for one scenario may not work very well for other un-anticipated scenarios
        - screenshot/working_combo/throttle*.png: shows final version of the tuned throttle controller. 
        - variables used in both plots show the desired steering vs actual steering (erro term), goal was to adjust the PID gain parameters to align the profile of throttle/steering.
        - several earlier trial outputs are in screenshot/trial_output folder

    - A few lines answer the second question: What is the effect of the PID according to the plots, how each part of the PID affects the control command? The answer explains the role of the different parts of the PID.
        - Cross-track error (XTE) is a measurement of how far off course a car is from its intended path
        - P parameter controls the gain applied proportional to cross tack error
        - D parameter: control action is such that the output of the controller is proportional to the rate with which the error signal is changing with time.
        - I parameter: The integral control (I) parameter in a PID controller can help reduce steady-state error. The integral control continuously adds up the error over time and sends the resulting signal back to the control output.

    - How would you design a way to automatically tune the PID parameters? This is an open question, the coherence and justification of the answer is valued.
        - Automatically tuning PID parameters can be achieved through optimization algorithms. Method I learned in the course is Twiddle algorithm. Another method is Gradient Descent.
        - The Twiddle algorithm iteratively adjusts the PID parameters to minimize the error. It works by incrementally changing each parameter and observing the effect on the performance, adjusting the parameters to minimize the error. I did this process manually it is quite compute intensive and time intensive process.
    
    -  PID controller is a model free controller, i.e. it does not use a model of the car. Could you explain the pros and cons of this type of controller? Find at least 2 pros and cons for model free versus model based.
        - Pros: Simplicity of implementation, robustness without needing knoweldge of dynamic behaviour of the car, faster to tune due to low complexity, low compute cost due to lower complexity.
        - Cons: lack of future predictions, no notion of non-lineratiy of the control loop, steady state error would be higher by not integrating dynamic behaviour of the vehicle, they are not really usable in realistic systems
    
    - (Optional) What would you do to improve the PID controller? This is an open question, the coherence and justification of the answer is valued.
        - There is vast body of research to apply PID controller in complex non-linear system like vehicle, several advanced tuning techniques like applying the Ziegler-Nichols tuning rules for initial parameter estimation, followed by fine-tuning based on system response. By implementing an adaptive control scheme that continuously adjusts the PID parameters in real-time based on performance etc.

    







