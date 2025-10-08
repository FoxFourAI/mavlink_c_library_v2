/** @file
 *    @brief MAVLink comm protocol testsuite generated from f4_autonomy.xml
 *    @see https://mavlink.io/en/
 */
#pragma once
#ifndef F4_AUTONOMY_TESTSUITE_H
#define F4_AUTONOMY_TESTSUITE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MAVLINK_TEST_ALL
#define MAVLINK_TEST_ALL
static void mavlink_test_common(uint8_t, uint8_t, mavlink_message_t *last_msg);
static void mavlink_test_f4_autonomy(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_common(system_id, component_id, last_msg);
    mavlink_test_f4_autonomy(system_id, component_id, last_msg);
}
#endif

#include "../common/testsuite.h"


static void mavlink_test_f4_tracking(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_F4_TRACKING >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_f4_tracking_t packet_in = {
        963497464,45.0,73.0,101.0,129.0,963498504,963498712
    };
    mavlink_f4_tracking_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.id = packet_in.id;
        packet1.x = packet_in.x;
        packet1.y = packet_in.y;
        packet1.w = packet_in.w;
        packet1.h = packet_in.h;
        packet1.timestamp_high = packet_in.timestamp_high;
        packet1.timestamp_low = packet_in.timestamp_low;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_F4_TRACKING_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_F4_TRACKING_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_f4_tracking_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_f4_tracking_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_f4_tracking_pack(system_id, component_id, &msg , packet1.id , packet1.x , packet1.y , packet1.w , packet1.h , packet1.timestamp_high , packet1.timestamp_low );
    mavlink_msg_f4_tracking_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_f4_tracking_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.id , packet1.x , packet1.y , packet1.w , packet1.h , packet1.timestamp_high , packet1.timestamp_low );
    mavlink_msg_f4_tracking_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_f4_tracking_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_f4_tracking_send(MAVLINK_COMM_1 , packet1.id , packet1.x , packet1.y , packet1.w , packet1.h , packet1.timestamp_high , packet1.timestamp_low );
    mavlink_msg_f4_tracking_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("F4_TRACKING") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_F4_TRACKING) != NULL);
#endif
}

static void mavlink_test_f4_detector(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_F4_DETECTOR >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_f4_detector_t packet_in = {
        963497464,45.0,73.0,101.0,129.0,65
    };
    mavlink_f4_detector_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.id = packet_in.id;
        packet1.x = packet_in.x;
        packet1.y = packet_in.y;
        packet1.w = packet_in.w;
        packet1.h = packet_in.h;
        packet1.class_type = packet_in.class_type;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_F4_DETECTOR_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_F4_DETECTOR_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_f4_detector_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_f4_detector_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_f4_detector_pack(system_id, component_id, &msg , packet1.id , packet1.class_type , packet1.x , packet1.y , packet1.w , packet1.h );
    mavlink_msg_f4_detector_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_f4_detector_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.id , packet1.class_type , packet1.x , packet1.y , packet1.w , packet1.h );
    mavlink_msg_f4_detector_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_f4_detector_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_f4_detector_send(MAVLINK_COMM_1 , packet1.id , packet1.class_type , packet1.x , packet1.y , packet1.w , packet1.h );
    mavlink_msg_f4_detector_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("F4_DETECTOR") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_F4_DETECTOR) != NULL);
#endif
}

static void mavlink_test_f4_autonomy(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_f4_tracking(system_id, component_id, last_msg);
    mavlink_test_f4_detector(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // F4_AUTONOMY_TESTSUITE_H
