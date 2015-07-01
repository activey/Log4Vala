/* log4vala-0.0.1.h generated by valac 0.28.0, the Vala compiler, do not modify */


#ifndef __SRC_LIBRARY_C_LOG4VALA_0_0_1_H__
#define __SRC_LIBRARY_C_LOG4VALA_0_0_1_H__

#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <gio/gio.h>

G_BEGIN_DECLS


#define LOG4_VALA_APPENDER_TYPE_IAPPENDER (log4_vala_appender_iappender_get_type ())
#define LOG4_VALA_APPENDER_IAPPENDER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), LOG4_VALA_APPENDER_TYPE_IAPPENDER, Log4ValaAppenderIAppender))
#define LOG4_VALA_APPENDER_IS_IAPPENDER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), LOG4_VALA_APPENDER_TYPE_IAPPENDER))
#define LOG4_VALA_APPENDER_IAPPENDER_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), LOG4_VALA_APPENDER_TYPE_IAPPENDER, Log4ValaAppenderIAppenderIface))

typedef struct _Log4ValaAppenderIAppender Log4ValaAppenderIAppender;
typedef struct _Log4ValaAppenderIAppenderIface Log4ValaAppenderIAppenderIface;

#define LOG4_VALA_TYPE_LOG_EVENT (log4_vala_log_event_get_type ())
#define LOG4_VALA_LOG_EVENT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), LOG4_VALA_TYPE_LOG_EVENT, Log4ValaLogEvent))
#define LOG4_VALA_LOG_EVENT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), LOG4_VALA_TYPE_LOG_EVENT, Log4ValaLogEventClass))
#define LOG4_VALA_IS_LOG_EVENT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), LOG4_VALA_TYPE_LOG_EVENT))
#define LOG4_VALA_IS_LOG_EVENT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), LOG4_VALA_TYPE_LOG_EVENT))
#define LOG4_VALA_LOG_EVENT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), LOG4_VALA_TYPE_LOG_EVENT, Log4ValaLogEventClass))

typedef struct _Log4ValaLogEvent Log4ValaLogEvent;
typedef struct _Log4ValaLogEventClass Log4ValaLogEventClass;

#define LOG4_VALA_LAYOUT_TYPE_ILAYOUT (log4_vala_layout_ilayout_get_type ())
#define LOG4_VALA_LAYOUT_ILAYOUT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), LOG4_VALA_LAYOUT_TYPE_ILAYOUT, Log4ValaLayoutILayout))
#define LOG4_VALA_LAYOUT_IS_ILAYOUT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), LOG4_VALA_LAYOUT_TYPE_ILAYOUT))
#define LOG4_VALA_LAYOUT_ILAYOUT_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), LOG4_VALA_LAYOUT_TYPE_ILAYOUT, Log4ValaLayoutILayoutIface))

typedef struct _Log4ValaLayoutILayout Log4ValaLayoutILayout;
typedef struct _Log4ValaLayoutILayoutIface Log4ValaLayoutILayoutIface;

#define LOG4_VALA_APPENDER_TYPE_FILE_APPENDER (log4_vala_appender_file_appender_get_type ())
#define LOG4_VALA_APPENDER_FILE_APPENDER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), LOG4_VALA_APPENDER_TYPE_FILE_APPENDER, Log4ValaAppenderFileAppender))
#define LOG4_VALA_APPENDER_FILE_APPENDER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), LOG4_VALA_APPENDER_TYPE_FILE_APPENDER, Log4ValaAppenderFileAppenderClass))
#define LOG4_VALA_APPENDER_IS_FILE_APPENDER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), LOG4_VALA_APPENDER_TYPE_FILE_APPENDER))
#define LOG4_VALA_APPENDER_IS_FILE_APPENDER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), LOG4_VALA_APPENDER_TYPE_FILE_APPENDER))
#define LOG4_VALA_APPENDER_FILE_APPENDER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), LOG4_VALA_APPENDER_TYPE_FILE_APPENDER, Log4ValaAppenderFileAppenderClass))

typedef struct _Log4ValaAppenderFileAppender Log4ValaAppenderFileAppender;
typedef struct _Log4ValaAppenderFileAppenderClass Log4ValaAppenderFileAppenderClass;
typedef struct _Log4ValaAppenderFileAppenderPrivate Log4ValaAppenderFileAppenderPrivate;

