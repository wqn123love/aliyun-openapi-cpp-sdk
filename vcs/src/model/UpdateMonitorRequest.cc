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

#include <alibabacloud/vcs/model/UpdateMonitorRequest.h>

using AlibabaCloud::Vcs::Model::UpdateMonitorRequest;

UpdateMonitorRequest::UpdateMonitorRequest() :
	RpcServiceRequest("vcs", "2020-05-15", "UpdateMonitor")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateMonitorRequest::~UpdateMonitorRequest()
{}

std::string UpdateMonitorRequest::getCorpId()const
{
	return corpId_;
}

void UpdateMonitorRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

std::string UpdateMonitorRequest::getDescription()const
{
	return description_;
}

void UpdateMonitorRequest::setDescription(const std::string& description)
{
	description_ = description;
	setBodyParameter("Description", description);
}

std::string UpdateMonitorRequest::getRuleName()const
{
	return ruleName_;
}

void UpdateMonitorRequest::setRuleName(const std::string& ruleName)
{
	ruleName_ = ruleName;
	setBodyParameter("RuleName", ruleName);
}

std::string UpdateMonitorRequest::getPicOperateType()const
{
	return picOperateType_;
}

void UpdateMonitorRequest::setPicOperateType(const std::string& picOperateType)
{
	picOperateType_ = picOperateType;
	setBodyParameter("PicOperateType", picOperateType);
}

std::string UpdateMonitorRequest::getAttributeName()const
{
	return attributeName_;
}

void UpdateMonitorRequest::setAttributeName(const std::string& attributeName)
{
	attributeName_ = attributeName;
	setBodyParameter("AttributeName", attributeName);
}

std::string UpdateMonitorRequest::getAttributeOperateType()const
{
	return attributeOperateType_;
}

void UpdateMonitorRequest::setAttributeOperateType(const std::string& attributeOperateType)
{
	attributeOperateType_ = attributeOperateType;
	setBodyParameter("AttributeOperateType", attributeOperateType);
}

std::string UpdateMonitorRequest::getRuleExpression()const
{
	return ruleExpression_;
}

void UpdateMonitorRequest::setRuleExpression(const std::string& ruleExpression)
{
	ruleExpression_ = ruleExpression;
	setBodyParameter("RuleExpression", ruleExpression);
}

std::string UpdateMonitorRequest::getTaskId()const
{
	return taskId_;
}

void UpdateMonitorRequest::setTaskId(const std::string& taskId)
{
	taskId_ = taskId;
	setBodyParameter("TaskId", taskId);
}

std::string UpdateMonitorRequest::getDeviceOperateType()const
{
	return deviceOperateType_;
}

void UpdateMonitorRequest::setDeviceOperateType(const std::string& deviceOperateType)
{
	deviceOperateType_ = deviceOperateType;
	setBodyParameter("DeviceOperateType", deviceOperateType);
}

std::string UpdateMonitorRequest::getPicList()const
{
	return picList_;
}

void UpdateMonitorRequest::setPicList(const std::string& picList)
{
	picList_ = picList;
	setBodyParameter("PicList", picList);
}

std::string UpdateMonitorRequest::getAttributeValueList()const
{
	return attributeValueList_;
}

void UpdateMonitorRequest::setAttributeValueList(const std::string& attributeValueList)
{
	attributeValueList_ = attributeValueList;
	setBodyParameter("AttributeValueList", attributeValueList);
}

std::string UpdateMonitorRequest::getDeviceList()const
{
	return deviceList_;
}

void UpdateMonitorRequest::setDeviceList(const std::string& deviceList)
{
	deviceList_ = deviceList;
	setBodyParameter("DeviceList", deviceList);
}

std::string UpdateMonitorRequest::getAlgorithmVendor()const
{
	return algorithmVendor_;
}

void UpdateMonitorRequest::setAlgorithmVendor(const std::string& algorithmVendor)
{
	algorithmVendor_ = algorithmVendor;
	setBodyParameter("AlgorithmVendor", algorithmVendor);
}

