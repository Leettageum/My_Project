#pragma once

UENUM(BlueprintType)
enum class CStatusType : uint8
{
	CStatus_Dead UMETA(DisplayName = "Dead"),
	CStatus_Live UMETA(DisplayName = "Live")
};