#define LOG4_VALA_APPENDER_TYPE_SCREEN_APPENDER (log4_vala_appender_screen_appender_get_type ())
#define LOG4_VALA_APPENDER_SCREEN_APPENDER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), LOG4_VALA_APPENDER_TYPE_SCREEN_APPENDER, Log4ValaAppenderScreenAppender))
#define LOG4_VALA_APPENDER_SCREEN_APPENDER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), LOG4_VALA_APPENDER_TYPE_SCREEN_APPENDER, Log4ValaAppenderScreenAppenderClass))
#define LOG4_VALA_APPENDER_IS_SCREEN_APPENDER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), LOG4_VALA_APPENDER_TYPE_SCREEN_APPENDER))
#define LOG4_VALA_APPENDER_IS_SCREEN_APPENDER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), LOG4_VALA_APPENDER_TYPE_SCREEN_APPENDER))
#define LOG4_VALA_APPENDER_SCREEN_APPENDER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), LOG4_VALA_APPENDER_TYPE_SCREEN_APPENDER, Log4ValaAppenderScreenAppenderClass))

typedef struct _Log4ValaAppenderScreenAppender Log4ValaAppenderScreenAppender;
typedef struct _Log4ValaAppenderScreenAppenderClass Log4ValaAppenderScreenAppenderClass;
typedef struct _Log4ValaAppenderScreenAppenderPrivate Log4ValaAppenderScreenAppenderPrivate;

#define LOG4_VALA_APPENDER_TYPE_SOCKET_APPENDER (log4_vala_appender_socket_appender_get_type ())
#define LOG4_VALA_APPENDER_SOCKET_APPENDER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), LOG4_VALA_APPENDER_TYPE_SOCKET_APPENDER, Log4ValaAppenderSocketAppender))
#define LOG4_VALA_APPENDER_SOCKET_APPENDER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), LOG4_VALA_APPENDER_TYPE_SOCKET_APPENDER, Log4ValaAppenderSocketAppenderClass))
#define LOG4_VALA_APPENDER_IS_SOCKET_APPENDER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), LOG4_VALA_APPENDER_TYPE_SOCKET_APPENDER))
#define LOG4_VALA_APPENDER_IS_SOCKET_APPENDER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), LOG4_VALA_APPENDER_TYPE_SOCKET_APPENDER))
#define LOG4_VALA_APPENDER_SOCKET_APPENDER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), LOG4_VALA_APPENDER_TYPE_SOCKET_APPENDER, Log4ValaAppenderSocketAppenderClass))

typedef struct _Log4ValaAppenderSocketAppender Log4ValaAppenderSocketAppender;
typedef struct _Log4ValaAppenderSocketAppenderClass Log4ValaAppenderSocketAppenderClass;
typedef struct _Log4ValaAppenderSocketAppenderPrivate Log4ValaAppenderSocketAppenderPrivate;

#define LOG4_VALA_TYPE_CONFIG (log4_vala_config_get_type ())
#define LOG4_VALA_CONFIG(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), LOG4_VALA_TYPE_CONFIG, Log4ValaConfig))
#define LOG4_VALA_CONFIG_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), LOG4_VALA_TYPE_CONFIG, Log4ValaConfigClass))
#define LOG4_VALA_IS_CONFIG(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), LOG4_VALA_TYPE_CONFIG))
#define LOG4_VALA_IS_CONFIG_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), LOG4_VALA_TYPE_CONFIG))
#define LOG4_VALA_CONFIG_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), LOG4_VALA_TYPE_CONFIG, Log4ValaConfigClass))

typedef struct _Log4ValaConfig Log4ValaConfig;
typedef struct _Log4ValaConfigClass Log4ValaConfigClass;
typedef struct _Log4ValaConfigPrivate Log4ValaConfigPrivate;

