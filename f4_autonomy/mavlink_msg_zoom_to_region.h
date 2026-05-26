#pragma once
// MESSAGE ZOOM_TO_REGION PACKING

#define MAVLINK_MSG_ID_ZOOM_TO_REGION 62954


typedef struct __mavlink_zoom_to_region_t {
 uint64_t timestamp; /*<  Timestamp*/
 float x; /*<  Normalized top left corner X coordinate*/
 float y; /*<  Normalized top left corner Y coordinate*/
 float width; /*<  Normalized width of the region*/
 float height; /*<  Normalized height of the region*/
} mavlink_zoom_to_region_t;

#define MAVLINK_MSG_ID_ZOOM_TO_REGION_LEN 24
#define MAVLINK_MSG_ID_ZOOM_TO_REGION_MIN_LEN 24
#define MAVLINK_MSG_ID_62954_LEN 24
#define MAVLINK_MSG_ID_62954_MIN_LEN 24

#define MAVLINK_MSG_ID_ZOOM_TO_REGION_CRC 185
#define MAVLINK_MSG_ID_62954_CRC 185



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ZOOM_TO_REGION { \
    62954, \
    "ZOOM_TO_REGION", \
    5, \
    {  { "x", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_zoom_to_region_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_zoom_to_region_t, y) }, \
         { "width", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_zoom_to_region_t, width) }, \
         { "height", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_zoom_to_region_t, height) }, \
         { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_zoom_to_region_t, timestamp) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ZOOM_TO_REGION { \
    "ZOOM_TO_REGION", \
    5, \
    {  { "x", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_zoom_to_region_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_zoom_to_region_t, y) }, \
         { "width", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_zoom_to_region_t, width) }, \
         { "height", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_zoom_to_region_t, height) }, \
         { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_zoom_to_region_t, timestamp) }, \
         } \
}
#endif

