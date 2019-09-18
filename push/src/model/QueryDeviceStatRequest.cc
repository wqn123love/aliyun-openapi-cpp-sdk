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

#include <alibabacloud/push/model/QueryDeviceStatRequest.h>

using AlibabaCloud::Push::Model::QueryDeviceStatRequest;

QueryDeviceStatRequest::QueryDeviceStatRequest() :
	RpcServiceRequest("push", "2016-08-01", "QueryDeviceStat")
{}

QueryDeviceStatRequest::~QueryDeviceStatRequest()
{}

std::string QueryDeviceStatRequest::getEndTime()const
{
	return endTime_;
}

void QueryDeviceStatRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string QueryDeviceStatRequest::getStartTime()const
{
	return startTime_;
}

void QueryDeviceStatRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string QueryDeviceStatRequest::getDeviceType()const
{
	return deviceType_;
}

void QueryDeviceStatRequest::setDeviceType(const std::string& deviceType)
{
	deviceType_ = deviceType;
	setCoreParameter("DeviceType", deviceType);
}

std::string QueryDeviceStatRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryDeviceStatRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

long QueryDeviceStatRequest::getAppKey()const
{
	return appKey_;
}

void QueryDeviceStatRequest::setAppKey(long appKey)
{
	appKey_ = appKey;
	setCoreParameter("AppKey", std::to_string(appKey));
}

std::string QueryDeviceStatRequest::getQueryType()const
{
	return queryType_;
}

void QueryDeviceStatRequest::setQueryType(const std::string& queryType)
{
	queryType_ = queryType;
	setCoreParameter("QueryType", queryType);
}

