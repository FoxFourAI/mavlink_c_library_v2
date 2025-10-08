#pragma once
// MESSAGE F4_DETECTOR PACKING

#define MAVLINK_MSG_ID_F4_DETECTOR 61301


typedef struct __mavlink_f4_detector_t {
 uint32_t id; /*<  Unique detection identifier.*/
 float x; /*<  Normalized center X coordinate.*/
 float y; /*<  Normalized center Y coordinate.*/
 float w; /*<  Normalized width.*/
 float h; /*<  Normalized height.*/
 uint8_t class_type; /*<  Object classification.*/
} mavlink_f4_detector_t;

#define MAVLINK_MSG_ID_F4_DETECTOR_LEN 21
#define MAVLINK_MSG_ID_F4_DETECTOR_MIN_LEN 21
#define MAVLINK_MSG_ID_61301_LEN 21
#define MAVLINK_MSG_ID_61301_MIN_LEN 21

#define MAVLINK_MSG_ID_F4_DETECTOR_CRC 184
#define MAVLINK_MSG_ID_61301_CRC 184



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_F4_DETECTOR { \
    61301, \
    "F4_DETECTOR", \
    6, \
    {  { "id", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_f4_detector_t, id) }, \
         { "class_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 20, offsetof(mavlink_f4_detector_t, class_type) }, \
         { "x", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_f4_detector_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_f4_detector_t, y) }, \
         { "w", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_f4_detector_t, w) }, \
         { "h", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_f4_detector_t, h) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_F4_DETECTOR { \
    "F4_DETECTOR", \
    6, \
    {  { "id", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_f4_detector_t, id) }, \
         { "class_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 20, offsetof(mavlink_f4_detector_t, class_type) }, \
         { "x", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_f4_detector_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_f4_detector_t, y) }, \
         { "w", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_f4_detector_t, w) }, \
         { "h", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_f4_detector_t, h) }, \
         } \
}
#endif

