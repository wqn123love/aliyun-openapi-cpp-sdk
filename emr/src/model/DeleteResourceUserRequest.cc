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

#include <alibabacloud/emr/model/DeleteResourceUserRequest.h>

using AlibabaCloud::Emr::Model::DeleteResourceUserRequest;

DeleteResourceUserRequest::DeleteResourceUserRequest() :
	RpcServiceRequest("emr", "2016-04-08", "DeleteResourceUser")
{}

DeleteResourceUserRequest::~DeleteResourceUserRequest()
{}

long DeleteResourceUserRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteResourceUserRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteResourceUserRequest::getResourceId()const
{
	return resourceId_;
}

void DeleteResourceUserRequest::setResourceId(const std::string& resourceId)
{
	resourceId_ = resourceId;
	setCoreParameter("ResourceId", resourceId);
}

std::string DeleteResourceUserRequest::getResourceType()const
{
	return resourceType_;
}

void DeleteResourceUserRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setCoreParameter("ResourceType", resourceType);
}

std::string DeleteResourceUserRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteResourceUserRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DeleteResourceUserRequest::getRegionId()const
{
	return regionId_;
}

void DeleteResourceUserRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DeleteResourceUserRequest::getAliyunUserId()const
{
	return aliyunUserId_;
}

void DeleteResourceUserRequest::setAliyunUserId(const std::string& aliyunUserId)
{
	aliyunUserId_ = aliyunUserId;
	setCoreParameter("AliyunUserId", aliyunUserId);
}