#define LOG4_VALA_TYPE_LOGGER_CONFIG (log4_vala_logger_config_get_type ())
#define LOG4_VALA_LOGGER_CONFIG(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), LOG4_VALA_TYPE_LOGGER_CONFIG, Log4ValaLoggerConfig))
#define LOG4_VALA_LOGGER_CONFIG_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), LOG4_VALA_TYPE_LOGGER_CONFIG, Log4ValaLoggerConfigClass))
#define LOG4_VALA_IS_LOGGER_CONFIG(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), LOG4_VALA_TYPE_LOGGER_CONFIG))
#define LOG4_VALA_IS_LOGGER_CONFIG_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), LOG4_VALA_TYPE_LOGGER_CONFIG))
#define LOG4_VALA_LOGGER_CONFIG_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), LOG4_VALA_TYPE_LOGGER_CONFIG, Log4ValaLoggerConfigClass))

typedef struct _Log4ValaLoggerConfig Log4ValaLoggerConfig;
typedef struct _Log4ValaLoggerConfigClass Log4ValaLoggerConfigClass;

#define LOG4_VALA_TYPE_LEVEL (log4_vala_level_get_type ())

#define LOG4_VALA_LAYOUT_TYPE_DESCRIPTIVE_LAYOUT (log4_vala_layout_descriptive_layout_get_type ())
#define LOG4_VALA_LAYOUT_DESCRIPTIVE_LAYOUT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), LOG4_VALA_LAYOUT_TYPE_DESCRIPTIVE_LAYOUT, Log4ValaLayoutDescriptiveLayout))
#define LOG4_VALA_LAYOUT_DESCRIPTIVE_LAYOUT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), LOG4_VALA_LAYOUT_TYPE_DESCRIPTIVE_LAYOUT, Log4ValaLayoutDescriptiveLayoutClass))
#define LOG4_VALA_LAYOUT_IS_DESCRIPTIVE_LAYOUT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), LOG4_VALA_LAYOUT_TYPE_DESCRIPTIVE_LAYOUT))
#define LOG4_VALA_LAYOUT_IS_DESCRIPTIVE_LAYOUT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), LOG4_VALA_LAYOUT_TYPE_DESCRIPTIVE_LAYOUT))
#define LOG4_VALA_LAYOUT_DESCRIPTIVE_LAYOUT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), LOG4_VALA_LAYOUT_TYPE_DESCRIPTIVE_LAYOUT, Log4ValaLayoutDescriptiveLayoutClass))

typedef struct _Log4ValaLayoutDescriptiveLayout Log4ValaLayoutDescriptiveLayout;
typedef struct _Log4ValaLayoutDescriptiveLayoutClass Log4ValaLayoutDescriptiveLayoutClass;
typedef struct _Log4ValaLayoutDescriptiveLayoutPrivate Log4ValaLayoutDescriptiveLayoutPrivate;

#define LOG4_VALA_LAYOUT_TYPE_PATTERN_LAYOUT (log4_vala_layout_pattern_layout_get_type ())
#define LOG4_VALA_LAYOUT_PATTERN_LAYOUT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), LOG4_VALA_LAYOUT_TYPE_PATTERN_LAYOUT, Log4ValaLayoutPatternLayout))
#define LOG4_VALA_LAYOUT_PATTERN_LAYOUT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), LOG4_VALA_LAYOUT_TYPE_PATTERN_LAYOUT, Log4ValaLayoutPatternLayoutClass))
#define LOG4_VALA_LAYOUT_IS_PATTERN_LAYOUT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), LOG4_VALA_LAYOUT_TYPE_PATTERN_LAYOUT))
#define LOG4_VALA_LAYOUT_IS_PATTERN_LAYOUT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), LOG4_VALA_LAYOUT_TYPE_PATTERN_LAYOUT))
#define LOG4_VALA_LAYOUT_PATTERN_LAYOUT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), LOG4_VALA_LAYOUT_TYPE_PATTERN_LAYOUT, Log4ValaLayoutPatternLayoutClass))

typedef struct _Log4ValaLayoutPatternLayout Log4ValaLayoutPatternLayout;
typedef struct _Log4ValaLayoutPatternLayoutClass Log4ValaLayoutPatternLayoutClass;
typedef struct _Log4ValaLayoutPatternLayoutPrivate Log4ValaLayoutPatternLayoutPrivate;

