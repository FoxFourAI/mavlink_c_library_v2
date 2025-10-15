#pragma once
// MESSAGE F4_TRACKING PACKING

#define MAVLINK_MSG_ID_F4_TRACKING 62708


typedef struct __mavlink_f4_tracking_t {
 uint32_t id; /*<  Unique tracking identifier.*/
 float x; /*<  Normalized center X coordinate.*/
 float y; /*<  Normalized center Y coordinate.*/
 float w; /*<  Normalized width.*/
 float h; /*<  Normalized height.*/
 uint32_t timestamp_high; /*<  High 32 bits of capture timestamp.*/
 uint32_t timestamp_low; /*<  Low 32 bits of capture timestamp.*/
} mavlink_f4_tracking_t;

#define MAVLINK_MSG_ID_F4_TRACKING_LEN 28
#define MAVLINK_MSG_ID_F4_TRACKING_MIN_LEN 28
#define MAVLINK_MSG_ID_62708_LEN 28
#define MAVLINK_MSG_ID_62708_MIN_LEN 28

#define MAVLINK_MSG_ID_F4_TRACKING_CRC 132
#define MAVLINK_MSG_ID_62708_CRC 132



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_F4_TRACKING { \
    62708, \
    "F4_TRACKING", \
    7, \
    {  { "id", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_f4_tracking_t, id) }, \
         { "x", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_f4_tracking_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_f4_tracking_t, y) }, \
         { "w", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_f4_tracking_t, w) }, \
         { "h", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_f4_tracking_t, h) }, \
         { "timestamp_high", NULL, MAVLINK_TYPE_UINT32_T, 0, 20, offsetof(mavlink_f4_tracking_t, timestamp_high) }, \
         { "timestamp_low", NULL, MAVLINK_TYPE_UINT32_T, 0, 24, offsetof(mavlink_f4_tracking_t, timestamp_low) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_F4_TRACKING { \
    "F4_TRACKING", \
    7, \
    {  { "id", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_f4_tracking_t, id) }, \
         { "x", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_f4_tracking_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_f4_tracking_t, y) }, \
         { "w", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_f4_tracking_t, w) }, \
         { "h", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_f4_tracking_t, h) }, \
         { "timestamp_high", NULL, MAVLINK_TYPE_UINT32_T, 0, 20, offsetof(mavlink_f4_tracking_t, timestamp_high) }, \
         { "timestamp_low", NULL, MAVLINK_TYPE_UINT32_T, 0, 24, offsetof(mavlink_f4_tracking_t, timestamp_low) }, \
         } \
}
#endif

