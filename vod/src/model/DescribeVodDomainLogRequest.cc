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

#include <alibabacloud/vod/model/DescribeVodDomainLogRequest.h>

using AlibabaCloud::Vod::Model::DescribeVodDomainLogRequest;

DescribeVodDomainLogRequest::DescribeVodDomainLogRequest() :
	RpcServiceRequest("vod", "2017-03-21", "DescribeVodDomainLog")
{}

DescribeVodDomainLogRequest::~DescribeVodDomainLogRequest()
{}

std::string DescribeVodDomainLogRequest::getStartTime()const
{
	return startTime_;
}

void DescribeVodDomainLogRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

long DescribeVodDomainLogRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeVodDomainLogRequest::setPageNumber(long pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

long DescribeVodDomainLogRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeVodDomainLogRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeVodDomainLogRequest::getDomainName()const
{
	return domainName_;
}

void DescribeVodDomainLogRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string DescribeVodDomainLogRequest::getEndTime()const
{
	return endTime_;
}

void DescribeVodDomainLogRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

long DescribeVodDomainLogRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeVodDomainLogRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

