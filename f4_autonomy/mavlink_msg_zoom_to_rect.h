#pragma once
// MESSAGE ZOOM_TO_RECT PACKING

#define MAVLINK_MSG_ID_ZOOM_TO_RECT 62954


typedef struct __mavlink_zoom_to_rect_t {
 uint64_t timestamp; /*<  Timestamp.*/
 float x; /*<  Normalized center X coordinate.*/
 float y; /*<  Normalized center Y coordinate.*/
 float w; /*<  Normalized width.*/
 float h; /*<  Normalized height.*/
} mavlink_zoom_to_rect_t;

#define MAVLINK_MSG_ID_ZOOM_TO_RECT_LEN 24
#define MAVLINK_MSG_ID_ZOOM_TO_RECT_MIN_LEN 24
#define MAVLINK_MSG_ID_62954_LEN 24
#define MAVLINK_MSG_ID_62954_MIN_LEN 24

#define MAVLINK_MSG_ID_ZOOM_TO_RECT_CRC 227
#define MAVLINK_MSG_ID_62954_CRC 227



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ZOOM_TO_RECT { \
    62954, \
    "ZOOM_TO_RECT", \
    5, \
    {  { "x", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_zoom_to_rect_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_zoom_to_rect_t, y) }, \
         { "w", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_zoom_to_rect_t, w) }, \
         { "h", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_zoom_to_rect_t, h) }, \
         { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_zoom_to_rect_t, timestamp) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ZOOM_TO_RECT { \
    "ZOOM_TO_RECT", \
    5, \
    {  { "x", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_zoom_to_rect_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_zoom_to_rect_t, y) }, \
         { "w", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_zoom_to_rect_t, w) }, \
         { "h", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_zoom_to_rect_t, h) }, \
         { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_zoom_to_rect_t, timestamp) }, \
         } \
}
#endif

