/************************************************************************************************************************
 Copyright (c) 2016, Imagination Technologies Limited and/or its affiliated group companies.
 All rights reserved.

 Redistribution and use in source and binary forms, with or without modification, are permitted provided that the
 following conditions are met:
     1. Redistributions of source code must retain the above copyright notice, this list of conditions and the
        following disclaimer.
     2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the
        following disclaimer in the documentation and/or other materials provided with the distribution.
     3. Neither the name of the copyright holder nor the names of its contributors may be used to endorse or promote
        products derived from this software without specific prior written permission.

 THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES,
 INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, 
 SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, 
 WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE 
 USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
************************************************************************************************************************/


#ifndef AWA_CLIENT_DEFINE_CMDLINE_H
#define AWA_CLIENT_DEFINE_CMDLINE_H

/* If we use autoconf.  */
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <stdio.h> /* for FILE */

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#ifndef CMDLINE_PARSER_PACKAGE
/** @brief the program name (used for printing errors) */
#define CMDLINE_PARSER_PACKAGE "awa-client-define"
#endif

#ifndef CMDLINE_PARSER_PACKAGE_NAME
/** @brief the complete program name (used for help and version) */
#define CMDLINE_PARSER_PACKAGE_NAME "awa-client-define"
#endif

#ifndef CMDLINE_PARSER_VERSION
/** @brief the program version */
#define CMDLINE_PARSER_VERSION "1.0"
#endif

enum enum_objectInstances { objectInstances__NULL = -1, objectInstances_arg_single = 0, objectInstances_arg_multiple };
enum enum_resourceType { resourceType__NULL = -1, resourceType_arg_opaque = 0, resourceType_arg_integer, resourceType_arg_float, resourceType_arg_boolean, resourceType_arg_string, resourceType_arg_time, resourceType_arg_objlink, resourceType_arg_none };
enum enum_resourceInstances { resourceInstances__NULL = -1, resourceInstances_arg_single = 0, resourceInstances_arg_multiple };
enum enum_resourceRequired { resourceRequired__NULL = -1, resourceRequired_arg_optional = 0, resourceRequired_arg_mandatory };
enum enum_resourceOperations { resourceOperations__NULL = -1, resourceOperations_arg_r = 0, resourceOperations_arg_w, resourceOperations_arg_e, resourceOperations_arg_rw };