#define LOG4_VALA_LAYOUT_TYPE_SIMPLE_LAYOUT (log4_vala_layout_simple_layout_get_type ())
#define LOG4_VALA_LAYOUT_SIMPLE_LAYOUT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), LOG4_VALA_LAYOUT_TYPE_SIMPLE_LAYOUT, Log4ValaLayoutSimpleLayout))
#define LOG4_VALA_LAYOUT_SIMPLE_LAYOUT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), LOG4_VALA_LAYOUT_TYPE_SIMPLE_LAYOUT, Log4ValaLayoutSimpleLayoutClass))
#define LOG4_VALA_LAYOUT_IS_SIMPLE_LAYOUT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), LOG4_VALA_LAYOUT_TYPE_SIMPLE_LAYOUT))
#define LOG4_VALA_LAYOUT_IS_SIMPLE_LAYOUT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), LOG4_VALA_LAYOUT_TYPE_SIMPLE_LAYOUT))
#define LOG4_VALA_LAYOUT_SIMPLE_LAYOUT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), LOG4_VALA_LAYOUT_TYPE_SIMPLE_LAYOUT, Log4ValaLayoutSimpleLayoutClass))

typedef struct _Log4ValaLayoutSimpleLayout Log4ValaLayoutSimpleLayout;
typedef struct _Log4ValaLayoutSimpleLayoutClass Log4ValaLayoutSimpleLayoutClass;
typedef struct _Log4ValaLayoutSimpleLayoutPrivate Log4ValaLayoutSimpleLayoutPrivate;
typedef struct _Log4ValaLogEventPrivate Log4ValaLogEventPrivate;

#define LOG4_VALA_TYPE_LOGGER (log4_vala_logger_get_type ())
#define LOG4_VALA_LOGGER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), LOG4_VALA_TYPE_LOGGER, Log4ValaLogger))
#define LOG4_VALA_LOGGER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), LOG4_VALA_TYPE_LOGGER, Log4ValaLoggerClass))
#define LOG4_VALA_IS_LOGGER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), LOG4_VALA_TYPE_LOGGER))
#define LOG4_VALA_IS_LOGGER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), LOG4_VALA_TYPE_LOGGER))
#define LOG4_VALA_LOGGER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), LOG4_VALA_TYPE_LOGGER, Log4ValaLoggerClass))

typedef struct _Log4ValaLogger Log4ValaLogger;
typedef struct _Log4ValaLoggerClass Log4ValaLoggerClass;
typedef struct _Log4ValaLoggerPrivate Log4ValaLoggerPrivate;
typedef struct _Log4ValaLoggerConfigPrivate Log4ValaLoggerConfigPrivate;

struct _Log4ValaLayoutILayoutIface {
	GTypeInterface parent_iface;
	gchar* (*format) (Log4ValaLayoutILayout* self, Log4ValaLogEvent* event);
	const gchar* (*get_header) (Log4ValaLayoutILayout* self);
	void (*set_header) (Log4ValaLayoutILayout* self, const gchar* value);
	const gchar* (*get_footer) (Log4ValaLayoutILayout* self);
	void (*set_footer) (Log4ValaLayoutILayout* self, const gchar* value);
};

struct _Log4ValaAppenderIAppenderIface {
	GTypeInterface parent_iface;
	void (*append) (Log4ValaAppenderIAppender* self, Log4ValaLogEvent* event);
	const gchar* (*get_name) (Log4ValaAppenderIAppender* self);
	void (*set_name) (Log4ValaAppenderIAppender* self, const gchar* value);
	Log4ValaLayoutILayout* (*get_layout) (Log4ValaAppenderIAppender* self);
	void (*set_layout) (Log4ValaAppenderIAppender* self, Log4ValaLayoutILayout* value);
};

struct _Log4ValaAppenderFileAppender {
	GObject parent_instance;
	Log4ValaAppenderFileAppenderPrivate * priv;
};

struct _Log4ValaAppenderFileAppenderClass {
	GObjectClass parent_class;
};

struct _Log4ValaAppenderScreenAppender {
	GObject parent_instance;
	Log4ValaAppenderScreenAppenderPrivate * priv;
};

struct _Log4ValaAppenderScreenAppenderClass {
	GObjectClass parent_class;
};

