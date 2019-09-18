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

#include <alibabacloud/trademark/model/StartNotaryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Trademark;
using namespace AlibabaCloud::Trademark::Model;

StartNotaryResult::StartNotaryResult() :
	ServiceResult()
{}

StartNotaryResult::StartNotaryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

StartNotaryResult::~StartNotaryResult()
{}

void StartNotaryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["NotaryUrl"].isNull())
		notaryUrl_ = value["NotaryUrl"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorMsg"].isNull())
		errorMsg_ = value["ErrorMsg"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

std::string StartNotaryResult::getErrorMsg()const
{
	return errorMsg_;
}

std::string StartNotaryResult::getNotaryUrl()const
{
	return notaryUrl_;
}

std::string StartNotaryResult::getErrorCode()const
{
	return errorCode_;
}

bool StartNotaryResult::getSuccess()const
{
	return success_;
}

