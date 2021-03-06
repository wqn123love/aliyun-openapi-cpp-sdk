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

#include <alibabacloud/vcs/model/GetMonitorResultResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vcs;
using namespace AlibabaCloud::Vcs::Model;

GetMonitorResultResult::GetMonitorResultResult() :
	ServiceResult()
{}

GetMonitorResultResult::GetMonitorResultResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetMonitorResultResult::~GetMonitorResultResult()
{}

void GetMonitorResultResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["MaxId"].isNull())
		data_.maxId = dataNode["MaxId"].asString();
	auto allRecordsNode = dataNode["Records"]["RecordsItem"];
	for (auto dataNodeRecordsRecordsItem : allRecordsNode)
	{
		Data::RecordsItem recordsItemObject;
		if(!dataNodeRecordsRecordsItem["RightBottomY"].isNull())
			recordsItemObject.rightBottomY = dataNodeRecordsRecordsItem["RightBottomY"].asString();
		if(!dataNodeRecordsRecordsItem["RightBottomX"].isNull())
			recordsItemObject.rightBottomX = dataNodeRecordsRecordsItem["RightBottomX"].asString();
		if(!dataNodeRecordsRecordsItem["LeftUpY"].isNull())
			recordsItemObject.leftUpY = dataNodeRecordsRecordsItem["LeftUpY"].asString();
		if(!dataNodeRecordsRecordsItem["LeftUpX"].isNull())
			recordsItemObject.leftUpX = dataNodeRecordsRecordsItem["LeftUpX"].asString();
		if(!dataNodeRecordsRecordsItem["GbId"].isNull())
			recordsItemObject.gbId = dataNodeRecordsRecordsItem["GbId"].asString();
		if(!dataNodeRecordsRecordsItem["Score"].isNull())
			recordsItemObject.score = dataNodeRecordsRecordsItem["Score"].asString();
		if(!dataNodeRecordsRecordsItem["PicUrl"].isNull())
			recordsItemObject.picUrl = dataNodeRecordsRecordsItem["PicUrl"].asString();
		if(!dataNodeRecordsRecordsItem["ShotTime"].isNull())
			recordsItemObject.shotTime = dataNodeRecordsRecordsItem["ShotTime"].asString();
		if(!dataNodeRecordsRecordsItem["MonitorPicUrl"].isNull())
			recordsItemObject.monitorPicUrl = dataNodeRecordsRecordsItem["MonitorPicUrl"].asString();
		if(!dataNodeRecordsRecordsItem["TargetPicUrl"].isNull())
			recordsItemObject.targetPicUrl = dataNodeRecordsRecordsItem["TargetPicUrl"].asString();
		data_.records.push_back(recordsItemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetMonitorResultResult::getMessage()const
{
	return message_;
}

GetMonitorResultResult::Data GetMonitorResultResult::getData()const
{
	return data_;
}

std::string GetMonitorResultResult::getCode()const
{
	return code_;
}

