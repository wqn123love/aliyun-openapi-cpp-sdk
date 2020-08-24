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

#ifndef ALIBABACLOUD_DEVOPS_RDC_MODEL_DELETEDEVOPSPROJECTTASKREQUEST_H_
#define ALIBABACLOUD_DEVOPS_RDC_MODEL_DELETEDEVOPSPROJECTTASKREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/devops-rdc/Devops_rdcExport.h>

namespace AlibabaCloud
{
	namespace Devops_rdc
	{
		namespace Model
		{
			class ALIBABACLOUD_DEVOPS_RDC_EXPORT DeleteDevopsProjectTaskRequest : public RpcServiceRequest
			{

			public:
				DeleteDevopsProjectTaskRequest();
				~DeleteDevopsProjectTaskRequest();

				std::string getOrgId()const;
				void setOrgId(const std::string& orgId);
				std::string getTaskId()const;
				void setTaskId(const std::string& taskId);

            private:
				std::string orgId_;
				std::string taskId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DEVOPS_RDC_MODEL_DELETEDEVOPSPROJECTTASKREQUEST_H_