typedef enum  {
	LOG4_VALA_APPENDER_CONNECTION_ERROR_CANNOT_RESOLVE,
	LOG4_VALA_APPENDER_CONNECTION_ERROR_CANNOT_CONNECT
} Log4ValaAppenderConnectionError;
#define LOG4_VALA_APPENDER_CONNECTION_ERROR log4_vala_appender_connection_error_quark ()
struct _Log4ValaAppenderSocketAppender {
	GObject parent_instance;
	Log4ValaAppenderSocketAppenderPrivate * priv;
};

struct _Log4ValaAppenderSocketAppenderClass {
	GObjectClass parent_class;
};

struct _Log4ValaConfig {
	GObject parent_instance;
	Log4ValaConfigPrivate * priv;
	GHashTable* appenders;
	GHashTable* loggers;
};

struct _Log4ValaConfigClass {
	GObjectClass parent_class;
};

typedef enum  {
	LOG4_VALA_LEVEL_TRACE,
	LOG4_VALA_LEVEL_DEBUG,
	LOG4_VALA_LEVEL_INFO,
	LOG4_VALA_LEVEL_WARN,
	LOG4_VALA_LEVEL_ERROR,
	LOG4_VALA_LEVEL_FATAL
} Log4ValaLevel;

struct _Log4ValaLayoutDescriptiveLayout {
	GObject parent_instance;
	Log4ValaLayoutDescriptiveLayoutPrivate * priv;
};

struct _Log4ValaLayoutDescriptiveLayoutClass {
	GObjectClass parent_class;
};

struct _Log4ValaLayoutPatternLayout {
	GObject parent_instance;
	Log4ValaLayoutPatternLayoutPrivate * priv;
};

struct _Log4ValaLayoutPatternLayoutClass {
	GObjectClass parent_class;
};

struct _Log4ValaLayoutSimpleLayout {
	GObject parent_instance;
	Log4ValaLayoutSimpleLayoutPrivate * priv;
};

struct _Log4ValaLayoutSimpleLayoutClass {
	GObjectClass parent_class;
};

struct _Log4ValaLogEvent {
	GObject parent_instance;
	Log4ValaLogEventPrivate * priv;
};

struct _Log4ValaLogEventClass {
	GObjectClass parent_class;
};

struct _Log4ValaLogger {
	GObject parent_instance;
	Log4ValaLoggerPrivate * priv;
};

struct _Log4ValaLoggerClass {
	GObjectClass parent_class;
};

struct _Log4ValaLoggerConfig {
	GTypeInstance parent_instance;
	volatile int ref_count;
	Log4ValaLoggerConfigPrivate * priv;
	gchar** appenders;
	gint appenders_length1;
	Log4ValaLevel* level;
};

struct _Log4ValaLoggerConfigClass {
	GTypeClass parent_class;
	void (*finalize) (Log4ValaLoggerConfig *self);
};


