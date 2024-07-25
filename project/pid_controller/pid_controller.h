/**********************************************
 * Self-Driving Car Nano-degree - Udacity
 *  Created on: December 11, 2020
 *      Author: Mathilde Badoual
 **********************************************/

#ifndef PID_CONTROLLER_H
#define PID_CONTROLLER_H

class PID {
public:

   /**
   * TODO: Create the PID class
   **/

    /*
    * Errors
    */
  
    double cte_p;  // save the previous cross tack error (CTE)
    double cte_i;   // cte of intergral term
    double cte_d;   // cte of derivative term

    /*
    * Coefficients
    */
    double Kp;
    double Ki;
    double Kd;

    /*
    * Output limits
    */
    double output_lim_max; // upper bound of steering/throttle
    double output_lim_min; // lower bound of steering/throttle
  
    /*
    * Delta time
    */
    double dt; // small delta time used for derivative and integrals of CTE
    /*
    * Constructor
    */
    PID();

    /*
    * Destructor.
    */
    virtual ~PID();

    /*
    * Initialize PID.
    */
    void Init(double Kpi, double Kii, double Kdi, double output_lim_maxi, double output_lim_mini);

    /*
    * Update the PID error variables given cross track error.
    */
    void UpdateError(double cte);

    /*
    * Calculate the total PID error.
    */
    double TotalError();
  
    /*
    * Update the delta time.
    */
    double UpdateDeltaTime(double new_delta_time);
};

#endif //PID_CONTROLLER_H