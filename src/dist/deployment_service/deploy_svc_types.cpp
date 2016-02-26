#ifdef DSN_NOT_USE_DEFAULT_SERIALIZATION
/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "deploy_svc_types.h"

#include <algorithm>
#include <ostream>

#include <thrift/TToString.h>

namespace dsn { namespace dist {

int _kcluster_typeValues[] = {
  cluster_type::cstype_kubernetes,
  cluster_type::cstype_docker,
  cluster_type::cstype_bare_medal_linux,
  cluster_type::cstype_bare_medal_windows,
  cluster_type::cstype_yarn_on_linux,
  cluster_type::cstype_yarn_on_windows,
  cluster_type::cstype_mesos_on_linux,
  cluster_type::cstype_mesos_on_windows
};
const char* _kcluster_typeNames[] = {
  "cstype_kubernetes",
  "cstype_docker",
  "cstype_bare_medal_linux",
  "cstype_bare_medal_windows",
  "cstype_yarn_on_linux",
  "cstype_yarn_on_windows",
  "cstype_mesos_on_linux",
  "cstype_mesos_on_windows"
};

int _kservice_statusValues[] = {
  service_status::SS_PREPARE_RESOURCE,
  service_status::SS_DEPLOYING,
  service_status::SS_RUNNING,
  service_status::SS_FAILOVER,
  service_status::SS_FAILED,
  service_status::SS_COUNT,
  service_status::SS_INVALID
};
const char* _kservice_statusNames[] = {
  "SS_PREPARE_RESOURCE",
  "SS_DEPLOYING",
  "SS_RUNNING",
  "SS_FAILOVER",
  "SS_FAILED",
  "SS_COUNT",
  "SS_INVALID"
};


deploy_request::~deploy_request() throw() {
}


void deploy_request::__set_package_id(const std::string& val) {
  this->package_id = val;
}

void deploy_request::__set_package_full_path(const std::string& val) {
  this->package_full_path = val;
}

void deploy_request::__set_package_server(const  ::dsn::rpc_address& val) {
  this->package_server = val;
}

void deploy_request::__set_cluster_name(const std::string& val) {
  this->cluster_name = val;
}

void deploy_request::__set_name(const std::string& val) {
  this->name = val;
}

uint32_t deploy_request::read(::apache::thrift::protocol::TProtocol* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->package_id);
          this->__isset.package_id = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->package_full_path);
          this->__isset.package_full_path = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->package_server.read(iprot);
          this->__isset.package_server = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->cluster_name);
          this->__isset.cluster_name = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->name);
          this->__isset.name = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t deploy_request::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("deploy_request");

  xfer += oprot->writeFieldBegin("package_id", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->package_id);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("package_full_path", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->package_full_path);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("package_server", ::apache::thrift::protocol::T_STRUCT, 3);
  xfer += this->package_server.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("cluster_name", ::apache::thrift::protocol::T_STRING, 4);
  xfer += oprot->writeString(this->cluster_name);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("name", ::apache::thrift::protocol::T_STRING, 5);
  xfer += oprot->writeString(this->name);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(deploy_request &a, deploy_request &b) {
  using ::std::swap;
  swap(a.package_id, b.package_id);
  swap(a.package_full_path, b.package_full_path);
  swap(a.package_server, b.package_server);
  swap(a.cluster_name, b.cluster_name);
  swap(a.name, b.name);
  swap(a.__isset, b.__isset);
}

deploy_request::deploy_request(const deploy_request& other0) {
  package_id = other0.package_id;
  package_full_path = other0.package_full_path;
  package_server = other0.package_server;
  cluster_name = other0.cluster_name;
  name = other0.name;
  __isset = other0.__isset;
}
deploy_request& deploy_request::operator=(const deploy_request& other1) {
  package_id = other1.package_id;
  package_full_path = other1.package_full_path;
  package_server = other1.package_server;
  cluster_name = other1.cluster_name;
  name = other1.name;
  __isset = other1.__isset;
  return *this;
}
void deploy_request::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "deploy_request(";
  out << "package_id=" << to_string(package_id);
  out << ", " << "package_full_path=" << to_string(package_full_path);
  out << ", " << "package_server=" << to_string(package_server);
  out << ", " << "cluster_name=" << to_string(cluster_name);
  out << ", " << "name=" << to_string(name);
  out << ")";
}


