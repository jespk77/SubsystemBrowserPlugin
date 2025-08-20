﻿// Copyright 2022, Aquanox.

#pragma once

#include "Model/SubsystemBrowserCategory.h"

struct SUBSYSTEMBROWSER_API FSubsystemCategory_GameInstance : public FSubsystemCategory
{
	FSubsystemCategory_GameInstance();
	virtual UClass* GetSubsystemClass() const override;
	virtual void Select(UWorld* InContext, TArray<UObject*>& OutData) const override;
};
