/*
 * Copyright © 2011-2020 Frictional Games
 *
 * This file is part of Amnesia: A Machine For Pigs.
 *
 * Amnesia: A Machine For Pigs is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.

 * Amnesia: A Machine For Pigs is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Amnesia: A Machine For Pigs.  If not, see <https://www.gnu.org/licenses/>.
 */

#ifndef HPL_LOWLEVELSOUND_FMOD_H
#define HPL_LOWLEVELSOUND_FMOD_H

#include "sound/LowLevelSound.h"
#ifdef INCLUDE_FMOD
namespace hpl {

	class cSoundDeviceIdentifierFmod : public iSoundDeviceIdentifier
	{
	public:
		cSoundDeviceIdentifierFmod();

		int	GetID() { return mlID; };
		const tString& GetName() { return msName; }
		bool IsDefault() { return mbDefault; }
	private:
		int mlID;
		tString msName;
		bool mbDefault;
	};

	class cLowLevelSoundFmod : public iLowLevelSound
	{
	public:
		cLowLevelSoundFmod();
		~cLowLevelSoundFmod();

		void GetSupportedFormats(tStringList &alstFormats);

		void Init(int alSoundDeviceID, bool abUseEnvAudio, int alMaxChannels,
			int alStreamUpdateFreq, bool abUseThreading, bool abUseVoiceManagement,
			int alMaxMonoSourceHint, int alMaxStereoSourceHint,
			int alStreamingBufferSize, int alStreamingBufferCount, bool abEnableLowLevelLog);

		iSoundData* LoadSoundData(const tString& asName,const tWString& asFilePath,
									const tString& asType, bool abStream,bool abLoopStream);

		void UpdateSound(float afTimeStep);

		void SetListenerAttributes (const cVector3f &avPos,const cVector3f &avVel,
								const cVector3f &avForward,const cVector3f &avUp);
		void SetListenerPosition(const cVector3f &avPos);

		void SetSetRolloffFactor(float afFactor);

		void SetListenerAttenuation (bool abEnabled);

		void SetVolume(float afVolume);

		void SetEnvVolume(float afEnvVolume);

	private:
		tString mvFormats[30];
	};
};
#endif
#endif // HPL_LOWLEVELSOUND_FMOD_H
