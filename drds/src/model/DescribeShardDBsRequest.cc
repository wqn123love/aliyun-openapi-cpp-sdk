/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/drds/model/DescribeShardDBsRequest.h>

using AlibabaCloud::Drds::Model::DescribeShardDBsRequest;

DescribeShardDBsRequest::DescribeShardDBsRequest() :
	RpcServiceRequest("drds", "2017-10-16", "DescribeShardDBs")
{}

DescribeShardDBsRequest::~DescribeShardDBsRequest()
{}

std::string DescribeShardDBsRequest::getDrdsInstanceId()const
{
	return drdsInstanceId_;
}

void DescribeShardDBsRequest::setDrdsInstanceId(const std::string& drdsInstanceId)
{
	drdsInstanceId_ = drdsInstanceId;
	setCoreParameter("DrdsInstanceId", drdsInstanceId);
}

std::string DescribeShardDBsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeShardDBsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeShardDBsRequest::getDbName()const
{
	return dbName_;
}

void DescribeShardDBsRequest::setDbName(const std::string& dbName)
{
	dbName_ = dbName;
	setCoreParameter("DbName", dbName);
}