/**
 * @brief Pack a f4_tracking message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param id  Unique tracking identifier.
 * @param x  Normalized center X coordinate.
 * @param y  Normalized center Y coordinate.
 * @param w  Normalized width.
 * @param h  Normalized height.
 * @param timestamp_high  High 32 bits of capture timestamp.
 * @param timestamp_low  Low 32 bits of capture timestamp.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_f4_tracking_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t id, float x, float y, float w, float h, uint32_t timestamp_high, uint32_t timestamp_low)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_F4_TRACKING_LEN];
    _mav_put_uint32_t(buf, 0, id);
    _mav_put_float(buf, 4, x);
    _mav_put_float(buf, 8, y);
    _mav_put_float(buf, 12, w);
    _mav_put_float(buf, 16, h);
    _mav_put_uint32_t(buf, 20, timestamp_high);
    _mav_put_uint32_t(buf, 24, timestamp_low);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_F4_TRACKING_LEN);
#else
    mavlink_f4_tracking_t packet;
    packet.id = id;
    packet.x = x;
    packet.y = y;
    packet.w = w;
    packet.h = h;
    packet.timestamp_high = timestamp_high;
    packet.timestamp_low = timestamp_low;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_F4_TRACKING_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_F4_TRACKING;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_F4_TRACKING_MIN_LEN, MAVLINK_MSG_ID_F4_TRACKING_LEN, MAVLINK_MSG_ID_F4_TRACKING_CRC);
}

/**
 * @brief Pack a f4_tracking message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param id  Unique tracking identifier.
 * @param x  Normalized center X coordinate.
 * @param y  Normalized center Y coordinate.
 * @param w  Normalized width.
 * @param h  Normalized height.
 * @param timestamp_high  High 32 bits of capture timestamp.
 * @param timestamp_low  Low 32 bits of capture timestamp.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_f4_tracking_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint32_t id, float x, float y, float w, float h, uint32_t timestamp_high, uint32_t timestamp_low)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_F4_TRACKING_LEN];
    _mav_put_uint32_t(buf, 0, id);
    _mav_put_float(buf, 4, x);
    _mav_put_float(buf, 8, y);
    _mav_put_float(buf, 12, w);
    _mav_put_float(buf, 16, h);
    _mav_put_uint32_t(buf, 20, timestamp_high);
    _mav_put_uint32_t(buf, 24, timestamp_low);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_F4_TRACKING_LEN);
#else
    mavlink_f4_tracking_t packet;
    packet.id = id;
    packet.x = x;
    packet.y = y;
    packet.w = w;
    packet.h = h;
    packet.timestamp_high = timestamp_high;
    packet.timestamp_low = timestamp_low;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_F4_TRACKING_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_F4_TRACKING;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_F4_TRACKING_MIN_LEN, MAVLINK_MSG_ID_F4_TRACKING_LEN, MAVLINK_MSG_ID_F4_TRACKING_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_F4_TRACKING_MIN_LEN, MAVLINK_MSG_ID_F4_TRACKING_LEN);
#endif
}

/**
 * @brief Pack a f4_tracking message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param id  Unique tracking identifier.
 * @param x  Normalized center X coordinate.
 * @param y  Normalized center Y coordinate.
 * @param w  Normalized width.
 * @param h  Normalized height.
 * @param timestamp_high  High 32 bits of capture timestamp.
 * @param timestamp_low  Low 32 bits of capture timestamp.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_f4_tracking_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t id,float x,float y,float w,float h,uint32_t timestamp_high,uint32_t timestamp_low)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_F4_TRACKING_LEN];
    _mav_put_uint32_t(buf, 0, id);
    _mav_put_float(buf, 4, x);
    _mav_put_float(buf, 8, y);
    _mav_put_float(buf, 12, w);
    _mav_put_float(buf, 16, h);
    _mav_put_uint32_t(buf, 20, timestamp_high);
    _mav_put_uint32_t(buf, 24, timestamp_low);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_F4_TRACKING_LEN);
#else
    mavlink_f4_tracking_t packet;
    packet.id = id;
    packet.x = x;
    packet.y = y;
    packet.w = w;
    packet.h = h;
    packet.timestamp_high = timestamp_high;
    packet.timestamp_low = timestamp_low;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_F4_TRACKING_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_F4_TRACKING;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_F4_TRACKING_MIN_LEN, MAVLINK_MSG_ID_F4_TRACKING_LEN, MAVLINK_MSG_ID_F4_TRACKING_CRC);
}

/**
 * @brief Encode a f4_tracking struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param f4_tracking C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_f4_tracking_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_f4_tracking_t* f4_tracking)
{
    return mavlink_msg_f4_tracking_pack(system_id, component_id, msg, f4_tracking->id, f4_tracking->x, f4_tracking->y, f4_tracking->w, f4_tracking->h, f4_tracking->timestamp_high, f4_tracking->timestamp_low);
}

/**
 * @brief Encode a f4_tracking struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param f4_tracking C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_f4_tracking_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_f4_tracking_t* f4_tracking)
{
    return mavlink_msg_f4_tracking_pack_chan(system_id, component_id, chan, msg, f4_tracking->id, f4_tracking->x, f4_tracking->y, f4_tracking->w, f4_tracking->h, f4_tracking->timestamp_high, f4_tracking->timestamp_low);
}

/**
 * @brief Encode a f4_tracking struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param f4_tracking C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_f4_tracking_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_f4_tracking_t* f4_tracking)
{
    return mavlink_msg_f4_tracking_pack_status(system_id, component_id, _status, msg,  f4_tracking->id, f4_tracking->x, f4_tracking->y, f4_tracking->w, f4_tracking->h, f4_tracking->timestamp_high, f4_tracking->timestamp_low);
}

/**
 * @brief Send a f4_tracking message
 * @param chan MAVLink channel to send the message
 *
 * @param id  Unique tracking identifier.
 * @param x  Normalized center X coordinate.
 * @param y  Normalized center Y coordinate.
 * @param w  Normalized width.
 * @param h  Normalized height.
 * @param timestamp_high  High 32 bits of capture timestamp.
 * @param timestamp_low  Low 32 bits of capture timestamp.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_f4_tracking_send(mavlink_channel_t chan, uint32_t id, float x, float y, float w, float h, uint32_t timestamp_high, uint32_t timestamp_low)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_F4_TRACKING_LEN];
    _mav_put_uint32_t(buf, 0, id);
    _mav_put_float(buf, 4, x);
    _mav_put_float(buf, 8, y);
    _mav_put_float(buf, 12, w);
    _mav_put_float(buf, 16, h);
    _mav_put_uint32_t(buf, 20, timestamp_high);
    _mav_put_uint32_t(buf, 24, timestamp_low);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_F4_TRACKING, buf, MAVLINK_MSG_ID_F4_TRACKING_MIN_LEN, MAVLINK_MSG_ID_F4_TRACKING_LEN, MAVLINK_MSG_ID_F4_TRACKING_CRC);
#else
    mavlink_f4_tracking_t packet;
    packet.id = id;
    packet.x = x;
    packet.y = y;
    packet.w = w;
    packet.h = h;
    packet.timestamp_high = timestamp_high;
    packet.timestamp_low = timestamp_low;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_F4_TRACKING, (const char *)&packet, MAVLINK_MSG_ID_F4_TRACKING_MIN_LEN, MAVLINK_MSG_ID_F4_TRACKING_LEN, MAVLINK_MSG_ID_F4_TRACKING_CRC);
#endif
}

/**
 * @brief Send a f4_tracking message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_f4_tracking_send_struct(mavlink_channel_t chan, const mavlink_f4_tracking_t* f4_tracking)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_f4_tracking_send(chan, f4_tracking->id, f4_tracking->x, f4_tracking->y, f4_tracking->w, f4_tracking->h, f4_tracking->timestamp_high, f4_tracking->timestamp_low);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_F4_TRACKING, (const char *)f4_tracking, MAVLINK_MSG_ID_F4_TRACKING_MIN_LEN, MAVLINK_MSG_ID_F4_TRACKING_LEN, MAVLINK_MSG_ID_F4_TRACKING_CRC);
#endif
}

#if MAVLINK_MSG_ID_F4_TRACKING_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_f4_tracking_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t id, float x, float y, float w, float h, uint32_t timestamp_high, uint32_t timestamp_low)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, id);
    _mav_put_float(buf, 4, x);
    _mav_put_float(buf, 8, y);
    _mav_put_float(buf, 12, w);
    _mav_put_float(buf, 16, h);
    _mav_put_uint32_t(buf, 20, timestamp_high);
    _mav_put_uint32_t(buf, 24, timestamp_low);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_F4_TRACKING, buf, MAVLINK_MSG_ID_F4_TRACKING_MIN_LEN, MAVLINK_MSG_ID_F4_TRACKING_LEN, MAVLINK_MSG_ID_F4_TRACKING_CRC);
#else
    mavlink_f4_tracking_t *packet = (mavlink_f4_tracking_t *)msgbuf;
    packet->id = id;
    packet->x = x;
    packet->y = y;
    packet->w = w;
    packet->h = h;
    packet->timestamp_high = timestamp_high;
    packet->timestamp_low = timestamp_low;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_F4_TRACKING, (const char *)packet, MAVLINK_MSG_ID_F4_TRACKING_MIN_LEN, MAVLINK_MSG_ID_F4_TRACKING_LEN, MAVLINK_MSG_ID_F4_TRACKING_CRC);
#endif
}
#endif

#endif

// MESSAGE F4_TRACKING UNPACKING


/**
 * @brief Get field id from f4_tracking message
 *
 * @return  Unique tracking identifier.
 */
