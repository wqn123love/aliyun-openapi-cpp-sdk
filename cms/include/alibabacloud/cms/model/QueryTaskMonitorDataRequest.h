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

#ifndef ALIBABACLOUD_CMS_MODEL_QUERYTASKMONITORDATAREQUEST_H_
#define ALIBABACLOUD_CMS_MODEL_QUERYTASKMONITORDATAREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cms/CmsExport.h>

namespace AlibabaCloud
{
	namespace Cms
	{
		namespace Model
		{
			class ALIBABACLOUD_CMS_EXPORT QueryTaskMonitorDataRequest : public RpcServiceRequest
			{

			public:
				QueryTaskMonitorDataRequest();
				~QueryTaskMonitorDataRequest();

				std::string getCursor()const;
				void setCursor(const std::string& cursor);
				std::string getStartTime()const;
				void setStartTime(const std::string& startTime);
				std::string getType()const;
				void setType(const std::string& type);
				std::string getMetricName()const;
				void setMetricName(const std::string& metricName);
				std::string getTaskId()const;
				void setTaskId(const std::string& taskId);
				std::string getPeriod()const;
				void setPeriod(const std::string& period);
				int getLength()const;
				void setLength(int length);
				std::string getEndTime()const;
				void setEndTime(const std::string& endTime);

            private:
				std::string cursor_;
				std::string startTime_;
				std::string type_;
				std::string metricName_;
				std::string taskId_;
				std::string period_;
				int length_;
				std::string endTime_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CMS_MODEL_QUERYTASKMONITORDATAREQUEST_H_