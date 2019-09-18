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

#include <alibabacloud/rtc/model/CreateChannelResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rtc;
using namespace AlibabaCloud::Rtc::Model;

CreateChannelResult::CreateChannelResult() :
	ServiceResult()
{}

CreateChannelResult::CreateChannelResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateChannelResult::~CreateChannelResult()
{}

void CreateChannelResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["ChannelKey"].isNull())
		channelKey_ = value["ChannelKey"].asString();
	if(!value["Nonce"].isNull())
		nonce_ = value["Nonce"].asString();
	if(!value["Timestamp"].isNull())
		timestamp_ = std::stoi(value["Timestamp"].asString());

}

std::string CreateChannelResult::getNonce()const
{
	return nonce_;
}

std::string CreateChannelResult::getChannelKey()const
{
	return channelKey_;
}

int CreateChannelResult::getTimestamp()const
{
	return timestamp_;
}

