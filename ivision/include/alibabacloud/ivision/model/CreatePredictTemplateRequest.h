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

#ifndef ALIBABACLOUD_IVISION_MODEL_CREATEPREDICTTEMPLATEREQUEST_H_
#define ALIBABACLOUD_IVISION_MODEL_CREATEPREDICTTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ivision/IvisionExport.h>

namespace AlibabaCloud
{
	namespace Ivision
	{
		namespace Model
		{
			class ALIBABACLOUD_IVISION_EXPORT CreatePredictTemplateRequest : public RpcServiceRequest
			{

			public:
				CreatePredictTemplateRequest();
				~CreatePredictTemplateRequest();

				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getOutput()const;
				void setOutput(const std::string& output);
				std::string getShowLog()const;
				void setShowLog(const std::string& showLog);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getModelIds()const;
				void setModelIds(const std::string& modelIds);
				std::string getName()const;
				void setName(const std::string& name);
				int getInterval()const;
				void setInterval(int interval);

            private:
				std::string description_;
				std::string output_;
				std::string showLog_;
				long ownerId_;
				std::string modelIds_;
				std::string name_;
				int interval_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IVISION_MODEL_CREATEPREDICTTEMPLATEREQUEST_H_