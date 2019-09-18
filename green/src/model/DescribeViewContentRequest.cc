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

#include <alibabacloud/green/model/DescribeViewContentRequest.h>

using AlibabaCloud::Green::Model::DescribeViewContentRequest;

DescribeViewContentRequest::DescribeViewContentRequest() :
	RpcServiceRequest("green", "2017-08-23", "DescribeViewContent")
{}

DescribeViewContentRequest::~DescribeViewContentRequest()
{}

std::string DescribeViewContentRequest::getImageId()const
{
	return imageId_;
}

void DescribeViewContentRequest::setImageId(const std::string& imageId)
{
	imageId_ = imageId;
	setCoreParameter("ImageId", imageId);
}

std::string DescribeViewContentRequest::getStartDate()const
{
	return startDate_;
}

void DescribeViewContentRequest::setStartDate(const std::string& startDate)
{
	startDate_ = startDate;
	setCoreParameter("StartDate", startDate);
}

std::string DescribeViewContentRequest::getScene()const
{
	return scene_;
}

void DescribeViewContentRequest::setScene(const std::string& scene)
{
	scene_ = scene;
	setCoreParameter("Scene", scene);
}

std::string DescribeViewContentRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeViewContentRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string DescribeViewContentRequest::getLibType()const
{
	return libType_;
}

void DescribeViewContentRequest::setLibType(const std::string& libType)
{
	libType_ = libType;
	setCoreParameter("LibType", libType);
}

std::string DescribeViewContentRequest::getAuditResult()const
{
	return auditResult_;
}

void DescribeViewContentRequest::setAuditResult(const std::string& auditResult)
{
	auditResult_ = auditResult;
	setCoreParameter("AuditResult", auditResult);
}

int DescribeViewContentRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeViewContentRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeViewContentRequest::getTaskId()const
{
	return taskId_;
}

void DescribeViewContentRequest::setTaskId(const std::string& taskId)
{
	taskId_ = taskId;
	setCoreParameter("TaskId", taskId);
}

int DescribeViewContentRequest::getTotalCount()const
{
	return totalCount_;
}

void DescribeViewContentRequest::setTotalCount(int totalCount)
{
	totalCount_ = totalCount;
	setCoreParameter("TotalCount", std::to_string(totalCount));
}

std::string DescribeViewContentRequest::getKeywordId()const
{
	return keywordId_;
}

void DescribeViewContentRequest::setKeywordId(const std::string& keywordId)
{
	keywordId_ = keywordId;
	setCoreParameter("KeywordId", keywordId);
}

std::string DescribeViewContentRequest::getSuggestion()const
{
	return suggestion_;
}

void DescribeViewContentRequest::setSuggestion(const std::string& suggestion)
{
	suggestion_ = suggestion;
	setCoreParameter("Suggestion", suggestion);
}

int DescribeViewContentRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeViewContentRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", std::to_string(currentPage));
}

std::string DescribeViewContentRequest::getLabel()const
{
	return label_;
}

void DescribeViewContentRequest::setLabel(const std::string& label)
{
	label_ = label;
	setCoreParameter("Label", label);
}

std::string DescribeViewContentRequest::getResourceType()const
{
	return resourceType_;
}

void DescribeViewContentRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setCoreParameter("ResourceType", resourceType);
}

std::string DescribeViewContentRequest::getBizType()const
{
	return bizType_;
}

void DescribeViewContentRequest::setBizType(const std::string& bizType)
{
	bizType_ = bizType;
	setCoreParameter("BizType", bizType);
}

std::string DescribeViewContentRequest::getEndDate()const
{
	return endDate_;
}

void DescribeViewContentRequest::setEndDate(const std::string& endDate)
{
	endDate_ = endDate;
	setCoreParameter("EndDate", endDate);
}

std::string DescribeViewContentRequest::getDataId()const
{
	return dataId_;
}

void DescribeViewContentRequest::setDataId(const std::string& dataId)
{
	dataId_ = dataId;
	setCoreParameter("DataId", dataId);
}

