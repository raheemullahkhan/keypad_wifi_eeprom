#include<mytasks.h>
#include <Arduino.h>
#include<freertos/FreeRTOS.h>
#include<freertos/task.h>
#include<controllpanel.h>


void setup() {
  Serial.begin(115200);
  initialize_all_modules();
  


  // Create tasks
  //xTaskCreate(Task1, "Task1", 30000, NULL, 1, &Task1_Handle);
 // xTaskCreate(Task2, "Task2", 30000, NULL, 1, &Task2_Handle);
}

void loop() {
  // Empty, since all tasks run independently
    load_buttons_flipflop();
 save_if_a_pin_pressed();
execute_the_event_if_button_is_pressed_then_clear_it();
time_depended_function();
 // digitalWrite(LED_OE,LOW);
  do_saved_actions_on_leds();
}






/*
#include<controllpanel.h>

void setup() {
  Serial.begin(115200);
  scale_init();  
  wifi_eeprom_initialize();
 timer_initialize();
 motor_initialize();
   read_all_full_pattern();
   max_size_of_all_pattern();
  allowed_restart=0;
    initialize_button_pins();
  initialize_turn_off_all_leds();
  controlpanel_start_stage();
}


void loop() {
handle_server();
  load_buttons_flipflop();
 save_if_a_pin_pressed();
execute_the_event_if_button_is_pressed_then_clear_it();
time_depended_function();
  digitalWrite(LED_OE,LOW);
  do_saved_actions_on_leds();
 if(motor_on)
 digitalWrite(enablePin,HIGH);
 else
 digitalWrite(enablePin,LOW);
 if(on_off>700)
 on_off=1;
if(pause_blink&&allowed_to_enter_pause_blink)
pause_blink_function();
read_scale();  
compare_force();   
Serial.println(force_measured);
    
}*/