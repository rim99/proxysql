//#ifdef __cplusplus
#include "MySQL_Thread.h"
#include "MySQL_Session.h"
#include "mysql_backend.h"
#include "MySQL_Data_Stream.h"
#include "query_cache.hpp"
#include "mysql_connection.h"
#include "sqlite3db.h"
#include "simple_kv.h"
#include "gen_utils.h"
#include "StatCounters.h"
#include "MySQL_Monitor.hpp"
#include "MySQL_Protocol.h"
#include "MySQL_Authentication.hpp"
#include "fileutils.hpp"
#include "configfile.hpp"
#include "query_processor.h"
#include "proxysql_admin.h"
#include "MySQL_HostGroups_Manager.h"
#include "MySQL_Logger.hpp"
#undef swap
#undef min
#undef max
#include <memory>
#include <stdio.h>
#include <algorithm>
#include <functional>
#include <type_traits>
#include <iosfwd>
#include <map>
#include <set>
#include <sstream>
#include <string>
#include <utility>
#include <vector>
//#endif /* __cplusplus */
