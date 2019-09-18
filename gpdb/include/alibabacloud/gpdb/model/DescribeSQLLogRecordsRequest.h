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

#ifndef ALIBABACLOUD_GPDB_MODEL_DESCRIBESQLLOGRECORDSREQUEST_H_
#define ALIBABACLOUD_GPDB_MODEL_DESCRIBESQLLOGRECORDSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/gpdb/GpdbExport.h>

namespace AlibabaCloud
{
	namespace Gpdb
	{
		namespace Model
		{
			class ALIBABACLOUD_GPDB_EXPORT DescribeSQLLogRecordsRequest : public RpcServiceRequest
			{

			public:
				DescribeSQLLogRecordsRequest();
				~DescribeSQLLogRecordsRequest();

				std::string getStartTime()const;
				void setStartTime(const std::string& startTime);
				std::string getQueryKeywords()const;
				void setQueryKeywords(const std::string& queryKeywords);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getDatabase()const;
				void setDatabase(const std::string& database);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getDBInstanceId()const;
				void setDBInstanceId(const std::string& dBInstanceId);
				std::string getEndTime()const;
				void setEndTime(const std::string& endTime);
				std::string getForm()const;
				void setForm(const std::string& form);
				std::string getUser()const;
				void setUser(const std::string& user);

            private:
				std::string startTime_;
				std::string queryKeywords_;
				int pageNumber_;
				std::string accessKeyId_;
				std::string database_;
				int pageSize_;
				std::string dBInstanceId_;
				std::string endTime_;
				std::string form_;
				std::string user_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GPDB_MODEL_DESCRIBESQLLOGRECORDSREQUEST_H_