#ifndef EXAMPLE_H
#define EXAMPLE_H

#include <stdio.h>
#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/classes/engine.hpp>
#include <godot_cpp/classes/sprite2d.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/input_event.hpp>
#include <godot_cpp/classes/input_event_key.hpp>
#include <godot_cpp/classes/input_event_mouse_button.hpp>
#include <godot_cpp/classes/input_event_mouse_motion.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/utility_functions.hpp>

namespace godot {

class Example : public Sprite2D {
  GDCLASS(Example, Sprite2D)
 public:
  static void _bind_methods() {}

  Example() {std::cout << "Example\n";}

  ~Example() {std::cout << "~Example\n";}

  void _ready() override {std::cout << "_ready\n";}

	void _enter_tree() override {std::cout << "_enter_tree\n";}

	void _exit_tree() override {std::cout << "_exit_tree\n";}
};

}

#endif