/**
 * @brief Pack a zoom_to_region message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param x  Normalized top left corner X coordinate
 * @param y  Normalized top left corner Y coordinate
 * @param width  Normalized width of the region
 * @param height  Normalized height of the region
 * @param timestamp  Timestamp
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_zoom_to_region_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               float x, float y, float width, float height, uint64_t timestamp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ZOOM_TO_REGION_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_float(buf, 8, x);
    _mav_put_float(buf, 12, y);
    _mav_put_float(buf, 16, width);
    _mav_put_float(buf, 20, height);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ZOOM_TO_REGION_LEN);
#else
    mavlink_zoom_to_region_t packet;
    packet.timestamp = timestamp;
    packet.x = x;
    packet.y = y;
    packet.width = width;
    packet.height = height;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ZOOM_TO_REGION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ZOOM_TO_REGION;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ZOOM_TO_REGION_MIN_LEN, MAVLINK_MSG_ID_ZOOM_TO_REGION_LEN, MAVLINK_MSG_ID_ZOOM_TO_REGION_CRC);
}

/**
 * @brief Pack a zoom_to_region message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param x  Normalized top left corner X coordinate
 * @param y  Normalized top left corner Y coordinate
 * @param width  Normalized width of the region
 * @param height  Normalized height of the region
 * @param timestamp  Timestamp
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_zoom_to_region_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               float x, float y, float width, float height, uint64_t timestamp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ZOOM_TO_REGION_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_float(buf, 8, x);
    _mav_put_float(buf, 12, y);
    _mav_put_float(buf, 16, width);
    _mav_put_float(buf, 20, height);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ZOOM_TO_REGION_LEN);
#else
    mavlink_zoom_to_region_t packet;
    packet.timestamp = timestamp;
    packet.x = x;
    packet.y = y;
    packet.width = width;
    packet.height = height;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ZOOM_TO_REGION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ZOOM_TO_REGION;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_ZOOM_TO_REGION_MIN_LEN, MAVLINK_MSG_ID_ZOOM_TO_REGION_LEN, MAVLINK_MSG_ID_ZOOM_TO_REGION_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_ZOOM_TO_REGION_MIN_LEN, MAVLINK_MSG_ID_ZOOM_TO_REGION_LEN);
#endif
}

/**
 * @brief Pack a zoom_to_region message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param x  Normalized top left corner X coordinate
 * @param y  Normalized top left corner Y coordinate
 * @param width  Normalized width of the region
 * @param height  Normalized height of the region
 * @param timestamp  Timestamp
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_zoom_to_region_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   float x,float y,float width,float height,uint64_t timestamp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ZOOM_TO_REGION_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_float(buf, 8, x);
    _mav_put_float(buf, 12, y);
    _mav_put_float(buf, 16, width);
    _mav_put_float(buf, 20, height);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ZOOM_TO_REGION_LEN);
#else
    mavlink_zoom_to_region_t packet;
    packet.timestamp = timestamp;
    packet.x = x;
    packet.y = y;
    packet.width = width;
    packet.height = height;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ZOOM_TO_REGION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ZOOM_TO_REGION;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ZOOM_TO_REGION_MIN_LEN, MAVLINK_MSG_ID_ZOOM_TO_REGION_LEN, MAVLINK_MSG_ID_ZOOM_TO_REGION_CRC);
}

/**
 * @brief Encode a zoom_to_region struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param zoom_to_region C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_zoom_to_region_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_zoom_to_region_t* zoom_to_region)
{
    return mavlink_msg_zoom_to_region_pack(system_id, component_id, msg, zoom_to_region->x, zoom_to_region->y, zoom_to_region->width, zoom_to_region->height, zoom_to_region->timestamp);
}

/**
 * @brief Encode a zoom_to_region struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param zoom_to_region C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_zoom_to_region_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_zoom_to_region_t* zoom_to_region)
{
    return mavlink_msg_zoom_to_region_pack_chan(system_id, component_id, chan, msg, zoom_to_region->x, zoom_to_region->y, zoom_to_region->width, zoom_to_region->height, zoom_to_region->timestamp);
}

/**
 * @brief Encode a zoom_to_region struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param zoom_to_region C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_zoom_to_region_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_zoom_to_region_t* zoom_to_region)
{
    return mavlink_msg_zoom_to_region_pack_status(system_id, component_id, _status, msg,  zoom_to_region->x, zoom_to_region->y, zoom_to_region->width, zoom_to_region->height, zoom_to_region->timestamp);
}

/**
 * @brief Send a zoom_to_region message
 * @param chan MAVLink channel to send the message
 *
 * @param x  Normalized top left corner X coordinate
 * @param y  Normalized top left corner Y coordinate
 * @param width  Normalized width of the region
 * @param height  Normalized height of the region
 * @param timestamp  Timestamp
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_zoom_to_region_send(mavlink_channel_t chan, float x, float y, float width, float height, uint64_t timestamp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ZOOM_TO_REGION_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_float(buf, 8, x);
    _mav_put_float(buf, 12, y);
    _mav_put_float(buf, 16, width);
    _mav_put_float(buf, 20, height);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ZOOM_TO_REGION, buf, MAVLINK_MSG_ID_ZOOM_TO_REGION_MIN_LEN, MAVLINK_MSG_ID_ZOOM_TO_REGION_LEN, MAVLINK_MSG_ID_ZOOM_TO_REGION_CRC);
#else
    mavlink_zoom_to_region_t packet;
    packet.timestamp = timestamp;
    packet.x = x;
    packet.y = y;
    packet.width = width;
    packet.height = height;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ZOOM_TO_REGION, (const char *)&packet, MAVLINK_MSG_ID_ZOOM_TO_REGION_MIN_LEN, MAVLINK_MSG_ID_ZOOM_TO_REGION_LEN, MAVLINK_MSG_ID_ZOOM_TO_REGION_CRC);
#endif
}

/**
 * @brief Send a zoom_to_region message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_zoom_to_region_send_struct(mavlink_channel_t chan, const mavlink_zoom_to_region_t* zoom_to_region)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_zoom_to_region_send(chan, zoom_to_region->x, zoom_to_region->y, zoom_to_region->width, zoom_to_region->height, zoom_to_region->timestamp);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ZOOM_TO_REGION, (const char *)zoom_to_region, MAVLINK_MSG_ID_ZOOM_TO_REGION_MIN_LEN, MAVLINK_MSG_ID_ZOOM_TO_REGION_LEN, MAVLINK_MSG_ID_ZOOM_TO_REGION_CRC);
#endif
}

#if MAVLINK_MSG_ID_ZOOM_TO_REGION_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_zoom_to_region_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float x, float y, float width, float height, uint64_t timestamp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_float(buf, 8, x);
    _mav_put_float(buf, 12, y);
    _mav_put_float(buf, 16, width);
    _mav_put_float(buf, 20, height);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ZOOM_TO_REGION, buf, MAVLINK_MSG_ID_ZOOM_TO_REGION_MIN_LEN, MAVLINK_MSG_ID_ZOOM_TO_REGION_LEN, MAVLINK_MSG_ID_ZOOM_TO_REGION_CRC);
#else
    mavlink_zoom_to_region_t *packet = (mavlink_zoom_to_region_t *)msgbuf;
    packet->timestamp = timestamp;
    packet->x = x;
    packet->y = y;
    packet->width = width;
    packet->height = height;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ZOOM_TO_REGION, (const char *)packet, MAVLINK_MSG_ID_ZOOM_TO_REGION_MIN_LEN, MAVLINK_MSG_ID_ZOOM_TO_REGION_LEN, MAVLINK_MSG_ID_ZOOM_TO_REGION_CRC);
#endif
}
#endif

#endif

// MESSAGE ZOOM_TO_REGION UNPACKING


/**
 * @brief Get field x from zoom_to_region message
 *
 * @return  Normalized top left corner X coordinate
 */
static inline float mavlink_msg_zoom_to_region_get_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field y from zoom_to_region message
 *
 * @return  Normalized top left corner Y coordinate
 */
static inline float mavlink_msg_zoom_to_region_get_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field width from zoom_to_region message
 *
 * @return  Normalized width of the region
 */
static inline float mavlink_msg_zoom_to_region_get_width(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field height from zoom_to_region message
 *
 * @return  Normalized height of the region
 */
static inline float mavlink_msg_zoom_to_region_get_height(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field timestamp from zoom_to_region message
 *
 * @return  Timestamp
 */
static inline uint64_t mavlink_msg_zoom_to_region_get_timestamp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Decode a zoom_to_region message into a struct
 *
 * @param msg The message to decode
 * @param zoom_to_region C-struct to decode the message contents into
 */
static inline void mavlink_msg_zoom_to_region_decode(const mavlink_message_t* msg, mavlink_zoom_to_region_t* zoom_to_region)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    zoom_to_region->timestamp = mavlink_msg_zoom_to_region_get_timestamp(msg);
    zoom_to_region->x = mavlink_msg_zoom_to_region_get_x(msg);
    zoom_to_region->y = mavlink_msg_zoom_to_region_get_y(msg);
    zoom_to_region->width = mavlink_msg_zoom_to_region_get_width(msg);
    zoom_to_region->height = mavlink_msg_zoom_to_region_get_height(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ZOOM_TO_REGION_LEN? msg->len : MAVLINK_MSG_ID_ZOOM_TO_REGION_LEN;
        memset(zoom_to_region, 0, MAVLINK_MSG_ID_ZOOM_TO_REGION_LEN);
    memcpy(zoom_to_region, _MAV_PAYLOAD(msg), len);
#endif
}