/** @brief Where the command line options are stored */
struct gengetopt_args_info
{
  const char *help_help; /**< @brief Print help and exit help description.  */
  const char *version_help; /**< @brief Print version and exit help description.  */
  int verbose_flag; /**< @brief Increase program verbosity (default=off).  */
  const char *verbose_help; /**< @brief Increase program verbosity help description.  */
  int debug_flag;   /**< @brief Increase program verbosity (default=off).  */
  const char *debug_help; /**< @brief Increase program verbosity help description.  */
  char * ipcAddress_arg;    /**< @brief Connect to Client IPC Address (default='127.0.0.1').  */
  char * ipcAddress_orig;   /**< @brief Connect to Client IPC Address original value given at command line.  */
  const char *ipcAddress_help; /**< @brief Connect to Client IPC Address help description.  */
  int ipcPort_arg;  /**< @brief Connect to Client IPC port (default='12345').  */
  char * ipcPort_orig;  /**< @brief Connect to Client IPC port original value given at command line.  */
  const char *ipcPort_help; /**< @brief Connect to Client IPC port help description.  */
  char * xmlFile_arg;   /**< @brief Load XML Definition file.  */
  char * xmlFile_orig;  /**< @brief Load XML Definition file original value given at command line.  */
  const char *xmlFile_help; /**< @brief Load XML Definition file help description.  */
  int objectID_arg; /**< @brief Object ID.  */
  char * objectID_orig; /**< @brief Object ID original value given at command line.  */
  const char *objectID_help; /**< @brief Object ID help description.  */
  char * objectName_arg;    /**< @brief Object name.  */
  char * objectName_orig;   /**< @brief Object name original value given at command line.  */
  const char *objectName_help; /**< @brief Object name help description.  */
  int objectMandatory_flag; /**< @brief Object is required or optional (default=off).  */
  const char *objectMandatory_help; /**< @brief Object is required or optional help description.  */
  enum enum_objectInstances objectInstances_arg;    /**< @brief Object supports single or multiple instances (default='single').  */
  char * objectInstances_orig;  /**< @brief Object supports single or multiple instances original value given at command line.  */
  const char *objectInstances_help; /**< @brief Object supports single or multiple instances help description.  */
  int* resourceID_arg;  /**< @brief Resource ID.  */
  char ** resourceID_orig;  /**< @brief Resource ID original value given at command line.  */
  unsigned int resourceID_min; /**< @brief Resource ID's minimum occurreces */
  unsigned int resourceID_max; /**< @brief Resource ID's maximum occurreces */
  const char *resourceID_help; /**< @brief Resource ID help description.  */
  char ** resourceName_arg; /**< @brief Resource Name.  */
  char ** resourceName_orig;    /**< @brief Resource Name original value given at command line.  */
  unsigned int resourceName_min; /**< @brief Resource Name's minimum occurreces */
  unsigned int resourceName_max; /**< @brief Resource Name's maximum occurreces */
  const char *resourceName_help; /**< @brief Resource Name help description.  */
  enum enum_resourceType *resourceType_arg; /**< @brief Resource Type.  */
  char ** resourceType_orig;    /**< @brief Resource Type original value given at command line.  */
  unsigned int resourceType_min; /**< @brief Resource Type's minimum occurreces */
  unsigned int resourceType_max; /**< @brief Resource Type's maximum occurreces */
  const char *resourceType_help; /**< @brief Resource Type help description.  */
  enum enum_resourceInstances *resourceInstances_arg;   /**< @brief Resource supports single or multiple instances.  */
  char ** resourceInstances_orig;   /**< @brief Resource supports single or multiple instances original value given at command line.  */
  unsigned int resourceInstances_min; /**< @brief Resource supports single or multiple instances's minimum occurreces */
  unsigned int resourceInstances_max; /**< @brief Resource supports single or multiple instances's maximum occurreces */
  const char *resourceInstances_help; /**< @brief Resource supports single or multiple instances help description.  */
  enum enum_resourceRequired *resourceRequired_arg; /**< @brief Resource is required or optional.  */
  char ** resourceRequired_orig;    /**< @brief Resource is required or optional original value given at command line.  */
  unsigned int resourceRequired_min; /**< @brief Resource is required or optional's minimum occurreces */
  unsigned int resourceRequired_max; /**< @brief Resource is required or optional's maximum occurreces */
  const char *resourceRequired_help; /**< @brief Resource is required or optional help description.  */
  enum enum_resourceOperations *resourceOperations_arg; /**< @brief Resource Operation.  */
  char ** resourceOperations_orig;  /**< @brief Resource Operation original value given at command line.  */
  unsigned int resourceOperations_min; /**< @brief Resource Operation's minimum occurreces */
  unsigned int resourceOperations_max; /**< @brief Resource Operation's maximum occurreces */
  const char *resourceOperations_help; /**< @brief Resource Operation help description.  */
  
  unsigned int help_given ; /**< @brief Whether help was given.  */
  unsigned int version_given ;  /**< @brief Whether version was given.  */
  unsigned int verbose_given ;  /**< @brief Whether verbose was given.  */
  unsigned int debug_given ;    /**< @brief Whether debug was given.  */
  unsigned int ipcAddress_given ;   /**< @brief Whether ipcAddress was given.  */
  unsigned int ipcPort_given ;  /**< @brief Whether ipcPort was given.  */
  unsigned int xmlFile_given ;  /**< @brief Whether xmlFile was given.  */
  unsigned int objectID_given ; /**< @brief Whether objectID was given.  */
  unsigned int objectName_given ;   /**< @brief Whether objectName was given.  */
  unsigned int objectMandatory_given ;  /**< @brief Whether objectMandatory was given.  */
  unsigned int objectInstances_given ;  /**< @brief Whether objectInstances was given.  */
  unsigned int resourceID_given ;   /**< @brief Whether resourceID was given.  */
  unsigned int resourceName_given ; /**< @brief Whether resourceName was given.  */
  unsigned int resourceType_given ; /**< @brief Whether resourceType was given.  */
  unsigned int resourceInstances_given ;    /**< @brief Whether resourceInstances was given.  */
  unsigned int resourceRequired_given ; /**< @brief Whether resourceRequired was given.  */
  unsigned int resourceOperations_given ;   /**< @brief Whether resourceOperations was given.  */

