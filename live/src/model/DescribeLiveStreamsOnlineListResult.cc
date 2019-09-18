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

#include <alibabacloud/live/model/DescribeLiveStreamsOnlineListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeLiveStreamsOnlineListResult::DescribeLiveStreamsOnlineListResult() :
	ServiceResult()
{}

DescribeLiveStreamsOnlineListResult::DescribeLiveStreamsOnlineListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLiveStreamsOnlineListResult::~DescribeLiveStreamsOnlineListResult()
{}

void DescribeLiveStreamsOnlineListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allOnlineInfo = value["OnlineInfo"]["LiveStreamOnlineInfo"];
	for (auto value : allOnlineInfo)
	{
		LiveStreamOnlineInfo onlineInfoObject;
		if(!value["DomainName"].isNull())
			onlineInfoObject.domainName = value["DomainName"].asString();
		if(!value["AppName"].isNull())
			onlineInfoObject.appName = value["AppName"].asString();
		if(!value["StreamName"].isNull())
			onlineInfoObject.streamName = value["StreamName"].asString();
		if(!value["PublishTime"].isNull())
			onlineInfoObject.publishTime = value["PublishTime"].asString();
		if(!value["PublishUrl"].isNull())
			onlineInfoObject.publishUrl = value["PublishUrl"].asString();
		if(!value["PublishDomain"].isNull())
			onlineInfoObject.publishDomain = value["PublishDomain"].asString();
		if(!value["PublishType"].isNull())
			onlineInfoObject.publishType = value["PublishType"].asString();
		if(!value["Transcoded"].isNull())
			onlineInfoObject.transcoded = value["Transcoded"].asString();
		if(!value["TranscodeId"].isNull())
			onlineInfoObject.transcodeId = value["TranscodeId"].asString();
		if(!value["ServerIp"].isNull())
			onlineInfoObject.serverIp = value["ServerIp"].asString();
		if(!value["ClientIp"].isNull())
			onlineInfoObject.clientIp = value["ClientIp"].asString();
		if(!value["VideoCodecId"].isNull())
			onlineInfoObject.videoCodecId = std::stoi(value["VideoCodecId"].asString());
		if(!value["VideoDataRate"].isNull())
			onlineInfoObject.videoDataRate = std::stoi(value["VideoDataRate"].asString());
		if(!value["FrameRate"].isNull())
			onlineInfoObject.frameRate = std::stoi(value["FrameRate"].asString());
		if(!value["Width"].isNull())
			onlineInfoObject.width = std::stoi(value["Width"].asString());
		if(!value["Height"].isNull())
			onlineInfoObject.height = std::stoi(value["Height"].asString());
		if(!value["AudioCodecId"].isNull())
			onlineInfoObject.audioCodecId = std::stoi(value["AudioCodecId"].asString());
		if(!value["AudioDataRate"].isNull())
			onlineInfoObject.audioDataRate = std::stoi(value["AudioDataRate"].asString());
		onlineInfo_.push_back(onlineInfoObject);
	}
	if(!value["PageNum"].isNull())
		pageNum_ = std::stoi(value["PageNum"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalNum"].isNull())
		totalNum_ = std::stoi(value["TotalNum"].asString());
	if(!value["TotalPage"].isNull())
		totalPage_ = std::stoi(value["TotalPage"].asString());

}

int DescribeLiveStreamsOnlineListResult::getTotalNum()const
{
	return totalNum_;
}

int DescribeLiveStreamsOnlineListResult::getPageNum()const
{
	return pageNum_;
}

int DescribeLiveStreamsOnlineListResult::getPageSize()const
{
	return pageSize_;
}

int DescribeLiveStreamsOnlineListResult::getTotalPage()const
{
	return totalPage_;
}

std::vector<DescribeLiveStreamsOnlineListResult::LiveStreamOnlineInfo> DescribeLiveStreamsOnlineListResult::getOnlineInfo()const
{
	return onlineInfo_;
}

