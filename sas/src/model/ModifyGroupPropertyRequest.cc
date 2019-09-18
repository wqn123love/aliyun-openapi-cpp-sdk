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

#include <alibabacloud/sas/model/ModifyGroupPropertyRequest.h>

using AlibabaCloud::Sas::Model::ModifyGroupPropertyRequest;

ModifyGroupPropertyRequest::ModifyGroupPropertyRequest() :
	RpcServiceRequest("sas", "2018-12-03", "ModifyGroupProperty")
{}

ModifyGroupPropertyRequest::~ModifyGroupPropertyRequest()
{}

std::string ModifyGroupPropertyRequest::getData()const
{
	return data_;
}

void ModifyGroupPropertyRequest::setData(const std::string& data)
{
	data_ = data;
	setCoreParameter("Data", data);
}

std::string ModifyGroupPropertyRequest::getSourceIp()const
{
	return sourceIp_;
}

void ModifyGroupPropertyRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