/**
 * @brief Pack a zoom_to_rect message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param x  Normalized center X coordinate.
 * @param y  Normalized center Y coordinate.
 * @param w  Normalized width.
 * @param h  Normalized height.
 * @param timestamp  Timestamp.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_zoom_to_rect_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               float x, float y, float w, float h, uint64_t timestamp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ZOOM_TO_RECT_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_float(buf, 8, x);
    _mav_put_float(buf, 12, y);
    _mav_put_float(buf, 16, w);
    _mav_put_float(buf, 20, h);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ZOOM_TO_RECT_LEN);
#else
    mavlink_zoom_to_rect_t packet;
    packet.timestamp = timestamp;
    packet.x = x;
    packet.y = y;
    packet.w = w;
    packet.h = h;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ZOOM_TO_RECT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ZOOM_TO_RECT;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ZOOM_TO_RECT_MIN_LEN, MAVLINK_MSG_ID_ZOOM_TO_RECT_LEN, MAVLINK_MSG_ID_ZOOM_TO_RECT_CRC);
}

/**
 * @brief Pack a zoom_to_rect message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param x  Normalized center X coordinate.
 * @param y  Normalized center Y coordinate.
 * @param w  Normalized width.
 * @param h  Normalized height.
 * @param timestamp  Timestamp.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_zoom_to_rect_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               float x, float y, float w, float h, uint64_t timestamp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ZOOM_TO_RECT_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_float(buf, 8, x);
    _mav_put_float(buf, 12, y);
    _mav_put_float(buf, 16, w);
    _mav_put_float(buf, 20, h);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ZOOM_TO_RECT_LEN);
#else
    mavlink_zoom_to_rect_t packet;
    packet.timestamp = timestamp;
    packet.x = x;
    packet.y = y;
    packet.w = w;
    packet.h = h;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ZOOM_TO_RECT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ZOOM_TO_RECT;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_ZOOM_TO_RECT_MIN_LEN, MAVLINK_MSG_ID_ZOOM_TO_RECT_LEN, MAVLINK_MSG_ID_ZOOM_TO_RECT_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_ZOOM_TO_RECT_MIN_LEN, MAVLINK_MSG_ID_ZOOM_TO_RECT_LEN);
#endif
}

/**
 * @brief Pack a zoom_to_rect message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param x  Normalized center X coordinate.
 * @param y  Normalized center Y coordinate.
 * @param w  Normalized width.
 * @param h  Normalized height.
 * @param timestamp  Timestamp.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_zoom_to_rect_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   float x,float y,float w,float h,uint64_t timestamp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ZOOM_TO_RECT_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_float(buf, 8, x);
    _mav_put_float(buf, 12, y);
    _mav_put_float(buf, 16, w);
    _mav_put_float(buf, 20, h);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ZOOM_TO_RECT_LEN);
#else
    mavlink_zoom_to_rect_t packet;
    packet.timestamp = timestamp;
    packet.x = x;
    packet.y = y;
    packet.w = w;
    packet.h = h;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ZOOM_TO_RECT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ZOOM_TO_RECT;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ZOOM_TO_RECT_MIN_LEN, MAVLINK_MSG_ID_ZOOM_TO_RECT_LEN, MAVLINK_MSG_ID_ZOOM_TO_RECT_CRC);
}

/**
 * @brief Encode a zoom_to_rect struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param zoom_to_rect C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_zoom_to_rect_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_zoom_to_rect_t* zoom_to_rect)
{
    return mavlink_msg_zoom_to_rect_pack(system_id, component_id, msg, zoom_to_rect->x, zoom_to_rect->y, zoom_to_rect->w, zoom_to_rect->h, zoom_to_rect->timestamp);
}

/**
 * @brief Encode a zoom_to_rect struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param zoom_to_rect C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_zoom_to_rect_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_zoom_to_rect_t* zoom_to_rect)
{
    return mavlink_msg_zoom_to_rect_pack_chan(system_id, component_id, chan, msg, zoom_to_rect->x, zoom_to_rect->y, zoom_to_rect->w, zoom_to_rect->h, zoom_to_rect->timestamp);
}

/**
 * @brief Encode a zoom_to_rect struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param zoom_to_rect C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_zoom_to_rect_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_zoom_to_rect_t* zoom_to_rect)
{
    return mavlink_msg_zoom_to_rect_pack_status(system_id, component_id, _status, msg,  zoom_to_rect->x, zoom_to_rect->y, zoom_to_rect->w, zoom_to_rect->h, zoom_to_rect->timestamp);
}

/**
 * @brief Send a zoom_to_rect message
 * @param chan MAVLink channel to send the message
 *
 * @param x  Normalized center X coordinate.
 * @param y  Normalized center Y coordinate.
 * @param w  Normalized width.
 * @param h  Normalized height.
 * @param timestamp  Timestamp.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_zoom_to_rect_send(mavlink_channel_t chan, float x, float y, float w, float h, uint64_t timestamp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ZOOM_TO_RECT_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_float(buf, 8, x);
    _mav_put_float(buf, 12, y);
    _mav_put_float(buf, 16, w);
    _mav_put_float(buf, 20, h);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ZOOM_TO_RECT, buf, MAVLINK_MSG_ID_ZOOM_TO_RECT_MIN_LEN, MAVLINK_MSG_ID_ZOOM_TO_RECT_LEN, MAVLINK_MSG_ID_ZOOM_TO_RECT_CRC);
#else
    mavlink_zoom_to_rect_t packet;
    packet.timestamp = timestamp;
    packet.x = x;
    packet.y = y;
    packet.w = w;
    packet.h = h;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ZOOM_TO_RECT, (const char *)&packet, MAVLINK_MSG_ID_ZOOM_TO_RECT_MIN_LEN, MAVLINK_MSG_ID_ZOOM_TO_RECT_LEN, MAVLINK_MSG_ID_ZOOM_TO_RECT_CRC);
#endif
}

/**
 * @brief Send a zoom_to_rect message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_zoom_to_rect_send_struct(mavlink_channel_t chan, const mavlink_zoom_to_rect_t* zoom_to_rect)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_zoom_to_rect_send(chan, zoom_to_rect->x, zoom_to_rect->y, zoom_to_rect->w, zoom_to_rect->h, zoom_to_rect->timestamp);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ZOOM_TO_RECT, (const char *)zoom_to_rect, MAVLINK_MSG_ID_ZOOM_TO_RECT_MIN_LEN, MAVLINK_MSG_ID_ZOOM_TO_RECT_LEN, MAVLINK_MSG_ID_ZOOM_TO_RECT_CRC);
#endif
}

#if MAVLINK_MSG_ID_ZOOM_TO_RECT_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_zoom_to_rect_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float x, float y, float w, float h, uint64_t timestamp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_float(buf, 8, x);
    _mav_put_float(buf, 12, y);
    _mav_put_float(buf, 16, w);
    _mav_put_float(buf, 20, h);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ZOOM_TO_RECT, buf, MAVLINK_MSG_ID_ZOOM_TO_RECT_MIN_LEN, MAVLINK_MSG_ID_ZOOM_TO_RECT_LEN, MAVLINK_MSG_ID_ZOOM_TO_RECT_CRC);
#else
    mavlink_zoom_to_rect_t *packet = (mavlink_zoom_to_rect_t *)msgbuf;
    packet->timestamp = timestamp;
    packet->x = x;
    packet->y = y;
    packet->w = w;
    packet->h = h;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ZOOM_TO_RECT, (const char *)packet, MAVLINK_MSG_ID_ZOOM_TO_RECT_MIN_LEN, MAVLINK_MSG_ID_ZOOM_TO_RECT_LEN, MAVLINK_MSG_ID_ZOOM_TO_RECT_CRC);
#endif
}
#endif

#endif

// MESSAGE ZOOM_TO_RECT UNPACKING


/**
 * @brief Get field x from zoom_to_rect message
 *
 * @return  Normalized center X coordinate.
 */