GType log4_vala_log_event_get_type (void) G_GNUC_CONST;
GType log4_vala_layout_ilayout_get_type (void) G_GNUC_CONST;
GType log4_vala_appender_iappender_get_type (void) G_GNUC_CONST;
GType log4_vala_appender_file_appender_get_type (void) G_GNUC_CONST;
void log4_vala_appender_file_appender_close_file (Log4ValaAppenderFileAppender* self);
Log4ValaAppenderFileAppender* log4_vala_appender_file_appender_new (void);
Log4ValaAppenderFileAppender* log4_vala_appender_file_appender_construct (GType object_type);
const gchar* log4_vala_appender_file_appender_get_filename (Log4ValaAppenderFileAppender* self);
void log4_vala_appender_file_appender_set_filename (Log4ValaAppenderFileAppender* self, const gchar* value);
const gchar* log4_vala_appender_file_appender_get_mode (Log4ValaAppenderFileAppender* self);
void log4_vala_appender_file_appender_set_mode (Log4ValaAppenderFileAppender* self, const gchar* value);
const gchar* log4_vala_appender_file_appender_get_buffered (Log4ValaAppenderFileAppender* self);
void log4_vala_appender_file_appender_set_buffered (Log4ValaAppenderFileAppender* self, const gchar* value);
void log4_vala_appender_iappender_append (Log4ValaAppenderIAppender* self, Log4ValaLogEvent* event);
const gchar* log4_vala_appender_iappender_get_name (Log4ValaAppenderIAppender* self);
void log4_vala_appender_iappender_set_name (Log4ValaAppenderIAppender* self, const gchar* value);
Log4ValaLayoutILayout* log4_vala_appender_iappender_get_layout (Log4ValaAppenderIAppender* self);
void log4_vala_appender_iappender_set_layout (Log4ValaAppenderIAppender* self, Log4ValaLayoutILayout* value);
GType log4_vala_appender_screen_appender_get_type (void) G_GNUC_CONST;
Log4ValaAppenderScreenAppender* log4_vala_appender_screen_appender_new (void);
Log4ValaAppenderScreenAppender* log4_vala_appender_screen_appender_construct (GType object_type);
const gchar* log4_vala_appender_screen_appender_get_stderr (Log4ValaAppenderScreenAppender* self);
void log4_vala_appender_screen_appender_set_stderr (Log4ValaAppenderScreenAppender* self, const gchar* value);
GQuark log4_vala_appender_connection_error_quark (void);
GType log4_vala_appender_socket_appender_get_type (void) G_GNUC_CONST;
Log4ValaAppenderSocketAppender* log4_vala_appender_socket_appender_new (void);
Log4ValaAppenderSocketAppender* log4_vala_appender_socket_appender_construct (GType object_type);
const gchar* log4_vala_appender_socket_appender_get_host (Log4ValaAppenderSocketAppender* self);
void log4_vala_appender_socket_appender_set_host (Log4ValaAppenderSocketAppender* self, const gchar* value);
const gchar* log4_vala_appender_socket_appender_get_port (Log4ValaAppenderSocketAppender* self);
void log4_vala_appender_socket_appender_set_port (Log4ValaAppenderSocketAppender* self, const gchar* value);
const gchar* log4_vala_appender_socket_appender_get_protocol (Log4ValaAppenderSocketAppender* self);
void log4_vala_appender_socket_appender_set_protocol (Log4ValaAppenderSocketAppender* self, const gchar* value);
GType log4_vala_config_get_type (void) G_GNUC_CONST;
gpointer log4_vala_logger_config_ref (gpointer instance);
void log4_vala_logger_config_unref (gpointer instance);
GParamSpec* log4_vala_param_spec_logger_config (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void log4_vala_value_set_logger_config (GValue* value, gpointer v_object);
void log4_vala_value_take_logger_config (GValue* value, gpointer v_object);
gpointer log4_vala_value_get_logger_config (const GValue* value);
GType log4_vala_logger_config_get_type (void) G_GNUC_CONST;
Log4ValaConfig* log4_vala_config_get_config (void);
void log4_vala_config_add_appender (Log4ValaConfig* self, const gchar* appender_name, Log4ValaAppenderIAppender* appender);
void log4_vala_config_remove_appender (Log4ValaConfig* self, const gchar* appender_name);
void log4_vala_config_add_logger (Log4ValaConfig* self, const gchar* logger_name, Log4ValaLoggerConfig* config);
void log4_vala_config_remove_logger (Log4ValaConfig* self, const gchar* logger_name);
Log4ValaAppenderIAppender** log4_vala_config_get_appenders_for_logger (Log4ValaConfig* self, const gchar* name, int* result_length1);
GType log4_vala_level_get_type (void) G_GNUC_CONST;
Log4ValaLevel log4_vala_config_get_level_for_logger (Log4ValaConfig* self, const gchar* name);
void log4_vala_config_parse_config (Log4ValaConfig* self);
void log4_vala_config_parse_config_line (Log4ValaConfig* self, gchar** line_to_parse);
Log4ValaAppenderIAppender* log4_vala_config_get_root_appender (Log4ValaConfig* self);
void log4_vala_config_set_root_appender (Log4ValaConfig* self, Log4ValaAppenderIAppender* value);
Log4ValaLevel log4_vala_config_get_root_level (Log4ValaConfig* self);
void log4_vala_config_set_root_level (Log4ValaConfig* self, Log4ValaLevel value);
const gchar* log4_vala_config_get_config_file (Log4ValaConfig* self);
void log4_vala_config_set_config_file (Log4ValaConfig* self, const gchar* value);
gboolean log4_vala_config_get_translate_type_name (Log4ValaConfig* self);
void log4_vala_config_set_translate_type_name (Log4ValaConfig* self, gboolean value);
void log4_vala_init (const gchar* config_file);
void log4_vala_init_and_watch (const gchar* config_file, gint interval);
GType log4_vala_layout_descriptive_layout_get_type (void) G_GNUC_CONST;
#define LOG4_VALA_LAYOUT_DESCRIPTIVE_LAYOUT_error_format " | Error: Code %d, Domain %" G_GUINT32_FORMAT ", Message: %s"
Log4ValaLayoutDescriptiveLayout* log4_vala_layout_descriptive_layout_new (void);
Log4ValaLayoutDescriptiveLayout* log4_vala_layout_descriptive_layout_construct (GType object_type);
gchar* log4_vala_layout_ilayout_format (Log4ValaLayoutILayout* self, Log4ValaLogEvent* event);
const gchar* log4_vala_layout_ilayout_get_header (Log4ValaLayoutILayout* self);
void log4_vala_layout_ilayout_set_header (Log4ValaLayoutILayout* self, const gchar* value);
const gchar* log4_vala_layout_ilayout_get_footer (Log4ValaLayoutILayout* self);
void log4_vala_layout_ilayout_set_footer (Log4ValaLayoutILayout* self, const gchar* value);
GType log4_vala_layout_pattern_layout_get_type (void) G_GNUC_CONST;
#define LOG4_VALA_LAYOUT_PATTERN_LAYOUT_SIMPLE_PATTERN "%p - %m"
#define LOG4_VALA_LAYOUT_PATTERN_LAYOUT_DESCRIPTIVE_PATTERN "%d{%Y-%m-%d %H:%M:%S} %5p %c %m %E{ | Error: Code %Ec, Domain %Ed, Mes" \
"sage: %Em}"
Log4ValaLayoutPatternLayout* log4_vala_layout_pattern_layout_new (void);
Log4ValaLayoutPatternLayout* log4_vala_layout_pattern_layout_construct (GType object_type);
const gchar* log4_vala_layout_pattern_layout_get_pattern (Log4ValaLayoutPatternLayout* self);
void log4_vala_layout_pattern_layout_set_pattern (Log4ValaLayoutPatternLayout* self, const gchar* value);
GType log4_vala_layout_simple_layout_get_type (void) G_GNUC_CONST;
Log4ValaLayoutSimpleLayout* log4_vala_layout_simple_layout_new (void);
Log4ValaLayoutSimpleLayout* log4_vala_layout_simple_layout_construct (GType object_type);
gchar* log4_vala_level_friendly (Log4ValaLevel self);
Log4ValaLevel* log4_vala_level_get_by_name (const gchar* name);
Log4ValaLogEvent* log4_vala_log_event_new (void);
Log4ValaLogEvent* log4_vala_log_event_construct (GType object_type);
Log4ValaLogEvent* log4_vala_log_event_new_with_message (const gchar* logger_name, Log4ValaLevel log_level, const gchar* message, GError* _error_, GDateTime* timestamp);
Log4ValaLogEvent* log4_vala_log_event_construct_with_message (GType object_type, const gchar* logger_name, Log4ValaLevel log_level, const gchar* message, GError* _error_, GDateTime* timestamp);
const gchar* log4_vala_log_event_get_logger_name (Log4ValaLogEvent* self);
void log4_vala_log_event_set_logger_name (Log4ValaLogEvent* self, const gchar* value);
Log4ValaLevel log4_vala_log_event_get_log_level (Log4ValaLogEvent* self);
void log4_vala_log_event_set_log_level (Log4ValaLogEvent* self, Log4ValaLevel value);
GDateTime* log4_vala_log_event_get_timestamp (Log4ValaLogEvent* self);
void log4_vala_log_event_set_timestamp (Log4ValaLogEvent* self, GDateTime* value);
gint64 log4_vala_log_event_get_thread_id (Log4ValaLogEvent* self);
void log4_vala_log_event_set_thread_id (Log4ValaLogEvent* self, gint64 value);
gint log4_vala_log_event_get_process_id (Log4ValaLogEvent* self);
void log4_vala_log_event_set_process_id (Log4ValaLogEvent* self, gint value);
const gchar* log4_vala_log_event_get_message (Log4ValaLogEvent* self);
void log4_vala_log_event_set_message (Log4ValaLogEvent* self, const gchar* value);
GError* log4_vala_log_event_get_error (Log4ValaLogEvent* self);
void log4_vala_log_event_set_error (Log4ValaLogEvent* self, GError* value);
GType log4_vala_logger_get_type (void) G_GNUC_CONST;
Log4ValaLogger* log4_vala_logger_get_logger (const gchar* name);
Log4ValaLogger* log4_vala_logger_get_logger_for_object (GObject* object);
void log4_vala_logger_trace (Log4ValaLogger* self, const gchar* message, GError* e);
void log4_vala_logger_debug (Log4ValaLogger* self, const gchar* message, GError* e);
void log4_vala_logger_info (Log4ValaLogger* self, const gchar* message, GError* e);
void log4_vala_logger_warn (Log4ValaLogger* self, const gchar* message, GError* e);
void log4_vala_logger_error (Log4ValaLogger* self, const gchar* message, GError* e);
void log4_vala_logger_fatal (Log4ValaLogger* self, const gchar* message, GError* e);
void log4_vala_logger_log (Log4ValaLogger* self, Log4ValaLevel log_level, const gchar* message, GError* e);
void log4_vala_logger_log_async (Log4ValaLogger* self, Log4ValaLevel log_level, const gchar* message, GError* e, GAsyncReadyCallback _callback_, gpointer _user_data_);
void log4_vala_logger_log_finish (Log4ValaLogger* self, GAsyncResult* _res_);
void log4_vala_logger_trace_async (Log4ValaLogger* self, const gchar* message, GError* e, GAsyncReadyCallback _callback_, gpointer _user_data_);
void log4_vala_logger_trace_finish (Log4ValaLogger* self, GAsyncResult* _res_);
void log4_vala_logger_debug_async (Log4ValaLogger* self, const gchar* message, GError* e, GAsyncReadyCallback _callback_, gpointer _user_data_);
void log4_vala_logger_debug_finish (Log4ValaLogger* self, GAsyncResult* _res_);
void log4_vala_logger_info_async (Log4ValaLogger* self, const gchar* message, GError* e, GAsyncReadyCallback _callback_, gpointer _user_data_);
void log4_vala_logger_info_finish (Log4ValaLogger* self, GAsyncResult* _res_);
void log4_vala_logger_warn_async (Log4ValaLogger* self, const gchar* message, GError* e, GAsyncReadyCallback _callback_, gpointer _user_data_);
void log4_vala_logger_warn_finish (Log4ValaLogger* self, GAsyncResult* _res_);
void log4_vala_logger_error_async (Log4ValaLogger* self, const gchar* message, GError* e, GAsyncReadyCallback _callback_, gpointer _user_data_);
void log4_vala_logger_error_finish (Log4ValaLogger* self, GAsyncResult* _res_);
void log4_vala_logger_fatal_async (Log4ValaLogger* self, const gchar* message, GError* e, GAsyncReadyCallback _callback_, gpointer _user_data_);
void log4_vala_logger_fatal_finish (Log4ValaLogger* self, GAsyncResult* _res_);
const gchar* log4_vala_logger_get_name (Log4ValaLogger* self);
void log4_vala_logger_set_name (Log4ValaLogger* self, const gchar* value);
Log4ValaLevel log4_vala_logger_get_log_level (Log4ValaLogger* self);
void log4_vala_logger_set_log_level (Log4ValaLogger* self, Log4ValaLevel value);
Log4ValaLoggerConfig* log4_vala_logger_config_new (gchar** appenders, int appenders_length1, Log4ValaLevel* level);
Log4ValaLoggerConfig* log4_vala_logger_config_construct (GType object_type, gchar** appenders, int appenders_length1, Log4ValaLevel* level);
Log4ValaLoggerConfig* log4_vala_logger_config_new_from_config (const gchar* config_value);
Log4ValaLoggerConfig* log4_vala_logger_config_construct_from_config (GType object_type, const gchar* config_value);


G_END_DECLS

#endif