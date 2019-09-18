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

#include <alibabacloud/dcdn/model/DescribeDcdnDomainWebsocketTrafficDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dcdn;
using namespace AlibabaCloud::Dcdn::Model;

DescribeDcdnDomainWebsocketTrafficDataResult::DescribeDcdnDomainWebsocketTrafficDataResult() :
	ServiceResult()
{}

DescribeDcdnDomainWebsocketTrafficDataResult::DescribeDcdnDomainWebsocketTrafficDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDcdnDomainWebsocketTrafficDataResult::~DescribeDcdnDomainWebsocketTrafficDataResult()
{}

void DescribeDcdnDomainWebsocketTrafficDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTrafficDataPerInterval = value["TrafficDataPerInterval"]["DataModule"];
	for (auto value : allTrafficDataPerInterval)
	{
		DataModule trafficDataPerIntervalObject;
		if(!value["TimeStamp"].isNull())
			trafficDataPerIntervalObject.timeStamp = value["TimeStamp"].asString();
		if(!value["WebsocketTraffic"].isNull())
			trafficDataPerIntervalObject.websocketTraffic = std::stof(value["WebsocketTraffic"].asString());
		trafficDataPerInterval_.push_back(trafficDataPerIntervalObject);
	}
	if(!value["DomainName"].isNull())
		domainName_ = value["DomainName"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["DataInterval"].isNull())
		dataInterval_ = value["DataInterval"].asString();

}

std::string DescribeDcdnDomainWebsocketTrafficDataResult::getEndTime()const
{
	return endTime_;
}

std::vector<DescribeDcdnDomainWebsocketTrafficDataResult::DataModule> DescribeDcdnDomainWebsocketTrafficDataResult::getTrafficDataPerInterval()const
{
	return trafficDataPerInterval_;
}

std::string DescribeDcdnDomainWebsocketTrafficDataResult::getDomainName()const
{
	return domainName_;
}

std::string DescribeDcdnDomainWebsocketTrafficDataResult::getStartTime()const
{
	return startTime_;
}

std::string DescribeDcdnDomainWebsocketTrafficDataResult::getDataInterval()const
{
	return dataInterval_;
}

