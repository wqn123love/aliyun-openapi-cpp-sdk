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

#ifndef ALIBABACLOUD_VCS_MODEL_GETFACEMODELRESULTRESULT_H_
#define ALIBABACLOUD_VCS_MODEL_GETFACEMODELRESULTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/vcs/VcsExport.h>

namespace AlibabaCloud
{
	namespace Vcs
	{
		namespace Model
		{
			class ALIBABACLOUD_VCS_EXPORT GetFaceModelResultResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct RecordsItem
					{
						std::string mustacheStyle;
						int genderCode;
						int respiratorColor;
						int ethicCode;
						float rightBottomX;
						int ageLowerLimit;
						std::string faceStyle;
						float rightBottomY;
						std::vector<std::string> featureData;
						float leftTopY;
						int capStyle;
						float leftTopX;
						int hairColor;
						int skinColor;
						int ageUpLimit;
						int glassStyle;
						int glassColor;
						int hairStyle;
						int capColor;
					};
					std::vector<RecordsItem> records;
				};


				GetFaceModelResultResult();
				explicit GetFaceModelResultResult(const std::string &payload);
				~GetFaceModelResultResult();
				std::string getMessage()const;
				Data getData()const;
				std::string getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				Data data_;
				std::string code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VCS_MODEL_GETFACEMODELRESULTRESULT_H_