static inline float mavlink_msg_zoom_to_rect_get_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field y from zoom_to_rect message
 *
 * @return  Normalized center Y coordinate.
 */
static inline float mavlink_msg_zoom_to_rect_get_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field w from zoom_to_rect message
 *
 * @return  Normalized width.
 */
static inline float mavlink_msg_zoom_to_rect_get_w(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field h from zoom_to_rect message
 *
 * @return  Normalized height.
 */
static inline float mavlink_msg_zoom_to_rect_get_h(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field timestamp from zoom_to_rect message
 *
 * @return  Timestamp.
 */
static inline uint64_t mavlink_msg_zoom_to_rect_get_timestamp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Decode a zoom_to_rect message into a struct
 *
 * @param msg The message to decode
 * @param zoom_to_rect C-struct to decode the message contents into
 */
static inline void mavlink_msg_zoom_to_rect_decode(const mavlink_message_t* msg, mavlink_zoom_to_rect_t* zoom_to_rect)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    zoom_to_rect->timestamp = mavlink_msg_zoom_to_rect_get_timestamp(msg);
    zoom_to_rect->x = mavlink_msg_zoom_to_rect_get_x(msg);
    zoom_to_rect->y = mavlink_msg_zoom_to_rect_get_y(msg);
    zoom_to_rect->w = mavlink_msg_zoom_to_rect_get_w(msg);
    zoom_to_rect->h = mavlink_msg_zoom_to_rect_get_h(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ZOOM_TO_RECT_LEN? msg->len : MAVLINK_MSG_ID_ZOOM_TO_RECT_LEN;
        memset(zoom_to_rect, 0, MAVLINK_MSG_ID_ZOOM_TO_RECT_LEN);
    memcpy(zoom_to_rect, _MAV_PAYLOAD(msg), len);
#endif
}
