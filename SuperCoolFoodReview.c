#include <kipr/botball.h>

void open_claw();
void reset();
int main()
{
    enable_servos();
    create_connect();
    camera_open_black();
// open camera, identify burning building
// camera_open_black();
    int x;
    x = 0;
    
    get_create_rlightbump();
    get_create_llightbump();
    set_create_distance(0);
    get_create_distance();
    set_create_total_angle(0);
    set_create_distance(0);
    set_servo_position(1, 500);

    while (get_create_total_angle() < 209) {
        create_drive_direct(-100, 100);
    }
    while (get_create_total_angle(209) && get_create_distance() < 540) { 
        create_drive_direct(200, 200);
    }
  
	// pick up water block using claw:
    // enable_servos();
    //set_servo_position(2, 1668);
    //set_servo_position(3, 1668);
    //
    
    // code for turn right again below
    reset();
    
    while (get_create_total_angle(209)<x value) {
    	create_drive_direct(-200, 200);
  }
    while (get_create_total_angle(270) && get_create_distance() < 470);
        create_drive_direct(200, 200);
}
//  create_drive_direct(470, 470);                     
    reset();
    
// head toward building on fire
// --> get_object_center_x(80, 0);
  //  this time heading forward
    create_stop();
    create_disconnect();
    return 0;
}

void reset(){
    get_create_rlightbump();
    get_create_llightbump();
    set_create_distance(0);
    get_create_distance();
    set_create_total_angle(0);
    set_create_distance(0);

void open_claw(){ // which servo is for claw, which servo is for arm
    enable_servos();
    set_servo_position(3, 500);
    msleep(500);
}
void lower_arm(){
    enable_servos();
    set_servo_position(3, 200);
}
void lift_arm(){
    enable_servos();
    set_servo_position(1, 1020);
}
void close_claw(){
    enable_servos();
    set_servo_position(3, 1024);
    msleep(500);

}
void color_tracking(){
    camera_open_black();
    camera_close

}




}
}