  char **inputs ; /**< @brief unamed options (options without names) */
  unsigned inputs_num ; /**< @brief unamed options number */
  int Cmdline_Definition_mode_counter; /**< @brief Counter for mode Cmdline_Definition */
  int XML_Definition_mode_counter; /**< @brief Counter for mode XML_Definition */
} ;

/** @brief The additional parameters to pass to parser functions */
struct cmdline_parser_params
{
  int override; /**< @brief whether to override possibly already present options (default 0) */
  int initialize; /**< @brief whether to initialize the option structure gengetopt_args_info (default 1) */
  int check_required; /**< @brief whether to check that all required options were provided (default 1) */
  int check_ambiguity; /**< @brief whether to check for options already specified in the option structure gengetopt_args_info (default 0) */
  int print_errors; /**< @brief whether getopt_long should print an error message for a bad option (default 1) */
} ;

/** @brief the purpose string of the program */
extern const char *gengetopt_args_info_purpose;
/** @brief the usage string of the program */
extern const char *gengetopt_args_info_usage;
/** @brief the description string of the program */
extern const char *gengetopt_args_info_description;
/** @brief all the lines making the help output */
extern const char *gengetopt_args_info_help[];

/**
 * The command line parser
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int cmdline_parser (int argc, char **argv,
  struct gengetopt_args_info *args_info);

/**
 * The command line parser (version with additional parameters - deprecated)
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @param override whether to override possibly already present options
 * @param initialize whether to initialize the option structure my_args_info
 * @param check_required whether to check that all required options were provided
 * @return 0 if everything went fine, NON 0 if an error took place
 * @deprecated use cmdline_parser_ext() instead
 */
int cmdline_parser2 (int argc, char **argv,
  struct gengetopt_args_info *args_info,
  int override, int initialize, int check_required);

/**
 * The command line parser (version with additional parameters)
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @param params additional parameters for the parser
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int cmdline_parser_ext (int argc, char **argv,
  struct gengetopt_args_info *args_info,
  struct cmdline_parser_params *params);

/**
 * Save the contents of the option struct into an already open FILE stream.
 * @param outfile the stream where to dump options
 * @param args_info the option struct to dump
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int cmdline_parser_dump(FILE *outfile,
  struct gengetopt_args_info *args_info);

/**
 * Save the contents of the option struct into a (text) file.
 * This file can be read by the config file parser (if generated by gengetopt)
 * @param filename the file where to save
 * @param args_info the option struct to save
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int cmdline_parser_file_save(const char *filename,
  struct gengetopt_args_info *args_info);

/**
 * Print the help
 */
void cmdline_parser_print_help(void);
/**
 * Print the version
 */
void cmdline_parser_print_version(void);

/**
 * Initializes all the fields a cmdline_parser_params structure 
 * to their default values
 * @param params the structure to initialize
 */
void cmdline_parser_params_init(struct cmdline_parser_params *params);

/**
 * Allocates dynamically a cmdline_parser_params structure and initializes
 * all its fields to their default values
 * @return the created and initialized cmdline_parser_params structure
 */
struct cmdline_parser_params *cmdline_parser_params_create(void);

/**
 * Initializes the passed gengetopt_args_info structure's fields
 * (also set default values for options that have a default)
 * @param args_info the structure to initialize
 */
void cmdline_parser_init (struct gengetopt_args_info *args_info);
/**
 * Deallocates the string fields of the gengetopt_args_info structure
 * (but does not deallocate the structure itself)
 * @param args_info the structure to deallocate
 */
void cmdline_parser_free (struct gengetopt_args_info *args_info);

/**
 * Checks that all the required options were specified
 * @param args_info the structure to check
 * @param prog_name the name of the program that will be used to print
 *   possible errors
 * @return
 */
int cmdline_parser_required (struct gengetopt_args_info *args_info,
  const char *prog_name);

extern const char *cmdline_parser_objectInstances_values[];  /**< @brief Possible values for objectInstances. */
extern const char *cmdline_parser_resourceType_values[];  /**< @brief Possible values for resourceType. */
extern const char *cmdline_parser_resourceInstances_values[];  /**< @brief Possible values for resourceInstances. */
extern const char *cmdline_parser_resourceRequired_values[];  /**< @brief Possible values for resourceRequired. */
extern const char *cmdline_parser_resourceOperations_values[];  /**< @brief Possible values for resourceOperations. */


#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* AWA_CLIENT_DEFINE_CMDLINE_H */
