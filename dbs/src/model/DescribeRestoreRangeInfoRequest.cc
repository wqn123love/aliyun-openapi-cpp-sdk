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

#include <alibabacloud/dbs/model/DescribeRestoreRangeInfoRequest.h>

using AlibabaCloud::Dbs::Model::DescribeRestoreRangeInfoRequest;

DescribeRestoreRangeInfoRequest::DescribeRestoreRangeInfoRequest() :
	RpcServiceRequest("dbs", "2019-03-06", "DescribeRestoreRangeInfo")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeRestoreRangeInfoRequest::~DescribeRestoreRangeInfoRequest()
{}

long DescribeRestoreRangeInfoRequest::getBeginTimestampForRestore()const
{
	return beginTimestampForRestore_;
}

void DescribeRestoreRangeInfoRequest::setBeginTimestampForRestore(long beginTimestampForRestore)
{
	beginTimestampForRestore_ = beginTimestampForRestore;
	setCoreParameter("BeginTimestampForRestore", std::to_string(beginTimestampForRestore));
}

long DescribeRestoreRangeInfoRequest::getEndTimestampForRestore()const
{
	return endTimestampForRestore_;
}

void DescribeRestoreRangeInfoRequest::setEndTimestampForRestore(long endTimestampForRestore)
{
	endTimestampForRestore_ = endTimestampForRestore;
	setCoreParameter("EndTimestampForRestore", std::to_string(endTimestampForRestore));
}

std::string DescribeRestoreRangeInfoRequest::getClientToken()const
{
	return clientToken_;
}

void DescribeRestoreRangeInfoRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string DescribeRestoreRangeInfoRequest::getBackupPlanId()const
{
	return backupPlanId_;
}

void DescribeRestoreRangeInfoRequest::setBackupPlanId(const std::string& backupPlanId)
{
	backupPlanId_ = backupPlanId;
	setCoreParameter("BackupPlanId", backupPlanId);
}

std::string DescribeRestoreRangeInfoRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeRestoreRangeInfoRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

