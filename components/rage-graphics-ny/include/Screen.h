/*
 * This file is part of the CitizenFX project - http://citizen.re/
 *
 * See LICENSE and MENTIONS in the root of the source tree for information
 * regarding licensing.
 */

#pragma once

inline int GetScreenResolutionX()
{
	return *(int*)0xFDCEAC;
}

inline int GetScreenResolutionY()
{
	return *(int*)0xFDCEB0;
}