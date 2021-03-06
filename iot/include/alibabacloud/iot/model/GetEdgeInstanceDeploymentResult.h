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

#ifndef ALIBABACLOUD_IOT_MODEL_GETEDGEINSTANCEDEPLOYMENTRESULT_H_
#define ALIBABACLOUD_IOT_MODEL_GETEDGEINSTANCEDEPLOYMENTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/iot/IotExport.h>

namespace AlibabaCloud
{
	namespace Iot
	{
		namespace Model
		{
			class ALIBABACLOUD_IOT_EXPORT GetEdgeInstanceDeploymentResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct Task
					{
						struct ResourceSnapshot
						{
							int status;
							std::string gmtCompleted;
							std::string log;
							long gmtCreateTimestamp;
							std::string resourceName;
							long gmtCompletedTimestamp;
							std::string gmtModified;
							std::string resourceType;
							std::string snapshotId;
							std::string gmtCreate;
							std::string resourceId;
							int stage;
							long gmtModifiedTimestamp;
							int operateType;
						};
						int status;
						std::string gmtCreate;
						std::string gmtCompleted;
						std::string taskId;
						long gmtCreateTimestamp;
						long gmtCompletedTimestamp;
						std::vector<Task::ResourceSnapshot> resourceSnapshotList;
						std::string gmtModified;
						int stage;
						long gmtModifiedTimestamp;
						std::string gatewayId;
					};
					int status;
					std::string gmtCreate;
					std::string gmtCompleted;
					std::string deploymentId;
					std::string type;
					std::string description;
					long gmtCreateTimestamp;
					long gmtCompletedTimestamp;
					std::vector<Task> taskList;
					std::string gmtModified;
					long gmtModifiedTimestamp;
				};


				GetEdgeInstanceDeploymentResult();
				explicit GetEdgeInstanceDeploymentResult(const std::string &payload);
				~GetEdgeInstanceDeploymentResult();
				Data getData()const;
				std::string getErrorMessage()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				Data data_;
				std::string errorMessage_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IOT_MODEL_GETEDGEINSTANCEDEPLOYMENTRESULT_H_