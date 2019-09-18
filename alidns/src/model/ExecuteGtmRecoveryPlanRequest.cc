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

#include <alibabacloud/alidns/model/ExecuteGtmRecoveryPlanRequest.h>

using AlibabaCloud::Alidns::Model::ExecuteGtmRecoveryPlanRequest;

ExecuteGtmRecoveryPlanRequest::ExecuteGtmRecoveryPlanRequest() :
	RpcServiceRequest("alidns", "2015-01-09", "ExecuteGtmRecoveryPlan")
{}

ExecuteGtmRecoveryPlanRequest::~ExecuteGtmRecoveryPlanRequest()
{}

std::string ExecuteGtmRecoveryPlanRequest::getUserClientIp()const
{
	return userClientIp_;
}

void ExecuteGtmRecoveryPlanRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setCoreParameter("UserClientIp", userClientIp);
}

long ExecuteGtmRecoveryPlanRequest::getRecoveryPlanId()const
{
	return recoveryPlanId_;
}

void ExecuteGtmRecoveryPlanRequest::setRecoveryPlanId(long recoveryPlanId)
{
	recoveryPlanId_ = recoveryPlanId;
	setCoreParameter("RecoveryPlanId", std::to_string(recoveryPlanId));
}

std::string ExecuteGtmRecoveryPlanRequest::getLang()const
{
	return lang_;
}

void ExecuteGtmRecoveryPlanRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