deploy_info::~deploy_info() throw() {
}


void deploy_info::__set_package_id(const std::string& val) {
  this->package_id = val;
}

void deploy_info::__set_name(const std::string& val) {
  this->name = val;
}

void deploy_info::__set_service_url(const std::string& val) {
  this->service_url = val;
}

void deploy_info::__set_error(const  ::dsn::error_code& val) {
  this->error = val;
}

void deploy_info::__set_cluster(const std::string& val) {
  this->cluster = val;
}

void deploy_info::__set_status(const service_status val) {
  this->status = val;
}

uint32_t deploy_info::read(::apache::thrift::protocol::TProtocol* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->package_id);
          this->__isset.package_id = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->name);
          this->__isset.name = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->service_url);
          this->__isset.service_url = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->error.read(iprot);
          this->__isset.error = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->cluster);
          this->__isset.cluster = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 6:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          int32_t ecast2;
          xfer += iprot->readI32(ecast2);
          this->status = (service_status)ecast2;
          this->__isset.status = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t deploy_info::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("deploy_info");

  xfer += oprot->writeFieldBegin("package_id", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->package_id);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("name", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->name);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("service_url", ::apache::thrift::protocol::T_STRING, 3);
  xfer += oprot->writeString(this->service_url);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("error", ::apache::thrift::protocol::T_STRUCT, 4);
  xfer += this->error.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("cluster", ::apache::thrift::protocol::T_STRING, 5);
  xfer += oprot->writeString(this->cluster);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("status", ::apache::thrift::protocol::T_I32, 6);
  xfer += oprot->writeI32((int32_t)this->status);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(deploy_info &a, deploy_info &b) {
  using ::std::swap;
  swap(a.package_id, b.package_id);
  swap(a.name, b.name);
  swap(a.service_url, b.service_url);
  swap(a.error, b.error);
  swap(a.cluster, b.cluster);
  swap(a.status, b.status);
  swap(a.__isset, b.__isset);
}

deploy_info::deploy_info(const deploy_info& other3) {
  package_id = other3.package_id;
  name = other3.name;
  service_url = other3.service_url;
  error = other3.error;
  cluster = other3.cluster;
  status = other3.status;
  __isset = other3.__isset;
}
deploy_info& deploy_info::operator=(const deploy_info& other4) {
  package_id = other4.package_id;
  name = other4.name;
  service_url = other4.service_url;
  error = other4.error;
  cluster = other4.cluster;
  status = other4.status;
  __isset = other4.__isset;
  return *this;
}
void deploy_info::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "deploy_info(";
  out << "package_id=" << to_string(package_id);
  out << ", " << "name=" << to_string(name);
  out << ", " << "service_url=" << to_string(service_url);
  out << ", " << "error=" << to_string(error);
  out << ", " << "cluster=" << to_string(cluster);
  out << ", " << "status=" << to_string(status);
  out << ")";
}


deploy_info_list::~deploy_info_list() throw() {
}


void deploy_info_list::__set_services(const std::vector<deploy_info> & val) {
  this->services = val;
}

