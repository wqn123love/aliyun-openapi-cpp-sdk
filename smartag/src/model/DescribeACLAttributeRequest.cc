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

#include <alibabacloud/smartag/model/DescribeACLAttributeRequest.h>

using AlibabaCloud::Smartag::Model::DescribeACLAttributeRequest;

DescribeACLAttributeRequest::DescribeACLAttributeRequest() :
	RpcServiceRequest("smartag", "2018-03-13", "DescribeACLAttribute")
{}

DescribeACLAttributeRequest::~DescribeACLAttributeRequest()
{}

long DescribeACLAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeACLAttributeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int DescribeACLAttributeRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeACLAttributeRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeACLAttributeRequest::getRegionId()const
{
	return regionId_;
}

void DescribeACLAttributeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

int DescribeACLAttributeRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeACLAttributeRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeACLAttributeRequest::getDirection()const
{
	return direction_;
}

void DescribeACLAttributeRequest::setDirection(const std::string& direction)
{
	direction_ = direction;
	setCoreParameter("Direction", direction);
}

std::string DescribeACLAttributeRequest::getOrder()const
{
	return order_;
}

void DescribeACLAttributeRequest::setOrder(const std::string& order)
{
	order_ = order;
	setCoreParameter("Order", order);
}

std::string DescribeACLAttributeRequest::getAclId()const
{
	return aclId_;
}

void DescribeACLAttributeRequest::setAclId(const std::string& aclId)
{
	aclId_ = aclId;
	setCoreParameter("AclId", aclId);
}

std::string DescribeACLAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeACLAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeACLAttributeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeACLAttributeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DescribeACLAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeACLAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

