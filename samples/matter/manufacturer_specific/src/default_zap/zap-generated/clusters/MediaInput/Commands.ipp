/*
 *
 *    Copyright (c) 2022 Project CHIP Authors
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

// THIS FILE IS GENERATED BY ZAP
// This file is generated from clusters-Commands.ipp.zapt

#include <clusters/MediaInput/Commands.h>

#include <app/data-model/Decode.h>
#include <app/data-model/StructDecodeIterator.h>
#include <app/data-model/WrappedStructEncoder.h>

namespace chip
{
namespace app
{
	namespace Clusters
	{
		namespace MediaInput
		{
			namespace Commands
			{
				namespace SelectInput
				{

					CHIP_ERROR Type::Encode(TLV::TLVWriter &aWriter, TLV::Tag aTag) const
					{
						DataModel::WrappedStructEncoder encoder{ aWriter, aTag };
						encoder.Encode(to_underlying(Fields::kIndex), index);
						return encoder.Finalize();
					}

					CHIP_ERROR DecodableType::Decode(TLV::TLVReader &reader)
					{
						detail::StructDecodeIterator __iterator(reader);
						while (true) {
							uint8_t __context_tag = 0;
							CHIP_ERROR err = __iterator.Next(__context_tag);
							VerifyOrReturnError(err != CHIP_ERROR_END_OF_TLV,
									    CHIP_NO_ERROR);
							ReturnErrorOnFailure(err);

							if (__context_tag == to_underlying(Fields::kIndex)) {
								err = DataModel::Decode(reader, index);
							}

							ReturnErrorOnFailure(err);
						}
					}
				} // namespace SelectInput.
				namespace ShowInputStatus
				{

					CHIP_ERROR Type::Encode(TLV::TLVWriter &aWriter, TLV::Tag aTag) const
					{
						DataModel::WrappedStructEncoder encoder{ aWriter, aTag };
						return encoder.Finalize();
					}

					CHIP_ERROR DecodableType::Decode(TLV::TLVReader &reader)
					{
						detail::StructDecodeIterator __iterator(reader);
						while (true) {
							uint8_t __context_tag = 0;
							CHIP_ERROR err = __iterator.Next(__context_tag);
							VerifyOrReturnError(err != CHIP_ERROR_END_OF_TLV,
									    CHIP_NO_ERROR);
							ReturnErrorOnFailure(err);

							ReturnErrorOnFailure(err);
						}
					}
				} // namespace ShowInputStatus.
				namespace HideInputStatus
				{

					CHIP_ERROR Type::Encode(TLV::TLVWriter &aWriter, TLV::Tag aTag) const
					{
						DataModel::WrappedStructEncoder encoder{ aWriter, aTag };
						return encoder.Finalize();
					}

					CHIP_ERROR DecodableType::Decode(TLV::TLVReader &reader)
					{
						detail::StructDecodeIterator __iterator(reader);
						while (true) {
							uint8_t __context_tag = 0;
							CHIP_ERROR err = __iterator.Next(__context_tag);
							VerifyOrReturnError(err != CHIP_ERROR_END_OF_TLV,
									    CHIP_NO_ERROR);
							ReturnErrorOnFailure(err);

							ReturnErrorOnFailure(err);
						}
					}
				} // namespace HideInputStatus.
				namespace RenameInput
				{

					CHIP_ERROR Type::Encode(TLV::TLVWriter &aWriter, TLV::Tag aTag) const
					{
						DataModel::WrappedStructEncoder encoder{ aWriter, aTag };
						encoder.Encode(to_underlying(Fields::kIndex), index);
						encoder.Encode(to_underlying(Fields::kName), name);
						return encoder.Finalize();
					}

					CHIP_ERROR DecodableType::Decode(TLV::TLVReader &reader)
					{
						detail::StructDecodeIterator __iterator(reader);
						while (true) {
							uint8_t __context_tag = 0;
							CHIP_ERROR err = __iterator.Next(__context_tag);
							VerifyOrReturnError(err != CHIP_ERROR_END_OF_TLV,
									    CHIP_NO_ERROR);
							ReturnErrorOnFailure(err);

							if (__context_tag == to_underlying(Fields::kIndex)) {
								err = DataModel::Decode(reader, index);
							} else if (__context_tag == to_underlying(Fields::kName)) {
								err = DataModel::Decode(reader, name);
							}

							ReturnErrorOnFailure(err);
						}
					}
				} // namespace RenameInput.
			} // namespace Commands
		} // namespace MediaInput
	} // namespace Clusters
} // namespace app
} // namespace chip
