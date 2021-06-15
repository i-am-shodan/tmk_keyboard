#include "quantum.h"

//__attribute__((weak)) bool process_action_kb(keyrecord_t *record) { return true; }

//void post_process_record_quantum(keyrecord_t *record) {
    //uint16_t keycode = get_record_keycode(record, false);
    //post_process_record_kb(keycode, record);
//}

//bool process_record_quantum(keyrecord_t *record) {
//    return process_action_kb(record);
//}

void process_record_handler(keyrecord_t *record) {
    action_t action = layer_switch_get_action(record->event);
    dprint("ACTION: ");
    debug_action(action);
#ifndef NO_ACTION_LAYER
    dprint(" layer_state: ");
    layer_debug();
    dprint(" default_layer_state: ");
    default_layer_debug();
#endif
    dprintln();

    process_action(record);
}

void process_record(keyrecord_t *record)
{
    if (IS_NOEVENT(record->event)) {
        return;
    }

    //if (!process_record_quantum(record)) return;

    process_record_handler(record);
    //post_process_record_quantum(record);
}