uint32_t deploy_info_list::read(::apache::thrift::protocol::TProtocol* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->services.clear();
            uint32_t _size5;
            ::apache::thrift::protocol::TType _etype8;
            xfer += iprot->readListBegin(_etype8, _size5);
            this->services.resize(_size5);
            uint32_t _i9;
            for (_i9 = 0; _i9 < _size5; ++_i9)
            {
              xfer += this->services[_i9].read(iprot);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.services = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t deploy_info_list::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("deploy_info_list");

  xfer += oprot->writeFieldBegin("services", ::apache::thrift::protocol::T_LIST, 1);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->services.size()));
    std::vector<deploy_info> ::const_iterator _iter10;
    for (_iter10 = this->services.begin(); _iter10 != this->services.end(); ++_iter10)
    {
      xfer += (*_iter10).write(oprot);
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(deploy_info_list &a, deploy_info_list &b) {
  using ::std::swap;
  swap(a.services, b.services);
  swap(a.__isset, b.__isset);
}

deploy_info_list::deploy_info_list(const deploy_info_list& other11) {
  services = other11.services;
  __isset = other11.__isset;
}
deploy_info_list& deploy_info_list::operator=(const deploy_info_list& other12) {
  services = other12.services;
  __isset = other12.__isset;
  return *this;
}
void deploy_info_list::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "deploy_info_list(";
  out << "services=" << to_string(services);
  out << ")";
}


cluster_info::~cluster_info() throw() {
}


void cluster_info::__set_name(const std::string& val) {
  this->name = val;
}

void cluster_info::__set_type(const cluster_type val) {
  this->type = val;
}

uint32_t cluster_info::read(::apache::thrift::protocol::TProtocol* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->name);
          this->__isset.name = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          int32_t ecast13;
          xfer += iprot->readI32(ecast13);
          this->type = (cluster_type)ecast13;
          this->__isset.type = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t cluster_info::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("cluster_info");

  xfer += oprot->writeFieldBegin("name", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->name);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("type", ::apache::thrift::protocol::T_I32, 2);
  xfer += oprot->writeI32((int32_t)this->type);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(cluster_info &a, cluster_info &b) {
  using ::std::swap;
  swap(a.name, b.name);
  swap(a.type, b.type);
  swap(a.__isset, b.__isset);
}

cluster_info::cluster_info(const cluster_info& other14) {
  name = other14.name;
  type = other14.type;
  __isset = other14.__isset;
}
cluster_info& cluster_info::operator=(const cluster_info& other15) {
  name = other15.name;
  type = other15.type;
  __isset = other15.__isset;
  return *this;
}
void cluster_info::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "cluster_info(";
  out << "name=" << to_string(name);
  out << ", " << "type=" << to_string(type);
  out << ")";
}


cluster_list::~cluster_list() throw() {
}


void cluster_list::__set_clusters(const std::vector<cluster_info> & val) {
  this->clusters = val;
}

uint32_t cluster_list::read(::apache::thrift::protocol::TProtocol* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->clusters.clear();
            uint32_t _size16;
            ::apache::thrift::protocol::TType _etype19;
            xfer += iprot->readListBegin(_etype19, _size16);
            this->clusters.resize(_size16);
            uint32_t _i20;
            for (_i20 = 0; _i20 < _size16; ++_i20)
            {
              xfer += this->clusters[_i20].read(iprot);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.clusters = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t cluster_list::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("cluster_list");

  xfer += oprot->writeFieldBegin("clusters", ::apache::thrift::protocol::T_LIST, 1);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->clusters.size()));
    std::vector<cluster_info> ::const_iterator _iter21;
    for (_iter21 = this->clusters.begin(); _iter21 != this->clusters.end(); ++_iter21)
    {
      xfer += (*_iter21).write(oprot);
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(cluster_list &a, cluster_list &b) {
  using ::std::swap;
  swap(a.clusters, b.clusters);
  swap(a.__isset, b.__isset);
}

cluster_list::cluster_list(const cluster_list& other22) {
  clusters = other22.clusters;
  __isset = other22.__isset;
}
cluster_list& cluster_list::operator=(const cluster_list& other23) {
  clusters = other23.clusters;
  __isset = other23.__isset;
  return *this;
}
void cluster_list::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "cluster_list(";
  out << "clusters=" << to_string(clusters);
  out << ")";
}

}} // namespace
#endif