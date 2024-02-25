/*
 * Revised lint.h for compatibility with modern C standards and system libraries.
 */

// Standard library includes for functions previously declared here
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

// Forward declarations for structures
struct program;
struct function;
struct svalue;
struct sockaddr;

// PROT_STDIO macro adjustment for modern environments
#ifdef BUFSIZ
#    define PROT_STDIO(x) x
#else
#    define PROT_STDIO(x) ()
#endif

// PROT macro for function prototypes - Modern C environments always have __STDC__
#define PROT(x) x

// Standard functions should be used directly, without redeclaration in modern environments.
// Custom functions and those not part of the standard library can still be declared as needed.

// Custom or LPC-specific function declarations follow
struct object;
char *get_error_file PROT((char *));
void save_error PROT((char *, char *, int));
int write_file PROT((char *, char *));
int file_size PROT((char *));
char *check_file_name PROT((char *, int));
void remove_all_players PROT((void));
void load_wiz_file PROT((void));
void wizlist PROT((char *));
void backend PROT((void));
char *xalloc PROT((int));
void init_string_space PROT((void));
void error(void); // Example of updated declaration with void
void fatal(void);
void add_message(void);
void trace_log(void);
void debug_message(void);
void debug_message_value PROT((struct svalue *));
void print_local_commands(void);
void new_call_out PROT((struct object *, char *, int, struct svalue *));
void add_action PROT((char *, char *, int));
void list_files PROT((char *));
void enable_commands PROT((int));
void load_ob_from_swap PROT((struct object *));
int tail PROT((char *));
struct object *get_interactive_object PROT((int));
void enter_object_hash PROT((struct object *));
void remove_object_hash PROT((struct object *));
struct object *lookup_object_hash PROT((char *));
int show_otable_status PROT((int verbose));
void dumpstat PROT((void));
struct vector;
void free_vector PROT((struct vector *));
char *query_load_av PROT((void));
void update_compile_av PROT((int));
struct vector *map_array PROT((struct vector *arr, char *func, struct object *ob, struct svalue *extra));
struct vector *make_unique PROT((struct vector *arr, char *func, struct svalue *skipnum));
char *describe_items PROT((struct svalue *arr, char *func, int live));
struct vector *filter PROT((struct vector *arr, char *func, struct object *ob, struct svalue *));
int match_string PROT((char *, char *));
int set_heart_beat PROT((struct object *, int));
struct object *get_empty_object PROT((int));
struct svalue;
void assign_svalue PROT((struct svalue *, struct svalue *));
void assign_svalue_no_free PROT((struct svalue *to, struct svalue *from));
void free_svalue PROT((struct svalue *));
char *make_shared_string PROT((char *));
void free_string PROT((char *));
int add_string_status PROT((int verbose));
void notify_no_command(void);
void clear_notify(void);
void throw_error(void);
void set_living_name PROT((struct object *, char *));
void remove_living_name PROT((struct object *));
struct object *find_living_object PROT((char *, int));
int lookup_predef PROT((char *));
void yyerror PROT((char *));
int hashstr PROT((char *, int, int));
int lookup_predef PROT((char *));
char *dump_trace PROT((int));
int parse_command PROT((char *, struct object *));
struct svalue *apply PROT((char *, struct object *, int));
void push_string PROT((char *, int));
void push_number PROT((int));
void push_object PROT((struct object *));
struct object *clone_object PROT((char *));
void init_num_args(void);
int restore_object PROT((struct object *, char *));
void tell_object PROT((struct object *, char *));
struct object *first_inventory PROT((struct svalue *));
struct vector *slice_array PROT((struct vector *, int, int));
int query_idle PROT((struct object *));
char *implode_string PROT((struct vector *, char *));
struct object *query_snoop PROT((struct object *));
struct vector *all_inventory PROT((struct object *));
struct vector *deep_inventory PROT((struct object *, int));
struct object *environment PROT((struct svalue *));
struct vector *add_array PROT((struct vector *, struct vector *));
char *get_f_name PROT((int));
void startshutdowngame(void);
void set_notify_fail_message PROT((char *));
int swap PROT((struct object *));
int transfer_object PROT((struct object *, struct object *));
struct vector *users(void);
void do_write PROT((struct svalue *));
void log_file PROT((char *, char *));
int remove_call_out PROT((struct object *, char *));
char *create_wizard PROT((char *, char *));
void destruct_object PROT((struct svalue *));
void set_snoop PROT((struct object *, struct object *));
int new_set_snoop PROT((struct object *, struct object *));
void add_verb PROT((char *, int));
void ed_start PROT((char *, char *, struct object *));
void say PROT((struct svalue *, struct vector *));
void tell_room PROT((struct object *, struct svalue *, struct vector *));
void shout_string PROT((char *));
int command_for_object PROT((char *, struct object *));
int remove_file PROT((char *));
int print_file PROT((char *, int, int));
int print_call_out_usage PROT((int verbose));
int input_to PROT((char *, int));
int parse PROT((char *, struct svalue *, char *, struct svalue *, int));
struct object *object_present PROT((struct svalue *, struct object *));
void add_light PROT((struct object *, int));
int indent_program PROT((char *));
void call_function PROT((struct program *, struct function *));
void store_line_number_info(void);
void push_constant_string PROT((char *));
void push_svalue PROT((struct svalue *));
struct variable *find_status PROT((char *, int));
void free_prog PROT((struct program *, int));
void stat_living_objects(void);
int heart_beat_status PROT((int verbose));
void opcdump(void);
void slow_shut_down PROT((int));
struct vector *allocate_array PROT((int));
void yyerror PROT((char *));
void reset_machine(void);
void clear_state(void);
void load_first_objects(void);
void preload_objects PROT((int));
int random_number PROT((int));
void reset_object PROT((struct object *, int));
int replace_interactive PROT((struct object *ob, struct object *obf, char *));
char *get_wiz_name PROT((char *));
char *get_log_file PROT((char *));
int get_current_time(void);
char *time_string PROT((int));
char *process_string PROT((char *));
void update_ref_counts_for_players(void);
void count_ref_from_call_outs(void);
void check_a_lot_ref_counts PROT((struct program *));
int shadow_catch_message PROT((struct object *ob, char *str));
struct vector *get_all_call_outs(void);
char *read_file PROT((char *file, int, int));
char *read_bytes PROT((char *file, int, int));
int write_bytes PROT((char *file, int, char *str));
struct wiz_list *add_name PROT((char *str));
char *check_valid_path PROT((char *, struct wiz_list *, char *, int));
int get_line_number_if_any(void);
void logon PROT((struct object *ob));
struct svalue *apply_master_ob PROT((char *fun, int num_arg));
void assert_master_ob_loaded(void);
struct vector *explode_string PROT((char *str, char *del));
char *string_copy PROT((char *));
int find_call_out PROT((struct object *ob, char *fun));
void remove_object_from_stack PROT((struct object *ob));
void compile_file(void);
void unlink_swap_file(void);
char *function_exists PROT((char *, struct object *));
void set_inc_list PROT((struct svalue *sv));
int legal_path PROT((char *path));
struct vector *get_dir PROT((char *path));
void get_simul_efun PROT((struct svalue *));
struct function *find_simul_efun PROT((char *));
char *query_simul_efun_file_name(void);
struct vector *match_regexp PROT((struct vector *v, char *pattern));

#ifdef MUDWHO
void sendmudwhoinfo(void);
void sendmudwhologout PROT((struct object *ob));
int rwhocli_setup PROT((char *server, char *serverpw, char *myname, char *comment));
int rwhocli_shutdown(void);
int rwhocli_pingalive(void);
int rwhocli_userlogin PROT((char *uid, char *name, int tim));
int rwhocli_userlogout PROT((char *uid));
#endif /* MUDWHO */
