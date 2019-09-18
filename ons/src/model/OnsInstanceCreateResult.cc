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

#include <alibabacloud/ons/model/OnsInstanceCreateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ons;
using namespace AlibabaCloud::Ons::Model;

OnsInstanceCreateResult::OnsInstanceCreateResult() :
	ServiceResult()
{}

OnsInstanceCreateResult::OnsInstanceCreateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

OnsInstanceCreateResult::~OnsInstanceCreateResult()
{}

void OnsInstanceCreateResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["InstanceId"].isNull())
		data_.instanceId = dataNode["InstanceId"].asString();
	if(!dataNode["InstanceType"].isNull())
		data_.instanceType = std::stoi(dataNode["InstanceType"].asString());
	if(!value["HelpUrl"].isNull())
		helpUrl_ = value["HelpUrl"].asString();

}

OnsInstanceCreateResult::Data OnsInstanceCreateResult::getData()const
{
	return data_;
}

std::string OnsInstanceCreateResult::getHelpUrl()const
{
	return helpUrl_;
}