/**
 * @brief Pack a f4_detector message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param id  Unique detection identifier.
 * @param class_type  Object classification.
 * @param x  Normalized center X coordinate.
 * @param y  Normalized center Y coordinate.
 * @param w  Normalized width.
 * @param h  Normalized height.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_f4_detector_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t id, uint8_t class_type, float x, float y, float w, float h)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_F4_DETECTOR_LEN];
    _mav_put_uint32_t(buf, 0, id);
    _mav_put_float(buf, 4, x);
    _mav_put_float(buf, 8, y);
    _mav_put_float(buf, 12, w);
    _mav_put_float(buf, 16, h);
    _mav_put_uint8_t(buf, 20, class_type);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_F4_DETECTOR_LEN);
#else
    mavlink_f4_detector_t packet;
    packet.id = id;
    packet.x = x;
    packet.y = y;
    packet.w = w;
    packet.h = h;
    packet.class_type = class_type;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_F4_DETECTOR_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_F4_DETECTOR;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_F4_DETECTOR_MIN_LEN, MAVLINK_MSG_ID_F4_DETECTOR_LEN, MAVLINK_MSG_ID_F4_DETECTOR_CRC);
}

/**
 * @brief Pack a f4_detector message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param id  Unique detection identifier.
 * @param class_type  Object classification.
 * @param x  Normalized center X coordinate.
 * @param y  Normalized center Y coordinate.
 * @param w  Normalized width.
 * @param h  Normalized height.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_f4_detector_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint32_t id, uint8_t class_type, float x, float y, float w, float h)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_F4_DETECTOR_LEN];
    _mav_put_uint32_t(buf, 0, id);
    _mav_put_float(buf, 4, x);
    _mav_put_float(buf, 8, y);
    _mav_put_float(buf, 12, w);
    _mav_put_float(buf, 16, h);
    _mav_put_uint8_t(buf, 20, class_type);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_F4_DETECTOR_LEN);
#else
    mavlink_f4_detector_t packet;
    packet.id = id;
    packet.x = x;
    packet.y = y;
    packet.w = w;
    packet.h = h;
    packet.class_type = class_type;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_F4_DETECTOR_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_F4_DETECTOR;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_F4_DETECTOR_MIN_LEN, MAVLINK_MSG_ID_F4_DETECTOR_LEN, MAVLINK_MSG_ID_F4_DETECTOR_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_F4_DETECTOR_MIN_LEN, MAVLINK_MSG_ID_F4_DETECTOR_LEN);
#endif
}

/**
 * @brief Pack a f4_detector message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param id  Unique detection identifier.
 * @param class_type  Object classification.
 * @param x  Normalized center X coordinate.
 * @param y  Normalized center Y coordinate.
 * @param w  Normalized width.
 * @param h  Normalized height.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_f4_detector_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t id,uint8_t class_type,float x,float y,float w,float h)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_F4_DETECTOR_LEN];
    _mav_put_uint32_t(buf, 0, id);
    _mav_put_float(buf, 4, x);
    _mav_put_float(buf, 8, y);
    _mav_put_float(buf, 12, w);
    _mav_put_float(buf, 16, h);
    _mav_put_uint8_t(buf, 20, class_type);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_F4_DETECTOR_LEN);
#else
    mavlink_f4_detector_t packet;
    packet.id = id;
    packet.x = x;
    packet.y = y;
    packet.w = w;
    packet.h = h;
    packet.class_type = class_type;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_F4_DETECTOR_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_F4_DETECTOR;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_F4_DETECTOR_MIN_LEN, MAVLINK_MSG_ID_F4_DETECTOR_LEN, MAVLINK_MSG_ID_F4_DETECTOR_CRC);
}

/**
 * @brief Encode a f4_detector struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param f4_detector C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_f4_detector_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_f4_detector_t* f4_detector)
{
    return mavlink_msg_f4_detector_pack(system_id, component_id, msg, f4_detector->id, f4_detector->class_type, f4_detector->x, f4_detector->y, f4_detector->w, f4_detector->h);
}

/**
 * @brief Encode a f4_detector struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param f4_detector C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_f4_detector_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_f4_detector_t* f4_detector)
{
    return mavlink_msg_f4_detector_pack_chan(system_id, component_id, chan, msg, f4_detector->id, f4_detector->class_type, f4_detector->x, f4_detector->y, f4_detector->w, f4_detector->h);
}

/**
 * @brief Encode a f4_detector struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param f4_detector C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_f4_detector_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_f4_detector_t* f4_detector)
{
    return mavlink_msg_f4_detector_pack_status(system_id, component_id, _status, msg,  f4_detector->id, f4_detector->class_type, f4_detector->x, f4_detector->y, f4_detector->w, f4_detector->h);
}

/**
 * @brief Send a f4_detector message
 * @param chan MAVLink channel to send the message
 *
 * @param id  Unique detection identifier.
 * @param class_type  Object classification.
 * @param x  Normalized center X coordinate.
 * @param y  Normalized center Y coordinate.
 * @param w  Normalized width.
 * @param h  Normalized height.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_f4_detector_send(mavlink_channel_t chan, uint32_t id, uint8_t class_type, float x, float y, float w, float h)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_F4_DETECTOR_LEN];
    _mav_put_uint32_t(buf, 0, id);
    _mav_put_float(buf, 4, x);
    _mav_put_float(buf, 8, y);
    _mav_put_float(buf, 12, w);
    _mav_put_float(buf, 16, h);
    _mav_put_uint8_t(buf, 20, class_type);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_F4_DETECTOR, buf, MAVLINK_MSG_ID_F4_DETECTOR_MIN_LEN, MAVLINK_MSG_ID_F4_DETECTOR_LEN, MAVLINK_MSG_ID_F4_DETECTOR_CRC);
#else
    mavlink_f4_detector_t packet;
    packet.id = id;
    packet.x = x;
    packet.y = y;
    packet.w = w;
    packet.h = h;
    packet.class_type = class_type;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_F4_DETECTOR, (const char *)&packet, MAVLINK_MSG_ID_F4_DETECTOR_MIN_LEN, MAVLINK_MSG_ID_F4_DETECTOR_LEN, MAVLINK_MSG_ID_F4_DETECTOR_CRC);
#endif
}

/**
 * @brief Send a f4_detector message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_f4_detector_send_struct(mavlink_channel_t chan, const mavlink_f4_detector_t* f4_detector)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_f4_detector_send(chan, f4_detector->id, f4_detector->class_type, f4_detector->x, f4_detector->y, f4_detector->w, f4_detector->h);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_F4_DETECTOR, (const char *)f4_detector, MAVLINK_MSG_ID_F4_DETECTOR_MIN_LEN, MAVLINK_MSG_ID_F4_DETECTOR_LEN, MAVLINK_MSG_ID_F4_DETECTOR_CRC);
#endif
}

#if MAVLINK_MSG_ID_F4_DETECTOR_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_f4_detector_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t id, uint8_t class_type, float x, float y, float w, float h)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, id);
    _mav_put_float(buf, 4, x);
    _mav_put_float(buf, 8, y);
    _mav_put_float(buf, 12, w);
    _mav_put_float(buf, 16, h);
    _mav_put_uint8_t(buf, 20, class_type);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_F4_DETECTOR, buf, MAVLINK_MSG_ID_F4_DETECTOR_MIN_LEN, MAVLINK_MSG_ID_F4_DETECTOR_LEN, MAVLINK_MSG_ID_F4_DETECTOR_CRC);
#else
    mavlink_f4_detector_t *packet = (mavlink_f4_detector_t *)msgbuf;
    packet->id = id;
    packet->x = x;
    packet->y = y;
    packet->w = w;
    packet->h = h;
    packet->class_type = class_type;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_F4_DETECTOR, (const char *)packet, MAVLINK_MSG_ID_F4_DETECTOR_MIN_LEN, MAVLINK_MSG_ID_F4_DETECTOR_LEN, MAVLINK_MSG_ID_F4_DETECTOR_CRC);
#endif
}
#endif

#endif

// MESSAGE F4_DETECTOR UNPACKING


/**
 * @brief Get field id from f4_detector message
 *
 * @return  Unique detection identifier.
 */
