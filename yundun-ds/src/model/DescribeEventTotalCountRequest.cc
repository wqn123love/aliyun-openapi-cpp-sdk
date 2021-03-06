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

#include <alibabacloud/yundun-ds/model/DescribeEventTotalCountRequest.h>

using AlibabaCloud::Yundun_ds::Model::DescribeEventTotalCountRequest;

DescribeEventTotalCountRequest::DescribeEventTotalCountRequest() :
	RpcServiceRequest("yundun-ds", "2019-01-03", "DescribeEventTotalCount")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeEventTotalCountRequest::~DescribeEventTotalCountRequest()
{}

int DescribeEventTotalCountRequest::getFeatureType()const
{
	return featureType_;
}

void DescribeEventTotalCountRequest::setFeatureType(int featureType)
{
	featureType_ = featureType;
	setParameter("FeatureType", std::to_string(featureType));
}

int DescribeEventTotalCountRequest::getCountType()const
{
	return countType_;
}

void DescribeEventTotalCountRequest::setCountType(int countType)
{
	countType_ = countType;
	setParameter("CountType", std::to_string(countType));
}

std::string DescribeEventTotalCountRequest::getTypeCode()const
{
	return typeCode_;
}

void DescribeEventTotalCountRequest::setTypeCode(const std::string& typeCode)
{
	typeCode_ = typeCode;
	setParameter("TypeCode", typeCode);
}

std::string DescribeEventTotalCountRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeEventTotalCountRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string DescribeEventTotalCountRequest::getLang()const
{
	return lang_;
}

void DescribeEventTotalCountRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

