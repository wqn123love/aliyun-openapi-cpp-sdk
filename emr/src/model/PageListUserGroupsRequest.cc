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

#include <alibabacloud/emr/model/PageListUserGroupsRequest.h>

using AlibabaCloud::Emr::Model::PageListUserGroupsRequest;

PageListUserGroupsRequest::PageListUserGroupsRequest() :
	RpcServiceRequest("emr", "2016-04-08", "PageListUserGroups")
{}

PageListUserGroupsRequest::~PageListUserGroupsRequest()
{}

long PageListUserGroupsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void PageListUserGroupsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string PageListUserGroupsRequest::getFuzzyName()const
{
	return fuzzyName_;
}

void PageListUserGroupsRequest::setFuzzyName(const std::string& fuzzyName)
{
	fuzzyName_ = fuzzyName;
	setCoreParameter("FuzzyName", fuzzyName);
}

int PageListUserGroupsRequest::getPageNumber()const
{
	return pageNumber_;
}

void PageListUserGroupsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string PageListUserGroupsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void PageListUserGroupsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string PageListUserGroupsRequest::getRegionId()const
{
	return regionId_;
}

void PageListUserGroupsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

int PageListUserGroupsRequest::getPageSize()const
{
	return pageSize_;
}

void PageListUserGroupsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

