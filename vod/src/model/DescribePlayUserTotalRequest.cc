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

#include <alibabacloud/vod/model/DescribePlayUserTotalRequest.h>

using AlibabaCloud::Vod::Model::DescribePlayUserTotalRequest;

DescribePlayUserTotalRequest::DescribePlayUserTotalRequest() :
	RpcServiceRequest("vod", "2017-03-21", "DescribePlayUserTotal")
{}

DescribePlayUserTotalRequest::~DescribePlayUserTotalRequest()
{}

std::string DescribePlayUserTotalRequest::getStartTime()const
{
	return startTime_;
}

void DescribePlayUserTotalRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string DescribePlayUserTotalRequest::getEndTime()const
{
	return endTime_;
}

void DescribePlayUserTotalRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

long DescribePlayUserTotalRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribePlayUserTotalRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