static inline uint32_t mavlink_msg_f4_tracking_get_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field x from f4_tracking message
 *
 * @return  Normalized center X coordinate.
 */
static inline float mavlink_msg_f4_tracking_get_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field y from f4_tracking message
 *
 * @return  Normalized center Y coordinate.
 */
static inline float mavlink_msg_f4_tracking_get_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field w from f4_tracking message
 *
 * @return  Normalized width.
 */
static inline float mavlink_msg_f4_tracking_get_w(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field h from f4_tracking message
 *
 * @return  Normalized height.
 */
static inline float mavlink_msg_f4_tracking_get_h(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field timestamp_high from f4_tracking message
 *
 * @return  High 32 bits of capture timestamp.
 */
static inline uint32_t mavlink_msg_f4_tracking_get_timestamp_high(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  20);
}

/**
 * @brief Get field timestamp_low from f4_tracking message
 *
 * @return  Low 32 bits of capture timestamp.
 */
static inline uint32_t mavlink_msg_f4_tracking_get_timestamp_low(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  24);
}

/**
 * @brief Decode a f4_tracking message into a struct
 *
 * @param msg The message to decode
 * @param f4_tracking C-struct to decode the message contents into
 */
static inline void mavlink_msg_f4_tracking_decode(const mavlink_message_t* msg, mavlink_f4_tracking_t* f4_tracking)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    f4_tracking->id = mavlink_msg_f4_tracking_get_id(msg);
    f4_tracking->x = mavlink_msg_f4_tracking_get_x(msg);
    f4_tracking->y = mavlink_msg_f4_tracking_get_y(msg);
    f4_tracking->w = mavlink_msg_f4_tracking_get_w(msg);
    f4_tracking->h = mavlink_msg_f4_tracking_get_h(msg);
    f4_tracking->timestamp_high = mavlink_msg_f4_tracking_get_timestamp_high(msg);
    f4_tracking->timestamp_low = mavlink_msg_f4_tracking_get_timestamp_low(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_F4_TRACKING_LEN? msg->len : MAVLINK_MSG_ID_F4_TRACKING_LEN;
        memset(f4_tracking, 0, MAVLINK_MSG_ID_F4_TRACKING_LEN);
    memcpy(f4_tracking, _MAV_PAYLOAD(msg), len);
#endif
}