static inline uint32_t mavlink_msg_f4_detector_get_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field class_type from f4_detector message
 *
 * @return  Object classification.
 */
static inline uint8_t mavlink_msg_f4_detector_get_class_type(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  20);
}

/**
 * @brief Get field x from f4_detector message
 *
 * @return  Normalized center X coordinate.
 */
static inline float mavlink_msg_f4_detector_get_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field y from f4_detector message
 *
 * @return  Normalized center Y coordinate.
 */
static inline float mavlink_msg_f4_detector_get_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field w from f4_detector message
 *
 * @return  Normalized width.
 */
static inline float mavlink_msg_f4_detector_get_w(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field h from f4_detector message
 *
 * @return  Normalized height.
 */
static inline float mavlink_msg_f4_detector_get_h(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Decode a f4_detector message into a struct
 *
 * @param msg The message to decode
 * @param f4_detector C-struct to decode the message contents into
 */
static inline void mavlink_msg_f4_detector_decode(const mavlink_message_t* msg, mavlink_f4_detector_t* f4_detector)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    f4_detector->id = mavlink_msg_f4_detector_get_id(msg);
    f4_detector->x = mavlink_msg_f4_detector_get_x(msg);
    f4_detector->y = mavlink_msg_f4_detector_get_y(msg);
    f4_detector->w = mavlink_msg_f4_detector_get_w(msg);
    f4_detector->h = mavlink_msg_f4_detector_get_h(msg);
    f4_detector->class_type = mavlink_msg_f4_detector_get_class_type(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_F4_DETECTOR_LEN? msg->len : MAVLINK_MSG_ID_F4_DETECTOR_LEN;
        memset(f4_detector, 0, MAVLINK_MSG_ID_F4_DETECTOR_LEN);
    memcpy(f4_detector, _MAV_PAYLOAD(msg), len);
#endif
}
